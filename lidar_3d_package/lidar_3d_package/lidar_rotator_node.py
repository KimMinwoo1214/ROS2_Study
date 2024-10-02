import rclpy
from rclpy.node import Node
from tf2_ros import TransformBroadcaster
from geometry_msgs.msg import TransformStamped
from sensor_msgs.msg import JointState, LaserScan, PointCloud2
from std_msgs.msg import Header
import sensor_msgs_py.point_cloud2 as pc2
import math
import serial

class LidarRotator(Node):
    def __init__(self):
        super().__init__('lidar_rotator')

        # TF 브로드캐스터
        self.broadcaster = TransformBroadcaster(self)

        # Timer for broadcasting transforms and joint state
        self.timer = self.create_timer(0.015, self.update_lidar)

        # JointState 퍼블리셔
        self.joint_pub = self.create_publisher(JointState, '/joint_states', 10)

        # PointCloud2 퍼블리셔
        self.pointcloud_pub = self.create_publisher(PointCloud2, '/cloud', 10)

        # LaserScan 구독
        self.laser_scan_sub = self.create_subscription(
            LaserScan,
            '/scan',
            self.laser_scan_callback,
            10
        )

        # 시리얼 포트를 통해 각도 데이터를 받음
        self.serial_port = serial.Serial('/dev/ttyUSB1', baudrate=9600, timeout=1)
        self.angle = -60.0  # 기본 각도 설정

        # LaserScan 데이터를 저장
        self.laser_scan_data = None

    def laser_scan_callback(self, msg):
        # LaserScan 데이터를 저장
        self.laser_scan_data = msg

    def get_angle_from_arduino(self):
        try:
            # 시리얼 포트에서 각도 데이터를 읽음
            if self.serial_port.in_waiting > 0:
                arduino_data = self.serial_port.readline().decode('utf-8').strip()
                self.angle = float(arduino_data)
                self.get_logger().info(f"Received angle: {self.angle} degrees from Arduino")
        except Exception as e:
            self.get_logger().warn(f"Failed to read from serial: {e}")

    def broadcast_transform(self):
        # 각도를 라디안으로 변환
        radians = math.radians(self.angle)

        # TF 변환 생성
        transform = TransformStamped()
        transform.header.stamp = self.get_clock().now().to_msg()
        transform.header.frame_id = "base_link"
        transform.child_frame_id = "lidar_frame"

        # 회전 적용 (X축)
        transform.transform.rotation.x = math.sin(radians / 2.0)
        transform.transform.rotation.y = 0.0
        transform.transform.rotation.z = 0.0
        transform.transform.rotation.w = math.cos(radians / 2.0)

        # TF 변환 브로드캐스트
        self.broadcaster.sendTransform(transform)

    def publish_point_cloud(self):
        if self.laser_scan_data is None:
            self.get_logger().warn("No laser scan data available yet.")
            return

        # PointCloud2 헤더 생성
        header = Header()
        header.stamp = self.get_clock().now().to_msg()
        header.frame_id = 'laser_frame'  # frame_id 설정

        points = []
        angle = self.laser_scan_data.angle_min

        # LaserScan 데이터를 기반으로 3D 포인트 클라우드 생성
        for r in self.laser_scan_data.ranges:
            if self.laser_scan_data.range_min < r < self.laser_scan_data.range_max:
                x = r * math.cos(angle)
                y = r * math.sin(angle)
                z = 0.02  # 고정된 z 값
                points.append([x, y, z])
            angle += self.laser_scan_data.angle_increment

        # PointCloud2 메시지 생성 및 퍼블리시
        cloud_msg = pc2.create_cloud_xyz32(header, points)
        self.pointcloud_pub.publish(cloud_msg)
        self.get_logger().info(f"Published PointCloud2 with {len(points)} points")


    def publish_joint_states(self):
        # JointState 메시지 생성
        joint_state = JointState()
        joint_state.header = Header()
        joint_state.header.stamp = self.get_clock().now().to_msg()

        # 조인트 이름 설정
        joint_state.name = ['base_to_lidar']

        # 현재 각도를 라디안 값으로 변환
        joint_state.position = [math.radians(self.angle)]

        # JointState 퍼블리시
        self.joint_pub.publish(joint_state)

    def update_lidar(self):
        # Arduino에서 최신 각도 가져오기
        self.get_angle_from_arduino()

        # TF 변환 브로드캐스트
        self.broadcast_transform()

        # JointState 퍼블리시
        self.publish_joint_states()

        # PointCloud2 퍼블리시
        self.publish_point_cloud()

def main(args=None):
    rclpy.init(args=args)
    node = LidarRotator()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
