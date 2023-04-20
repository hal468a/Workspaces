#! /usr/bin/env python3
import math
import rclpy
from rclpy.node import Node

from rclpy.action import ActionServer
from geometry_msgs.msg import Point
from ros2_pkg.action import Navigate

DISTANCE_THRESHOLD = 0.125

class NavigateActionServer(Node):

    def __init__(self):
        super().__init__('action_server_node')
        self._action_server = ActionServer(self, Navigate, "navigate", self.navigate_callback) # 四個參數 1: Node、2: interface、3: name、4:要執行的function
        self.sub = self.create_subscription(Point, "robot_position", self.update_robot_position, 1) # subscriber取得目前的位置 三個參數： 1: 訂閱的型別、2: 名稱、3: 要執行的function
        self.robot_current_position = None # 機器人目前位置，Default為None

    def navigate_callback(self, goal_handle):
        print("Received Goal")
        start_time = self.get_clock().now().to_msg().sec  # 紀錄開始時間
        robot_goal_point = [goal_handle.request.goal_point.x,
                            goal_handle.request.goal_point.y,
                            goal_handle.request.goal_point.z]
        print("Goal point: " + str(robot_goal_point))

        while self.robot_current_position == None:
            print("Robot Point not Detected")
            rclpy.spin_once(self, timeout_sec=3) # 使用spin_once做延遲，不可用time.sleep的原因是會將其他的程式卡住直到迴圈完成
        
        distance_to_goal = math.dist(self.robot_current_position, robot_goal_point) # 計算目標與現在位置的差距
        feeback_msg = Navigate.Feedback()

        while distance_to_goal > DISTANCE_THRESHOLD:
            distance_to_goal = math.dist(self.robot_current_position, robot_goal_point) # 計算目標與現在位置的差距
            feeback_msg.distance_to_point = distance_to_goal # 差距大於0.125時繼續更新

            goal_handle.publish_feedback(feeback_msg) # 用goal_handle的publish_feedback functions發布feedback_msg
            rclpy.spin_once(self, timeout_sec=1)      # 延遲1秒，降低發布速度
        
        goal_handle.succeed() # 讓action server知道目標達成
        result = Navigate.Result() # 初始化 Navigate 中的 Result
        result.elapsed_time = float(self.get_clock().now().to_msg().sec - start_time) # 計算花費的時間

        return result

    def update_robot_position(self, point):
        self.robot_current_position = [point.x, point.y, point.z]

def main(args=None):
    rclpy.init()
    action_server_node = NavigateActionServer()
    print("Action Server is Running...")

    try:
        while rclpy.ok():
            rclpy.spin_once(action_server_node)
    except KeyboardInterrupt:
        print("Teminating Node...")
        action_server_node._action_server.destroy()
        action_server_node.destroy_node()

if __name__ == "__main__":
    main()