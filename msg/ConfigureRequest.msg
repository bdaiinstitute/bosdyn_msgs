# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Configure the AutoReturn system.

# Common request header.
bosdyn_msgs/RequestHeader header
bool header_is_set

# Leases that AutoReturn may use to accomplish its goals when AutoReturn automatically
# triggers. If left empty, AutoReturn will not automatically trigger.
bosdyn_msgs/Lease[] leases

# Parameters to use when AutoReturn automatically triggers.
bosdyn_msgs/Params params
bool params_is_set

# Forget any buffered locations the robot may be remembering. Defaults to false.
# Set to true if the robot has just crossed an area it should not traverse in AutoReturn.
bool clear_buffer

