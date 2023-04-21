import rclpy
import cv2
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

class ImagePublisher(Node):

    def __init__(self):
        super().__init__("image_publisher")
        self.pub_frame = self.create_publisher(Image, 'video_frames', 10)
        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.cap = cv2.VideoCapture(0)
        self.br = CvBridge()
    
    def timer_callback(self):

        ret, frame = self.cap.read()
        if ret == 1:
            self.pub_frame.publish(self.br.cv2_to_imgmsg(frame))
            self.get_logger().info("Publishing video frame")

def main(args=None):
    try:
        rclpy.init(args=args)
        image_publisher = ImagePublisher()
        rclpy.spin(image_publisher)

    except KeyboardInterrupt:
        image_publisher.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()