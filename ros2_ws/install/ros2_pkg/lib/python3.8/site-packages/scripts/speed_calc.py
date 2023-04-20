#! /usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

WHEEL_RADIUS_DEFAULE = 12.5 / 100 #centimeters to meters

class SpeedCalculator(Node):
    def __init__(self):
        super().__init__("speed_calc_ndoe")
        self.declare_parameter("wheel_radius", WHEEL_RADIUS_DEFAULE)
        self.sub = self.create_subscription(Float32, "rpm", 
                                            self.Calculate_speed, 10)
        self.pub = self.create_publisher(Float32, "speed", 10)

        #print(self.get_parameter("wheel_radius").get_parameter_value())

    def Calculate_speed(self, rpm_msg):
        wheel_radius_param = self.get_parameter("wheel_radius").get_parameter_value().double_value

        speed = rpm_msg.data * wheel_radius_param * 2 * 3.14159 / 60  # speed in m/s
        speed_msg = Float32()
        speed_msg.data = float(speed)
        self.pub.publish(speed_msg)
    
def main():
    rclpy.init()
    speed_calc = SpeedCalculator()
    print("New Speed Calculator is started...")

    try:
        rclpy.spin(speed_calc)
    except KeyboardInterrupt:
        speed_calc.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()