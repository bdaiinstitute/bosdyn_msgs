# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Run  all children in order until a child fails.

# Forces the execution to always begin with the first child.  If false, and
# the Sequence ran last tick, it will continue with the node it was ticking.
bool always_restart
# List of all children to iterate through.
bosdyn_msgs/Node[] children
