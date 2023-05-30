#! /usr/bin/env python3

import rclpy
from rclpy.node import Node
from ros2_pkg.srv import OddEvenCheck

class OddEvenCheckClient(Node):
    def __init__(self):
        super().__init__("odd_even_check_client_node")
        self.client = self.create_client(OddEvenCheck, "odd_even_check") # 新建一個client，有兩個參數第一個放server物件，一個放server topic name(要與server node一致)
        self.req = OddEvenCheck.Request()

    def send_request(self, num):
        try:
            self.req.number = int(num) # 將user傳進來的參數設成integer.
        except ValueError:
            print("Please submit an integer. Try again!")
            
        self.client.wait_for_service() # 等待service is available (可設time out)
        self.future = self.client.call_async(self.req) # 等server node可接收時，將req句傳送給server
        rclpy.spin_until_future_complete(self, self.future)

        self.result = self.future.result() # 取得結果

        return self.result

def main(args=Node):
    rclpy.init()
    client_node = OddEvenCheckClient()
    print("Odd Even Check Client is Running...")

    try:
        user_input = input("Enter an integer: ")
        res = client_node.send_request(user_input)
        print("Server returned: " + res.decision)
    except KeyboardInterrupt:
        print("Terminating node...")
        client_node.destroy_node()

if __name__ == '__main__':
    main()