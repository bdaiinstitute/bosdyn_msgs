# Use a base image by OSRF that already contains ROS 2 Humble
FROM ros:humble-ros-base-jammy

# Install system utilities
RUN apt-get update && apt-get install -y \
        python3-pip \
        wget \
        iputils-ping 

RUN pip install -U bloom

RUN apt-get update && apt-get install -y \
    fakeroot \
    dpkg-dev \
    debhelper

RUN git clone https://github.com/bdaiinstitute/bosdyn_msgs.git

CMD ["bash"]