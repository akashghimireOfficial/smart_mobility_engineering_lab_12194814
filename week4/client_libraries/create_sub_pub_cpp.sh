
cd ~/ros2_ws/src # changing to new ros ws enviroment

## Create a new package in src/folder
ros2 pkg create --build-type ament_cmake cpp_pubsub

 ## change to package src

## Add subscriber and publisher cpp executables
cd ~/ros2_ws/src/cpp_pubsub/src/ && wget -O publisher_member_function.cpp https://raw.githubusercontent.com/ros2/examples/humble/rclcpp/topics/minimal_publisher/member_function.cpp
# subscriber
cd ~/ros2_ws/src/cpp_pubsub/src/ && wget -O subscriber_member_function.cpp https://raw.githubusercontent.com/ros2/examples/humble/rclcpp/topics/minimal_subscriber/member_function.cpp



# build and run
cd ~/ros2_ws/
rosdep install -i --from-path src --rosdistro humble -y
colcon build --packages-select cpp_pubsub
. install/setup.bash

ros2 run cpp_pubsub talker


gnome-terminal -e 'bash -c "ros2 run cpp_pubsub listener; exec bash"' 