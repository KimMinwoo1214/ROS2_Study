import rclpy
from rclpy.node import Node
from cv_msg.msg import MsgServo

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        
        self.publisher_ = self.create_publisher(MsgServo, 'topic_servo', 10)
        timer_period = 2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.pwm_value = 1000  # Start from minimum PWM value

    def timer_callback(self):
        msg = MsgServo()
        
        self.pwm_value = int(input("Type PWM Value(1000~5250): "))
        # # Increment PWM value for testing
        # self.pwm_value += 300
        # if self.pwm_value > 5250:  # Maximum PWM value
        #     self.pwm_value = 1000  # Reset to minimum PWM value

        # Publish the PWM value to the topic
        msg.degree = self.pwm_value  # Using degree field to publish PWM value
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing PWM value: {self.pwm_value}')

def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
