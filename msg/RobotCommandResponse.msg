# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# The RobotCommand response message contains a robot command id that can be used to poll the
# robot command service for feedback on the state of the command.

# Common response header.
bosdyn_msgs/ResponseHeader header
bool header_is_set

# Details about how the lease was used.
bosdyn_msgs/LeaseUseResult lease_use_result
bool lease_use_result_is_set

# Return status for a request.
bosdyn_msgs/RobotCommandResponseStatus status

# Human-readable error description.  Not for programmatic analysis.
string message

# Unique identifier for the command, If empty, command was not accepted.
uint32 robot_command_id
