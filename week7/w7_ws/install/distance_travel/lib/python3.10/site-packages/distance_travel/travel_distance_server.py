import rclpy
import random
from rclpy.node import Node
from rclpy.action import ActionServer
from action_tutorials_interfaces.action import TravelDistance  # Assuming the action name and package is correct
from std_msgs.msg import Float32
import time  # Import the time module for sleep

class TravelDistanceServer(Node):
    def __init__(self):
        super().__init__('travel_distance_server')
        
        # Initialize the action server
        self.action_server = ActionServer(
            self,
            TravelDistance,
            'distance_travel',
            self.execute_callback
        )
        
        # Create a publisher to publish current distance
        self.publisher = self.create_publisher(Float32, 'current_distance', 10)
        self.current_distance = 0.0
        self.target_distance = 100.0

    def execute_callback(self, goal_handle):
        feedback_msg = TravelDistance.Feedback()
        
        # Set the current distance and target distance from the goal request
        self.current_distance = goal_handle.request.start_distance
        self.target_distance = goal_handle.request.target_distance

        # Keep moving until we reach the target distance
        while self.current_distance < self.target_distance:
            self.current_distance += random.uniform(0.5, 2.0)  # Simulate movement
            self.get_logger().info('Current distance: {}'.format(self.current_distance))
            
            # Publish the current distance and send feedback
            feedback_msg.current_distance = self.current_distance
            self.publisher.publish(Float32(data=self.current_distance))
            goal_handle.publish_feedback(feedback_msg)
            
            # Wait for a second before the next movement
            time.sleep(1.0)  # Using sleep from time module

        # Once the target distance is reached, succeed the goal
        goal_handle.succeed()
        return TravelDistance.Result(confirmation="Target distance reached!")

def main(args=None):
    rclpy.init(args=args)
    server = TravelDistanceServer()
    rclpy.spin(server)  # Keep the node running
    rclpy.shutdown()

if __name__ == '__main__':
    main()
