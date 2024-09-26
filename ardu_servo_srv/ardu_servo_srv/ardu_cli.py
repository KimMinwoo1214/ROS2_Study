import sys
from cv_msg.srv import SrvServo
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(SrvServo, 'servo_con')  # 서비스 이름을 'servo_con'으로 맞춤
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SrvServo.Request()

    def send_request(self, degree):
        self.req.degree = degree  # 각도를 요청에 추가
        return self.cli.call_async(self.req)


def main():
    rclpy.init()

    minimal_client = MinimalClientAsync()
    future = minimal_client.send_request(int(sys.argv[1]))  # 각도를 명령줄 인자로 받음
    rclpy.spin_until_future_complete(minimal_client, future)
    response = future.result()
    minimal_client.get_logger().info(f'Result: {response.result}')

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
