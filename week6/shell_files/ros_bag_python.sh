## Installation 
sudo apt install ros-humble-rosbag2

#Creating a new package  
cd ~/ros2_ws/src/ #changing to overlay src folder

## Creating a Package 
ros2 pkg create --build-type ament_python bag_recorder_nodes_py --dependencies rclpy rosbag2_py example_interfaces std_msgs


#Before this you need to update the src files as shown on Readme 
cd ~/ros2_ws/
colcon build --packages-select bag_recorder_nodes_py


source install/setup.bash #sourcing the changes

# Open talker in other terminal

gnome-terminal -e 'bash -c "ros2 run demo_nodes_cpp talker;exec bash"'

ros2 run bag_recorder_nodes_py simple_bag_recorder




