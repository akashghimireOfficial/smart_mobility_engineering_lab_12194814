
cd ~/ros2_ws/src # changing to new ros ws enviroment

## Create a new package in src/folder
ros2 pkg create --build-type ament_cmake tutorial_interfaces


mkdir ~/ros2_ws/src/tutorial_interfaces/msg  ## Directory in for msg and src files

mkdir ~/ros2_ws/src/tutorial_interfaces/srv

# #creates an empy python file for msg Num
touch ~/ros2_ws/src/tutorial_interfaces/msg/Num.msg

# #creates an empy python file for msg Sphere
touch ~/ros2_ws/src/tutorial_interfaces/msg/Sphere.msg
#srv file
touch ~/ros2_ws/src/tutorial_interfaces/srv/AddThreeInts.srv

colcon build --packages-select tutorial_interfaces



source install/setup.bash


ros2 interface show tutorial_interfaces/msg/Num

gnome-terminal -e 'bash -c "ros2 interface show tutorial_interfaces/msg/Sphere; exec bash"' 

gnome-terminal -e 'bash -c "ros2 interface show tutorial_interfaces/srv/AddThreeInts; exec bash"' 

