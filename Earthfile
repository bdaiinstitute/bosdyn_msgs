VERSION 0.6
FROM ubuntu:18.04
WORKDIR /workdir/bosdyn_msgs

# Run with `-i` flag, (e.g. `earthly --platform=linux/arm64 -i +build`) to drop into bash at any error
# Put `RUN false` to inject an error

install-buildtools-and-sourcecode:
    RUN apt-get update
    RUN apt-get -y install dpkg-dev debhelper
    RUN apt-get -y install fakeroot
    RUN apt-get -y install python3-pip
    RUN python3 -m pip install -U rosdep
    RUN python3 -m pip install -U bloom
    RUN rosdep init
    RUN rosdep update --rosdistro=eloquent

    # install ROS Eloquent
    # https://docs.ros.org/en/eloquent/Installation/Linux-Install-Debians.html
    RUN apt-get -y install curl gnupg2 lsb-release
    RUN curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | apt-key add -
    RUN sh -c 'echo "deb [arch=$(dpkg --print-architecture)] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" > /etc/apt/sources.list.d/ros2-latest.list'
    RUN apt-get update
    RUN DEBIAN_FRONTEND=noninteractive TZ=Etc/UTC apt-get -y install tzdata
    RUN apt-get -y install ros-eloquent-ros-base

    # follow instructions at
    # https://github.com/bdaiinstitute/spot_ros2/tree/b71e6a/spot_msgs#deal-with-rosdep       
    RUN mkdir /repos
    # https://docs.earthly.dev/best-practices#git-clone-vs-run-git-clone
    GIT CLONE https://github.com/ros/rosdistro /repos/rosdistro
    COPY --dir ./infrastructure/root_overlay /root_overlay
    # copy and create directories. TODO isn't there an easier way to do this?!
    #RUN cd /root_overlay && find . -type f -exec install -D {} /{}  \; && cd -
    #RUN rosdep update --rosdistro=eloquent
    #RUN rosdep resolve bosdyn_msgs # make sure it can resolve the `bosdyn_msgs` key

    # copy this ROS package over
    COPY --dir ./msg ./
    COPY --dir ./CMakeLists.txt ./package.xml ./


build-bloom-container-native:
    FROM +install-buildtools-and-sourcecode
    RUN bloom-generate rosdebian --os-name ubuntu --os-version bionic --ros-distro eloquent

    # actually trigger the build, which takes multiple hours (due to emulation)
    RUN fakeroot debian/rules binary
    
    # check that artifact saving is working correctly. For some reason, earthly is not caching the build step, so it's getting re-run all the time
    #RUN touch /workdir/ros-eloquent-bosdyn-msgs_0.0.0-0bionic_arm64.deb
    #RUN echo "silly contents" > /workdir/ros-eloquent-bosdyn-msgs_0.0.0-0bionic_arm64.deb

    SAVE ARTIFACT /workdir/ros-eloquent-bosdyn-msgs_0.0.0-0bionic_arm64.deb AS LOCAL build/

build-colcon:
    FROM +install-buildtools-and-sourcecode
    # Building with `colcon`, and not packaging `.deb`.
    RUN apt-get -y install python3-colcon-common-extensions

    RUN false
    # this took 3 hours on my laptop.
    # it is faster if compiling not for aarch64.
    # The flags are to show all output immediately on the console, and be verbose
    # `source` in bash is a synonym for `.`  in POSIX shell, which this is by default
    RUN . /opt/ros/eloquent/setup.sh && colcon --log-level info build --event-handlers console_direct+
