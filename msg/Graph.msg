# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# This is an arbitrary collection of waypoints and edges. The edges and waypoints are not required
# to be connected. A waypoint may belong to multiple graphs. This message is used to pass around
# information about a graph's topology, and is used to serialize map topology to and from files.
# Note that the graph does not contain any of the waypoint/edge data (which is found in snapshots).
# Snapshots are stored separately.

# The waypoints for the graph (containing frames, annotations, and sensor data).
bosdyn_msgs/Waypoint[] waypoints
# The edges connecting the graph's waypoints.
bosdyn_msgs/Edge[] edges

# The anchoring (mapping from waypoints to their pose in a shared reference frame).
bosdyn_msgs/Anchoring anchoring
bool anchoring_is_set
