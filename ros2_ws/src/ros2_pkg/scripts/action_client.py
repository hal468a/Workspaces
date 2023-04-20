#! /usr/bin/env python3
import rclpy
from rclpy.node import Node

from rclpy.action import ActionClient
from ros2_pkg.action import Navigate

class NavigateActionClient(Node):

    def __init__(self):
        super().__init__("action_client_node")
        # self.declare_parameter("x", 0)
        # self.declare_parameter("y", 0)
        # self.declare_parameter("z", 0)

        self._action_client = ActionClient(self, Navigate, "navigate")
    
    def send_goal(self, x, y, z):
        goal_msg = Navigate.Goal()
        # goal_msg.goal_point.x = self.get_parameter("x").get_parameter_value().double_value
        # goal_msg.goal_point.y = self.get_parameter("y").get_parameter_value().double_value
        # goal_msg.goal_point.z = self.get_parameter("z").get_parameter_value().double_value

        goal_msg.goal_point.x = float(x)
        goal_msg.goal_point.y = float(y)
        goal_msg.goal_point.z = float(z)

        self._action_client.wait_for_server() # 等server準備好
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, self.feedback_callback) # 傳送目標給server
        self._send_goal_future.add_done_callback(self.goal_response_callback)  # 目標完成後做goal_response_callback
    
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        print("Received goal: " + str(feedback.distance_to_point))

    def goal_response_callback(self, future):
        goal_handle = future.result() # 取得結果

        # 檢查Goal是否被server接受，若否則回傳None
        if goal_handle.accepted == 0:
            print("Goal Rejected!")
            return None
        
        print("Goal Accepted")
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        print("Result: " + str(result.elapsed_time) + " seconds")

        rclpy.shutdown()

def main(args=None):
    rclpy.init()
    action_client_node = NavigateActionClient()
    print("Action Client is Running...")

    try:
        x = input("Enter x coordinate: ")
        y = input("Enter y coordinate: ")
        z = input("Enter z coordinate: ")

        action_client_node.send_goal(x, y, z)
        rclpy.spin(action_client_node)
        
    except KeyboardInterrupt:
        print("Teminating Node...")
        action_client_node.destroy_node()

if __name__ == "__main__":
    main()