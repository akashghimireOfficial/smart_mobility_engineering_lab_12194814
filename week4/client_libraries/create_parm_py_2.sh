
#building
cd ~/ros2_ws/

# Change via the console

colcon build --packages-select python_parameters
ros2 launch python_parameters python_parameters_launch.py
