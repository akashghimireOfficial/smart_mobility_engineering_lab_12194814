import sys
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from fleet_action.action import FleetManagement

class FleetManagementClient(Node):

    def __init__(self):
        super().__init__('fleet_management_client')
        self._client = ActionClient(self, FleetManagement, 'fleet_management')

    def send_goal(self, fleet_size):
        goal_msg = FleetManagement.Goal()
        goal_msg.fleet_size = fleet_size

        self._client.wait_for_server()

        self._send_goal_future = self._client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def feedback_callback(self, feedback_msg):
        self.get_logger().info(f'Received feedback: {feedback_msg.feedback.completion_percentage}%')

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Generated Routes: {", ".join(result.routes)}')

def main(args=None):
    rclpy.init(args=args)
    fleet_management_client = FleetManagementClient()
    fleet_management_client.send_goal(int(sys.argv[1]) if len(sys.argv) > 1 else 5)
  # Default to 5 if no arg provided
    rclpy.spin(fleet_management_client)

if __name__ == '__main__':
    main()
