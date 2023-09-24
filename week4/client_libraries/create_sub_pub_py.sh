
cd ~/ros2_ws/src # changing to new ros ws enviroment

## Create a new package in src/folder
ros2 pkg create --build-type ament_python py_pubsub

 ## change to package src

## Add subscriber and publisher cpp executables
cd ~/ros2_ws/src/py_pubsub/py_pubsub/ && wget https://raw.githubusercontent.com/ros2/examples/humble/rclpy/topics/minimal_publisher/examples_rclpy_minimal_publisher/publisher_member_function.py
# subscriber
cd ~/ros2_ws/src/py_pubsub/py_pubsub/ && wget https://raw.githubusercontent.com/ros2/examples/humble/rclpy/topics/minimal_subscriber/examples_rclpy_minimal_subscriber/subscriber_member_function.py



# build and run
cd ~/ros2_ws/
rosdep install -i --from-path src --rosdistro humble -y
colcon build --packages-select py_pubsub

source install/setup.bash

ros2 run py_pubsub talker


gnome-terminal -e 'bash -c "ros2 run py_pubsub listener; exec bash"' 