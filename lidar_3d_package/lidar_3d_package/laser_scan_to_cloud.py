import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan, PointCloud2
from std_msgs.msg import Header
import sensor_msgs_py.point_cloud2 as pc2
import math

class LaserScanToPointCloud(Node):
    def __init__(self):
        super().__init__('laser_scan_to_point_cloud')

        # LaserScan 구독
        self.scan_sub = self.create_subscription(
            LaserScan,
            '/scan',
            self.laser_scan_callback,
            10
        )

        # PointCloud2 퍼블리셔
        self.pointcloud_pub = self.create_publisher(PointCloud2, '/cloud', 10)

        # LaserScan 데이터를 저장할 변수
        self.laser_scan_data = None

    def laser_scan_callback(self, msg):
        # LaserScan 데이터를 저장
        self.laser_scan_data = msg

    def publish_point_cloud(self):
        if self.laser_scan_data is None:
            self.get_logger().warn("No laser scan data available yet.")
            return

        header = Header()
        header.stamp = self.get_clock().now().to_msg()
        header.frame_id = self.laser_scan_data.header.frame_id

        points = []
        angle = self.laser_scan_data.angle_min

        # LaserScan 데이터를 포인트 클라우드로 변환
        for r in self.laser_scan_data.ranges:
            if self.laser_scan_data.range_min < r < self.laser_scan_data.range_max:
                x = r * math.cos(angle)
                y = r * math.sin(angle)
                z = 0.0  # 2D LiDAR이므로 z 값은 0
                points.append([x, y, z])
            angle += self.laser_scan_data.angle_increment

        # PointCloud2 메시지 생성
        cloud_msg = pc2.create_cloud_xyz32(header, points)

        # PointCloud2 메시지 퍼블리시
        self.pointcloud_pub.publish(cloud_msg)

def main(args=None):
    rclpy.init(args=args)
    node = LaserScanToPointCloud()

    # 주기적으로 PointCloud2 퍼블리시
    timer_period = 0.1  # 0.1초마다 퍼블리시
    node.create_timer(timer_period, node.publish_point_cloud)

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
