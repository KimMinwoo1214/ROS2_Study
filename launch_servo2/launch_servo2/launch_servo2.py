import rclpy
from rclpy.node import Node

from std_msgs.msg import Int64
from geometry_msgs.msg import Twist
import serial

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.port = '/dev/ttyUSB0'
        self.baudrate = 9600
        self.timeout = 1
        self.ser = serial.Serial(self.port, self.baudrate, timeout=self.timeout)
        
        self.subscription = self.create_subscription(
            Int64,
            'topic_servo_kmw',
            self.request_callback,
            10)
        
        self.teleop_sub = self.create_subscription(
            Twist,
            'cmd_vel',
            self.teleop_callback,
            10)

    def request_callback(self, msg):
        # Send the PWM value to Arduino via serial
        self.pwm_value = msg.degree
        self.ser.write(f'{self.pwm_value}\n'.encode())  # Send PWM value with newline to indicate end of message

        self.get_logger().info('I heard PWM value: "%s"' % msg.degree)

    def teleop_callback(self, msg):
        # Twist 메시지에서 선형 및 각속도 값 추출
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
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()