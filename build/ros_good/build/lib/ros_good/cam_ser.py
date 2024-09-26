from cv_msg.srv import SrvGood
import rclpy
from rclpy.node import Node
import cv2
import base64

class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')

        # Initialize the camera
        self.cap = cv2.VideoCapture(0)
        
        # Create a service for handling image capture requests
        self.srv = self.create_service(SrvGood, 'camera', self.start_cam_callback)
        self.get_logger().info('Server running...')

    def start_cam_callback(self, request, response):
        """
        Service callback function that captures a camera image when requested.
        """
        ret, frame = self.cap.read()

        if ret:
            # Encode the image as JPEG and then convert to a base64 string
            _, buffer = cv2.imencode('.jpg', frame)
            img_str = base64.b64encode(buffer).decode('utf-8')
            
            # Assign the image string to the response
            response.image_data = img_str
            
            self.get_logger().info('Captured and sent image')
        else:
            self.get_logger().error('Failed to capture image')

        return response

def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()
