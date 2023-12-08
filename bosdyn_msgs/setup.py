# Copyright (c) 2023 Boston Dynamics AI Institute Inc.  All rights reserved.

from setuptools import find_packages, setup

package_name = "bosdyn_msgs"

setup(
    name=package_name,
    version="0.1.0",
    packages=find_packages(where=".", include=package_name + "*"),
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
    ],
    install_requires=["setuptools"],
    maintainer="BD AI Institute",
    maintainer_email="engineering@theaiinstitute.com",
    description="ROS 2 interoperability support for Boston Dynamics Spot SDK APIs",
    tests_require=["pytest"],
    license="MIT",
    zip_safe=True,
)
