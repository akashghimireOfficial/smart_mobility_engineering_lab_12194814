# cd ~/ros2_ws/src/ # change directory to ros_ws/src

# ros2 pkg create --build-type ament_python --license Apache-2.0 --node-name my_robot_driver my_package --dependencies rclpy geometry_msgs webots_ros2_driver

# #building
# cd ~/ros2_ws/src/
# colcon build --packages-select my_package


# #Creating my_package




# #Adding launch and a worlds folder insdie my_package folder
# cd my_package
# mkdir launch
# mkdir worlds

# #Downloading and adding simulation file to worlds/
# cd ~/ros2_ws/src/my_package/worlds/ && wget https://docs.ros.org/en/humble/_downloads/5ad123fc6a8f1ea79553d5039728084a/my_world.wbt


# #creating urdf file
# cd ~/ros2_ws/src/my_package/resource && touch my_robot.urdf



cd ~/ros2_ws/src/
colcon build
source install/local_setup.bash
ros2 launch my_package robot_launch.py