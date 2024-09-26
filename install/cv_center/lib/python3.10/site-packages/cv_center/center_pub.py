import rclpy  # Python Client Library for ROS 2
from rclpy.node import Node  # Handles the creation of nodes
from sensor_msgs.msg import Image  # Image is the message type
from cv_bridge import CvBridge  # Package to convert between ROS and OpenCV Images
import cv2  # OpenCV library
import numpy as np
from geometry_msgs.msg import Point  # For publishing center coordinates

class ImagePublisher(Node):
    """
    Create an ImagePublisher class, which is a subclass of the Node class.
    """
    def __init__(self):
        """
        Class constructor to set up the node
        """
        # Initiate the Node class's constructor and give it a name
        super().__init__('image_publisher')
        
        # Create the publisher for video frames
        self.publisher_ = self.create_publisher(Image, 'video_frames', 10)
        # Publisher for the center point of the green object
        self.center_publisher_ = self.create_publisher(Point, 'green_object_center', 10)
        
        # Publish a message every 0.1 seconds
        timer_period = 0.1  # seconds
        
        # Create the timer
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
        # Create a VideoCapture object (webcam)
        self.cap = cv2.VideoCapture(0)
        
        # Used to convert between ROS and OpenCV images
        self.br = CvBridge()
    
    def timer_callback(self):
        """
        Callback function.
        This function gets called every 0.1 seconds.
        """
        # Capture frame-by-frame
        ret, frame = self.cap.read()
        
        if ret:
            # Convert the frame to HSV color space
            hsv_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
            
            # Define the range for green color in HSV
            lower_green = np.array([40, 40, 40])
            upper_green = np.array([80, 255, 255])
            
            # Create a mask for green color
            mask = cv2.inRange(hsv_frame, lower_green, upper_green)
            
            # Find contours in the mask
            contours, _ = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
            
            # If any contours are found, find the largest one and its center
            if contours:
                largest_contour = max(contours, key=cv2.contourArea)
                M = cv2.moments(largest_contour)
                
                if M["m00"] != 0:
                    cx = int(M["m10"] / M["m00"])
                    cy = int(M["m01"] / M["m00"])
                    
                    # Draw a circle at the center of the green object
                    cv2.circle(frame, (cx, cy), 5, (255, 0, 0), -1)
                    
                    # Create a Point message for the center coordinates
                    center_msg = Point()
                    center_msg.x = float(cx)
                    center_msg.y = float(cy)
                    center_msg.z = 0.0  # 2D coordinates, so z is 0
                    
                    # Publish the center coordinates
                    self.center_publisher_.publish(center_msg)
                    
                    self.get_logger().info(f'Publishing center: ({cx}, {cy})')
                    
            # Publish the video frame with the highlighted center
            self.publisher_.publish(self.br.cv2_to_imgmsg(frame, encoding="bgr8"))
        
        # Display the message on the console
        self.get_logger().info('Publishing video frame')
    
def main(args=None):
    # Initialize the rclpy library
    rclpy.init(args=args)
    
    # Create the node
    image_publisher = ImagePublisher()
    
    # Spin the node so the callback function is called.
    rclpy.spin(image_publisher)
    
    # Destroy the node explicitly (optional)
    image_publisher.destroy_node()
    
    # Shutdown the ROS client library for Python
    rclpy.shutdown()

if __name__ == '__main__':
    main()
