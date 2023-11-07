# bosdyn_msgs

These messages were generated from [spot-sdk 3.3.2](https://github.com/boston-dynamics/spot-sdk/releases/tag/v3.3.2)

## How to build `.deb`

(Largely borrowed from [here](https://gist.github.com/awesomebytes/196eab972a94dd8fcdd69adfe3bd1152))

### Get dependencies

You may need the latest pip, follow the [official instructions](https://pip.pypa.io/en/stable/installing/).

Install [bloom](http://ros-infrastructure.github.io/bloom/):

```bash
sudo apt-get install python-bloom
```

or (recommended)

```bash
sudo pip install -U bloom
```

Install fakeroot:

```bash
sudo apt-get install fakeroot
```

### Get ready

To make a debian folder structure from the ROS package you must cd into
the package to be in the same folder where `package.xml` file is.

### Create debian structure

```bash
bloom-generate rosdebian --os-name ubuntu --os-version jammy --ros-distro humble
```

You can also let the tool guess some stuff:

```bash
bloom-generate rosdebian --ros-distro humble
```

You'll get something like this:

```bash
~/ws/src/bosdyn_msgs$ bloom-generate rosdebian --os-name ubuntu --os-version jammy --ros-distro humble
/usr/lib/python3/dist-packages/pkg_resources/__init__.py:116: PkgResourcesDeprecationWarning:  is an invalid version and will not be supported in a future release
  warnings.warn(
/usr/lib/python3/dist-packages/pkg_resources/__init__.py:116: PkgResourcesDeprecationWarning:  is an invalid version and will not be supported in a future release
  warnings.warn(
ROS Distro index file associate with commit 'e7ba7d4d4fa7ad70260b34fb0e03f4b96e6f62bb'
New ROS Distro index url: 'https://raw.githubusercontent.com/ros/rosdistro/e7ba7d4d4fa7ad70260b34fb0e03f4b96e6f62bb/index-v4.yaml'
==> Generating debs for ubuntu:jammy for package(s) ['bosdyn_msgs']
No homepage set, defaulting to ''
No historical releaser history, using current maintainer name and email for each versioned changelog entry.
No CHANGELOG.rst found for package 'bosdyn_msgs'
Package 'bosdyn-msgs' has dependencies:
Run Dependencies:
  rosdep key           => jammy key
  rosidl_default_runtime => ['ros-humble-rosidl-default-runtime']
Build and Build Tool Dependencies:
  rosdep key           => jammy key
  builtin_interfaces   => ['ros-humble-builtin-interfaces']
  common_interfaces    => ['ros-humble-common-interfaces']
  std_msgs             => ['ros-humble-std-msgs']
  sensor_msgs          => ['ros-humble-sensor-msgs']
  ament_cmake          => ['ros-humble-ament-cmake']
  rosidl_default_generators => ['ros-humble-rosidl-default-generators']
==> Placing templates files in the 'debian' folder.
==> In place processing templates in 'debian' folder.
Expanding 'debian/rules.em' -> 'debian/rules'
Expanding 'debian/compat.em' -> 'debian/compat'
Expanding 'debian/changelog.em' -> 'debian/changelog'
Expanding 'debian/copyright.em' -> 'debian/copyright'
Expanding 'debian/control.em' -> 'debian/control'
Expanding 'debian/source/format.em' -> 'debian/source/format'
Expanding 'debian/source/options.em' -> 'debian/source/options'

```

### Create binary debian

Having sourced the necessary dependencies (most probably `source /opt/ros/humble/setup.bash`) execute:

```bash
fakeroot debian/rules binary
```

If you get the error:

```bash
dh: Command not found
```

You need to install:

```bash
sudo apt-get install dpkg-dev debhelper
```

In the end you'll get a line like:

```
dpkg-deb: building package 'ros-humble-bosdyn-msgs' in '../ros-humble-bosdyn-msgs_0.0.0-0jammy_amd64.deb'.
```

### Upload debian to GitHub

You should now have a `.deb` file containing the `bosdyn_msgs` package. You need to upload that as a release to GitHub [here](https://docs.github.com/en/repositories/releasing-projects-on-github/managing-releases-in-a-repository). Please increment the version of the release. At some point we may consider automating this process but we don't have a formalized way of doing these precompilations yet.

## Build package for AMD64
The recommended build method is through a docker container. This preserves the intended build environment without 
modifications from external pip installs. 

1.  Build the docker image with AMD64 target running Ubuntu 22.04 and ROS Humble.

    ```bash
    docker build -t bosdyn_msgs/amd64 --platform linux/amd64 -f docker/amd64/Dockerfile .
    ```

2.  From the root of the `bosdyn_msgs` repo, run the docker container.

    ```bash
    docker run -it bosdyn_msgs/amd64 /bin/bash
    ```

3.  The docker container clones the latest `bosdyn_msgs` repo into `/bosdyn_msgs` You must checkout the correct version.

4.  Inside the container follow the steps in the **Create debian structure** section.

    ```bash
    bloom-generate rosdebian --os-name ubuntu --os-version jammy --ros-distro humble
    fakeroot debian/rules binary
    ```

5.  Copy the generated `.deb` file from the container to the host machine

6.  Install the `.deb` file using your tool of choice.

## Build package for ARM64

If you want to build the package for ARM64 architecture in non ARM64 host system you can do so through a docker container.

1.  To create docker images on the development environment for a different architecture, first run the following commands:

    ```
    sudo apt-get install qemu binfmt-support qemu-user-static
    sudo docker run --rm --privileged multiarch/qemu-user-static --reset -p yes
    ```

2.  Build the docker image with ARM64 target running Ubuntu 22.04 and ROS Humble.

    ```bash
    docker build -t bosdyn_msgs/arm64 --platform linux/arm64/v8 -f docker/arm64/Dockerfile .
    ```

3.  From the root of the `bosdyn_msgs` repo, run the docker container.

    ```bash
    docker run -it bosdyn_msgs/arm64 /bin/bash
    ```

4.  The docker container clones the latest `bosdyn_msgs` repo into `/bosdyn_msgs` You must checkout the correct version.

5.  Inside the container follow the steps in the **Create debian structure** section.

    ```bash
    bloom-generate rosdebian --os-name ubuntu --os-version jammy --ros-distro humble
    fakeroot debian/rules binary
    ```

6.  Copy the generated `.deb` file from the container to the host machine

7.  Install the `.deb` file using your tool of choice.
