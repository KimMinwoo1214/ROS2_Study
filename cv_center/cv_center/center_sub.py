import rclpy # Python library for ROS 2
from rclpy.node import Node # Handles the creation of nodes
from sensor_msgs.msg import Image # Image is the message type
from cv_bridge import CvBridge # Package to convert between ROS and OpenCV Images
import cv2 # OpenCV library
from geometry_msgs.msg import Point # For receiving center coordinates

class ImageSubscriber(Node):
    """
    Create an ImageSubscriber class, which is a subclass of the Node class.
    """
    def __init__(self):
        """
        Class constructor to set up the node
        """
        # Initiate the Node class's constructor and give it a name
        super().__init__('image_subscriber')
          
        # Create a subscriber for video frames (images)
        self.image_subscription = self.create_subscription(
            Image,
            'video_frames',
            self.image_callback,
            10)
        self.image_subscription  # prevent unused variable warning

        # Create a subscriber for green object center coordinates
        self.center_subscription = self.create_subscription(
            Point,
            'green_object_center',
            self.center_callback,
            10)
        self.center_subscription  # prevent unused variable warning
          
        # Used to convert between ROS and OpenCV images
        self.br = CvBridge()

        # To store the center coordinates of the green object
        self.center_x = 0
        self.center_y = 0
   
    def image_callback(self, data):
        """
        Callback function for receiving image data.
        """
        # Convert ROS Image message to OpenCV image
        current_frame = self.br.imgmsg_to_cv2(data, "bgr8")
        
        # Display the image
        cv2.imshow("Camera", current_frame)
        cv2.waitKey(1)

        # Optionally, display the current green object center coordinates on the image
        if self.center_x and self.center_y:
            # Convert the center coordinates to integers
            cx = int(self.center_x)
            cy = int(self.center_y)
            
            # Draw the circle at the center of the green object
            cv2.circle(current_frame, (cx, cy), 5, (0, 0, 255), -1)
            cv2.putText(current_frame, f"Center: ({cx}, {cy})", 
                        (cx + 10, cy + 10), cv2.FONT_HERSHEY_SIMPLEX, 
                        0.5, (0, 0, 255), 1, cv2.LINE_AA)
            cv2.imshow("Camera with center", current_frame)

    
    def center_callback(self, msg):
        """
        Callback function for receiving the center of the green object.
        """
        # Store the coordinates received
        self.center_x = msg.x
        self.center_y = msg.y

        # Log the received coordinates
        self.get_logger().info(f'Received green object center: x={self.center_x}, y={self.center_y}')
  
def main(args=None):
    # Initialize the rclpy library
    rclpy.init(args=args)
    
    # Create the node
    image_subscriber = ImageSubscriber()
    
    # Spin the node so the callback functions are called.
    rclpy.spin(image_subscriber)
    
    # Destroy the node explicitly
    image_subscriber.destroy_node()
    
    # Shutdown the ROS client library for Python
    rclpy.shutdown()
  
if __name__ == '__main__':
    main()
