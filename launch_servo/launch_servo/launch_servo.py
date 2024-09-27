import rclpy
from rclpy.node import Node

from std_msgs.msg import Int64
from geometry_msgs.msg import Twist

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        
        # Servo 제어를 위한 토픽 구독
        self.subscription = self.create_subscription(
            Int64,
            'topic_servo_kmw',
            self.listener_callback,
            10)
        
        # Twist 메시지를 구독하여 키보드 입력에 따른 움직임 제어
        self.sub_teleop = self.create_subscription(
            Twist,
            'cmd_vel',  # teleop_twist_keyboard에서 퍼블리시하는 기본 토픽 이름
            self.teleop_callback,
            10)

    def listener_callback(self, msg):
        # Servo PWM 값을 수신 (현재 아두이노 통신은 비활성화 상태)
        self.pwm_value = msg.data
        self.get_logger().info('I heard PWM value: "%s"' % msg.data)

    def teleop_callback(self, msg):
        # Twist 메시지에서 선형 및 회전 속도 추출
        linear_x = msg.linear.x
        linear_y = msg.linear.y
        linear_z = msg.linear.z
        angular_x = msg.angular.x
        angular_y = msg.angular.y
        angular_z = msg.angular.z

        # 메시지 값 출력 (teleop_twist_keyboard에서 퍼블리시한 것처럼)
        self.get_logger().info(f'Received Twist message:\n'
                               f'Linear - x: {linear_x}, y: {linear_y}, z: {linear_z}\n'
                               f'Angular - x: {angular_x}, y: {angular_y}, z: {angular_z}')

def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
