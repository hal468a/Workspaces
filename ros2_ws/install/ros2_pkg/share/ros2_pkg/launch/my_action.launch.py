from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="ros2_pkg",
            executable="action_server.py",
            name="action_server_node",
            output="screen"
        ),
        Node(
            package="ros2_pkg",
            executable="action_client.py",
            name="action_client_node",
            parameters=[
                {"x": 1.0,
                 "y": 2.0,
                 "z": 3.0}
            ],
            output="screen"
        ),
        ExecuteProcess(
            cmd=['ros2', 'topic', 'list'],
            output='screen'
        )
    ])