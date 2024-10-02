import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan, PointCloud2
from laser_geometry import LaserProjection
import tf2_ros
import numpy as np

class LidarTo3D(Node):
    def __init__(self):
        super().__init__('lidar_to_3d_node')
        self.lp = LaserProjection()
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)
        self.scan_sub = self.create_subscription(LaserScan, '/scan', self.scan_callback, 10)
        self.pc_pub = self.create_publisher(PointCloud2, '/point_cloud', 10)

        self.accumulated_cloud = None  # 누적된 포인트 클라우드 데이터를 저장할 변수

    def scan_callback(self, scan):
        try:
            # LaserScan 데이터를 PointCloud2로 변환
            cloud_msg = self.lp.projectLaser(scan)

            # 변환된 PointCloud2 데이터를 누적
            if self.accumulated_cloud is None:
                self.accumulated_cloud = cloud_msg
            else:
                # 새로운 PointCloud2 데이터를 누적
                self.accumulated_cloud = self._merge_clouds(self.accumulated_cloud, cloud_msg)

            # 누적된 PointCloud2 데이터를 퍼블리시
            self.pc_pub.publish(self.accumulated_cloud)

        except Exception as e:
            self.get_logger().warn(f"Failed to process scan: {e}")

    def _merge_clouds(self, cloud1, cloud2):
        # 두 PointCloud2 메시지를 결합하여 하나로 만듦
        merged_cloud = PointCloud2()
        merged_cloud.header = cloud1.header

        merged_cloud.height = cloud1.height + cloud2.height
        merged_cloud.width = cloud1.width + cloud2.width
        merged_cloud.fields = cloud1.fields
        merged_cloud.is_bigendian = cloud1.is_bigendian
        merged_cloud.point_step = cloud1.point_step
        merged_cloud.row_step = cloud1.row_step + cloud2.row_step
        merged_cloud.data = cloud1.data + cloud2.data
        merged_cloud.is_dense = cloud1.is_dense and cloud2.is_dense

        return merged_cloud

def main(args=None):
    rclpy.init(args=args)
    node = LidarTo3D()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
