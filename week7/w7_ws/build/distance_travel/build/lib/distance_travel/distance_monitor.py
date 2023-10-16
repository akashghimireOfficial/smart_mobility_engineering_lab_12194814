import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

class DistanceMonitor(Node):
    def __init__(self):
        super().__init__('distance_monitor')
        self.subscription = self.create_subscription(
            Float32,
            'current_distance',
            self.distance_callback,
            10
        )

    def distance_callback(self, msg):
        self.get_logger().info(f"Current Distance: {msg.data} meters")

def main(args=None):
    rclpy.init(args=args)
    monitor = DistanceMonitor()
    rclpy.spin(monitor)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
