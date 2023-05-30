#! /usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class HelloWorldSubscriber(Node):
    def __init__(self):
        super().__init__("hello_world_sub_ndoe")
        self.sub = self.create_subscription(String, "hello_world", 
                                            self.subscriber_callback, 10)
    def subscriber_callback(self, msg):
        print("Received: " + msg.data)
    
def main():
    rclpy.init()
    my_sub = HelloWorldSubscriber()
    print("Waitting for a data to be publisher over topic...")

    try:
        rclpy.spin(my_sub)
    except KeyboardInterrupt:
        my_sub.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()