ROS_DISTRO=$0

bloom-generate rosdebian --ros-distro ${ROS_DISTRO}
fakeroot debian/rules binary
cp ros-${ROS_DISTRO}-bosdyn-msgs-*.deb /bosdyn_msgs/output/
