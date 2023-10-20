import rclpy
import time
from rclpy.action import ActionServer
from rclpy.node import Node


from fleet_action.action import FleetManagement

class FleetManagementServer(Node):

    def __init__(self):
        super().__init__('fleet_management_server')
        self._action_server = ActionServer(
            self,
            FleetManagement,
            'fleet_management',
            self.execute_callback
        )

    def execute_callback(self, goal_handle):
        goal = goal_handle.request
        feedback_msg = FleetManagement.Feedback()
        result = FleetManagement.Result()

        for i in range(1, goal.fleet_size + 1):
            feedback_msg.completion_percentage = float(i) / float(goal.fleet_size) * 100.0
            self.get_logger().info(f'Processing route for vehicle {i}')
            goal_handle.publish_feedback(feedback_msg)
            result.routes.append(f'Route for Vehicle {i}')
            time.sleep(1.0)

        goal_handle.succeed()
        return result

def main(args=None):
    rclpy.init(args=args)
    fleet_management_server = FleetManagementServer()
    rclpy.spin(fleet_management_server)

if __name__ == '__main__':
    main()
