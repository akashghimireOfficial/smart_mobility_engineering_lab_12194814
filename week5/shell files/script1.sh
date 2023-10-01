#!/bin/bash
sudo apt update
# installing python-rosdep
sudo apt-get install python3-rosdep
# installing pip 
sudo apt install python3-pip

# Install rosdep if not using ROS
pip3 install rosdep

# Initialize rosdep
sudo rosdep init
rosdep update

# Install dependencies for packages in the workspace
# rosdep install --from-paths src -y --ignore-src
