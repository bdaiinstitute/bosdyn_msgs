# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Description of the parameters and locations of each camera in the
# current video stream.

# Common response header.
bosdyn_msgs/ResponseHeader header
bool header_is_set

# The location and camera parameters for a single camera.
# List of all camera streams visible in the current video stream.
bosdyn_msgs/GetVisibleCamerasResponseStream[] streams
