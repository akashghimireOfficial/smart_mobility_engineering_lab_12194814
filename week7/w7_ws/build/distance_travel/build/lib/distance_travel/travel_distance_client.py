import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from action_tutorials_interfaces.action import TravelDistance

class TravelDistanceClient(Node):

    def __init__(self):
        super().__init__('travel_distance_client')
        self.client = ActionClient(self, TravelDistance, 'distance_travel')
        
    def send_goal(self, start_distance, target_distance):
        goal_msg = TravelDistance.Goal()
        goal_msg.start_distance = start_distance
        goal_msg.target_distance = target_distance

        self.client.wait_for_server()

        self.goal_handle = self.client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        self.goal_handle.add_done_callback(self.goal_response_callback)

        
    def feedback_callback(self, feedback_msg):
        self.get_logger().info(f"Feedback: Current Distance: {feedback_msg.feedback.current_distance}")

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.goal_result_callback)

    def goal_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f"Result: {result.confirmation}")

def main(args=None):
    rclpy.init(args=args)
    client = TravelDistanceClient()
    client.send_goal(0.0, 100.0)  # Starting from 0 and targeting 100 units
    rclpy.spin(client)
    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
