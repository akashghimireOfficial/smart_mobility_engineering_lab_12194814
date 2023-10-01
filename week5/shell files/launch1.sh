# Create a package
cd ~/ros_ws/src
ros2 pkg create launch_tutorial --build-type ament_python

mkdir launch_tutorial/launch

## Build package
# make sure to make appropriate change at first 
colcon build

## Launching example
ros2 launch launch_tutorial example_main.launch.py
