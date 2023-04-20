#! /usr/bin/env python3

import rclpy
from rclpy.node import Node
from ros2_pkg.srv import OddEvenCheck


class OddEvenCheckServer(Node):
    def __init__(self):
        super().__init__("odd_even_check_service_server_node")
        self.srv = self.create_service(OddEvenCheck, 'odd_even_check', self.determine_odd_even)

    def determine_odd_even(self, request, response):
        print("Received request")

        if request.number % 2 == 0:
            response.decision = "Even"
        elif request.number % 2 == 1:
            response.decision = "Odd"            
        else:
            response.decision = "Error"
        
        print(request)
        print(response)

        return response
    
def main():
    rclpy.init()
    my_server = OddEvenCheckServer()
    print("Odd Even Check Service server is Running..")

    try:
        rclpy.spin(my_server)
    except KeyboardInterrupt:
        my_server.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()