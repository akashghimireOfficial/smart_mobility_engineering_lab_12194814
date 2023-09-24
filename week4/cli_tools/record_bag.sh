# First, install necessary files

sudo apt-get install ros-humble-ros2bag \
                     ros-humble-rosbag2-storage-default-plugins


gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' 





gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"'

## make directory to store our saved recording

mkdir bag_files
cd bag_files

## run some commands
ros2 topic list

ros2 topic echo /turtle1/cmd_vel

echo "recording cmd_vel"
## run ros2 bag record


gnome-terminal -e 'bash -c "ros2 bag record /turtle1/cmd_vel;exec bash"'



## Also possible to record multiple topics


gnome-terminal -e 'bash -c "ros2 bag record -o subset /turtle1/cmd_vel /turtle1/pose;exec bash"'


## bag info

gnome-terminal -e 'bash -c "ros2 bag info subset;exec bash"'

echo -e "\n\n\n playing rog record"
# play the recording of ros2 bag play

gnome-terminal -e 'bash -c "ros2 bag play subset;exec bash"'