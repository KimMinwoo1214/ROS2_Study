import sys

from cv_msg.srv import SrvMotor
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(SrvMotor, 'motor_con')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SrvMotor.Request()

    def send_request(self, a, b):
        self.req.dir = a
        self.req.speed = b
        return self.cli.call_async(self.req)


def main():
    rclpy.init()

    minimal_client = MinimalClientAsync()
    future = minimal_client.send_request(int(sys.argv[1]), int(sys.argv[2]))
    rclpy.spin_until_future_complete(minimal_client, future)
    response = future.result()
    minimal_client.get_logger().info(
        'Result: %d, Speed: %d = %d' %
        (int(sys.argv[1]), int(sys.argv[2]), response.answer))

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()