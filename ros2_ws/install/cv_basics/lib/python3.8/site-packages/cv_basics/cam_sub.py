import rclpy
import cv2
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge


class ImageSubcriber(Node):

    def __init__(self):
        super().__init__('image_subscriber')
        self.subscription = self.create_subscription(Image, 'video_frames', self.listener_callback, 10)
        self.br = CvBridge()
    
    def listener_callback(self, data):
        self.get_logger().info('Receiving video frames')

        current_frame = self.br.imgmsg_to_cv2(data)
        cv2.imshow("camera", current_frame)
        cv2.waitKey(1)


def main(args=None):
    try:
        rclpy.init(args=args)
        image_subscriber = ImageSubcriber()
        rclpy.spin(image_subscriber)
    except KeyboardInterrupt:
        image_subscriber.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()