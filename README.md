# bosdyn_msgs

These messages are generated from [spot-sdk](https://github.com/boston-dynamics/spot-sdk) sources.

## How to release

Just push a tag with an appropriate release version to this repository e.g.:

``` bash
git tag MAJOR.MINOR.PATCH
git push origin MAJOR.MINOR.PATCH
```

This will trigger a release job. Once the release is complete, `bosdyn_msgs-bundle_MAJOR.MINOR.PATCH-*.run` 
binary bundles will be made available as release assets. As of January 2024, releases include binary 
bundles compatible with ROS 2 Humble Hawksbill on Ubuntu Jammy 22.04 for AMD64 and ARM64 architectures. 

**Attention**: it is strongly advised to keep package versions and tags in lockstep with the version of the
latest Boston Dynamics Spot SDK release to PyPI. This can be achieved by updating versions in `package.xml`
files and `pip-constraint.txt` file to match each other and the tag.

## How to install

Just grab a binary bundle for your architecture (e.g. downloaded from a release page) and execute it.

Packages will be installed alongside your ROS 2 distribution (e.g. under `/opt/ros/<distribution>`).

## How to bundle

First, ensure QEMU virtualization for multi-platform Docker containers is enabled:

```sh
sudo apt-get install qemu binfmt-support qemu-user-static
sudo docker run --rm --privileged multiarch/qemu-user-static --reset -p yes
```

Now, simply invoke `make -jN` at the repostory root with a suitable number of jobs `N`.
This will build `bosdyn_msgs_unknown-bundle-amd64.run` and `bosdyn_msgs_unknown-bundle-arm64.run`
binary bundles (of `unknown` version, as none was specified).

You can also bundle fewer packages for specific architectures with:

``` bash
make -jN <package_name>-bundle-<arch>.run
```

Binary bundles include the target package and its local dependencies.

**Note**: QEMU virtualization makes for _very_ slow builds (from minutes to hours). 

## How to build

You can build these packages in `colcon` workspaces, like you would for any other ROS 2 package.
First, ensure [ROS 2 Humble Hawksbill](https://docs.ros.org/en/humble/Installation.html) is installed.
That includes development tools:

``` bash
sudo apt update && sudo apt install -y python3-pip ros-dev-tools
```

Then clone this repository into a workspace:

``` bash
mkdir -p workspace/src; cd workspace
git -C src clone --recursive https://github.com/bdaiinstitute/bosdyn_msgs.git
```

When installing package dependencies, make sure `pip` constraints are enforced:

``` bash
PIP_CONSTRAINT=src/bosdyn_msgs/pip-constraint.txt rosdep install -i -y --from-path src
```

This will ensure `apt` and `pip` managed packages are compatible with each other.

Then you can build:

``` bash
colcon build
```

