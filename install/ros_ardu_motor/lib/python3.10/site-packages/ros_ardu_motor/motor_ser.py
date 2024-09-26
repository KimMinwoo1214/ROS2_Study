from cv_msg.srv import SrvMotor

import rclpy
from rclpy.node import Node
import serial
import time

class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.port = '/dev/ttyUSB0'
        self.baudrate = 9600
        self.timeout = 1
        self.ser = serial.Serial(self.port, self.baudrate, timeout=self.timeout)

        self.srv = self.create_service(SrvMotor, 'motor_con', self.motor_callback)
        
    def motor_callback(self, request, response):
        if request.dir == 1:   
            message = 'f' + str(request.speed)
            self.ser.write(message.encode())
        if request.dir == 2:   
            message = 'b' + str(request.speed)
            self.ser.write(message.encode())
        response.answer = 45
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.dir, request.speed))

        return response


def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()