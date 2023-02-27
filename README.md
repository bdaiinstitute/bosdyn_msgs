# bosdyn_msgs

This repository exists separately from the `spot_ros` driver because compiling all of the generated code takes long, and caching is complicated.

We are using [earthly](https://docs.earthly.dev/) to generate the `.deb` artifact. Call `build.sh` to generate the `.deb`.


Once the `.deb` is generated, it can be uploaded as a GitHub release, for example

```sh
gh release create aarch64-eloquent
gh release upload aarch64-eloquent build/ros-eloquent-bosdyn-msgs_0.0.0-0bionic_arm64.deb
```


## buildkit log output is truncated

To avoid log truncation (`+build | [output clipped, log limit 2MiB reached]`), [see here](https://github.com/earthly/earthly/issues/2714#issuecomment-1442515363).


# old README:
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