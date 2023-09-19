ARG BASEIMAGE
ARG ARCH
ARG ROS_VERSION
FROM ${BASEIMAGE}

# Install system utilities
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get install -y --no-install-recommends \
	debhelper \
	dpkd-dev \
	fakeroot \
	python3-numpy \
        python3-pip &&\
    rm -rf /var/lib/apt/lists/*


RUN pip install -U bloom

COPY ../../ /bosdyn_msgs
ENTRYPOINT ["/bosdyn_msgs/docker/entrypoint.sh", "${ROS_VERSION}"]
