# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Point the PTZ to a specified orientation

# Name of the service to use.
string service_name

# Host machine of the directory server that the Spot CAM registered with.
string host

# The rest of the fields are from bosdyn.api.spot_cam.ptz.SetPtzPositionRequest, see that
# message for details.
bosdyn_msgs/PtzPosition ptz_position
bool ptz_position_is_set


# Setting adjust_parameters will enable auto-adjusting the PTZ pan and tilt at playback time,
# based on where the robot is, relative to the waypoint. Leave empty to disable auto-adjust
# features.
bosdyn_msgs/SpotCamPtzAdjustParameters adjust_parameters
bool adjust_parameters_is_set
