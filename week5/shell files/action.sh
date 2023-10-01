#Creating package
mkdir -p ~/ros2_ws/src #you can reuse existing workspace with this naming convention
cd ~/ros2_ws/src
ros2 pkg create action_tutorials_interfaces


## creating action folder in our newly created package
cd action_tutorials_interfaces
mkdir action

## create a action file 

cd action && touch Fibonacci.action


## Building the action 

cd ~/ros2_ws
# Build
colcon build

# Source our workspace
# On Windows: call install/setup.bat
. install/setup.bash
# Check that our action definition exists
ros2 interface show action_tutorials_interfaces/action/Fibonacci


##In one terminal
python3 fibonacci_action_server.py

##In other terminal 

python3 fibonacci_action_client.py