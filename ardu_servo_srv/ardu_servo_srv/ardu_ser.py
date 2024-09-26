from cv_msg.srv import SrvServo

import rclpy
from rclpy.node import Node
import serial
import time

class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.port = '/dev/ttyUSB0'
        self.baudrate = 9600
        self.timeout =   1
        self.ser = serial.Serial(self.port, self.baudrate, timeout=self.timeout)

        self.srv = self.create_service(SrvServo, 'servo_con', self.servo_callback)
        
    def servo_callback(self, request, response):
        degree = str(request.degree)  # 클라이언트에서 받은 값
        self.get_logger().info(f'Received degree: {degree}')
        
        # 아두이노로 degree 값을 전송
        self.ser.write(f'{degree}\n'.encode())

        response.result = 1  # 응답을 성공으로 설정
        return response

def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()