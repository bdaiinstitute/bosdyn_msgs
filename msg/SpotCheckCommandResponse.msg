# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Response for the SpotCheckCommand service.

# Common response header.
bosdyn_msgs/ResponseHeader header
bool header_is_set

# Details about how the lease was used.
bosdyn_msgs/LeaseUseResult lease_use_result
bool lease_use_result_is_set


# Command status
bosdyn_msgs/SpotCheckCommandResponseStatus status

# Human-readable description if an error occurred.
string message
