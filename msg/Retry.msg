# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Retry a child node until it succeeds, or exceeds a number of attempts.

# Only allow this many attempts. Note that a value of 1 makes this Retry node a no-op.
int32 max_attempts
# Child to retry up to max_attempts.
bosdyn_msgs/Node child
bool child_is_set

# If set, the node will write the attempt index to the blackboard.
string attempt_counter_state_name
