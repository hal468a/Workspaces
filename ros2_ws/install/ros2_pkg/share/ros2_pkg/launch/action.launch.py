from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="ros2_pkg",
            executable="action_server.py",
            name="action_server_node"
        ),
        Node(
            package="ros2_pkg",
            executable="action_server_client.py",
            name="action_client_node",
        ),
        ExecuteProcess(
            cmd=['ros2', 'topic', 'list'],
            output='screen'
        ),
        ExecuteProcess(
            cmd=['ros2', 'topic', 'pub', '--once', '/robot_postion', 'geometry_msgs/msg/Point', '{x: 0.0, y: 0.0, z: 0.0}'],
            output='screen'
        )
    ])