
cd ~/ros2_ws/src # changing to new ros ws enviroment
rosdep install -i --from-path src --rosdistro humble -y
colcon build --packages-select py_pubsub
source install/setup.bash

ros2 run py_pubsub talker
gnome-terminal -e 'bash -c "ros2 run py_pubsub listener; exec bash"'
