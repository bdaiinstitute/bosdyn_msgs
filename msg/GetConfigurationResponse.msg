# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Response to a "get configuration" request.

# Common response header.
bosdyn_msgs/ResponseHeader header
bool header_is_set

# A simple yes/no, will AutoReturn automatically trigger.
bool enabled

# The most recent successful ConfigureRequest.
# Will be empty if service has not successfully been configured.
bosdyn_msgs/ConfigureRequest request
bool request_is_set
