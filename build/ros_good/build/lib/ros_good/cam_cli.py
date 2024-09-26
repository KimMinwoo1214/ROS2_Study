from cv_msg.srv import SrvGood
import rclpy
from rclpy.node import Node
import cv2
import base64
import numpy as np

class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(SrvGood, 'camera')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SrvGood.Request()

    def send_request(self):
        """
        Send a request to capture and receive an image from the server.
        """
        return self.cli.call_async(self.req)

def main():
    rclpy.init()

    minimal_client = MinimalClientAsync()

    try:
        while True:
            # 사용자 입력 대기
            input_str = input("Press 's' to capture image (or type 'exit' to quit): ")

            if input_str.lower() == 'exit':
                print("Exiting client...")
                break

            elif input_str.lower() == 's':
                # 서버에 요청 보내기
                future = minimal_client.send_request()

                # 서버 응답 대기 및 처리
                rclpy.spin_until_future_complete(minimal_client, future)
                response = future.result()

                if response is not None:
                    # base64로 인코딩된 이미지 데이터를 디코딩
                    img_data = base64.b64decode(response.image_data)
                    np_img = np.frombuffer(img_data, dtype=np.uint8)
                    frame = cv2.imdecode(np_img, cv2.IMREAD_COLOR)

                    # 클라이언트에서 이미지 표시
                    if frame is not None:
                        cv2.imshow('Captured Image', frame)
                        cv2.waitKey(0)  # Press any key to close the image window
                        cv2.destroyAllWindows()
                    else:
                        minimal_client.get_logger().error('Failed to decode image')
                else:
                    minimal_client.get_logger().error('Service call failed')

    finally:
        minimal_client.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
