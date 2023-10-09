cd ~/ros2_ws/src/cpp_pubsub/src/ # change directory to previously created cpp_pubsub package
#download the executable file with stastistics enabled
wget -O member_function_with_topic_statistics.cpp https://raw.githubusercontent.com/ros2/examples/humble/rclcpp/topics/minimal_subscriber/member_function_with_topic_statistics.cpp

#before this you need to make changes in CMAKELIST.txt

#build and run 
cd ~/ros2_ws/ # come to your root ros2 ws
rosdep install -i --from-path src --rosdistro humble -y # Installing the dependencies
colcon build --packages-select cpp_pubsub

source install/setup.bash



## Run the talker node
ros2 run cpp_pubsub talker

## Run the listener node
gnome-terminal -e 'bash -c "ros2 run cpp_pubsub listener;exec bash"'

