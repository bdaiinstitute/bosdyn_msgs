# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Get the state of the mission.

# Common request header.
bosdyn_msgs/RequestHeader header
bool header_is_set
# Upper bound on the node state to retrieve, inclusive. Leave unset for the latest data.
int64 history_upper_tick_bound
bool history_upper_tick_bound_is_set
# Specify the lower bound of per-node state history to retrieve.
# The service may not remember all the state you ask for. In this case, all of the state
# available between the specified bounds will be returned.
# This is optional -- if left unset, you will get exactly one set of per-node state.
bosdyn_msgs/GetStateRequestOneOfLowerBound lower_bound
