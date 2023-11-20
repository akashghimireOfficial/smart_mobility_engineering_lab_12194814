import rclpy
from rclpy.node import Node

from std_msgs.msg import String


class ges_sub(Node):

    def __init__(self):
        super().__init__('ges_subscriber')
        self.subscription = self.create_subscription(
            String,
            'gesture_topic',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('Subscription msg: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)

    ges_subscriber = ges_sub()

    rclpy.spin(ges_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    ges_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()