import rclpy
from rclpy.node import Node

from cv_msg.msg import MsgServo
import serial

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.port = '/dev/ttyUSB0'
        self.baudrate = 9600
        self.timeout = 1
        self.ser = serial.Serial(self.port, self.baudrate, timeout=self.timeout)
        
        self.subscription = self.create_subscription(
            MsgServo,
            'topic_servo',
            self.request_callback,
            10)
        self.subscription  # prevent unused variable warning

    def request_callback(self, msg):
        # Send the PWM value to Arduino via serial
        self.pwm_value = msg.degree
        self.ser.write(f'{self.pwm_value}\n'.encode())  # Send PWM value with newline to indicate end of message

        self.get_logger().info('I heard PWM value: "%s"' % msg.degree)


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