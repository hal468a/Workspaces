#! /usr/bin/env python3
import cv2
import rclpy
from rclpy.node import Node

from ros2_pkg.srv import TurnCamera
from cv_bridge import CvBridge

class TurnCameraClient(Node):
    def __init__(self):
        super().__init__("turn_camera_client_node")
        self.client = self.create_client(TurnCamera, "turn_camera") # 新建一個client，有兩個參數第一個放server物件，一個放server topic name(要與server node一致)
        self.req = TurnCamera.Request()

    def send_request(self, num):
        try:
            self.req.degree_turn = float(num) # 將user傳進來的參數設成integer.
        except ValueError:
            print("Please submit an float. Try again!")
            
        self.client.wait_for_service() # 等待service is available (可設time out)
        self.future = self.client.call_async(self.req) # 等server node可接收時，將req句傳送給server
        rclpy.spin_until_future_complete(self, self.future)

        self.result = self.future.result() # 取得結果

        return self.result.image
    
    def display_image(self, image_msg):
        image = CvBridge().imgmsg_to_cv2(image_msg)
        cv2.imshow("Turn Camera Image", image)
        cv2.waitKey(0)
        cv2.destroyAllWindows()

def main(args=Node):
    rclpy.init()
    client_node = TurnCameraClient()
    print("Turn Camera Node is Running...")

    try:
        user_input = input("Enter a number degree to turn camera: ")
        res = client_node.send_request(user_input)
        client_node.display_image(res)
    except KeyboardInterrupt:
        print("Terminating node...")
        client_node.destroy_node()

if __name__ == '__main__':
    main()