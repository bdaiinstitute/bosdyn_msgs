# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# A base element of the graph nav map. Edges consist of a directed edge from one
# waypoint to another and a transform that estimates the relationship in 3D space
# between the two waypoints.

# An edge is uniquely identified by the waypoints it connects.
# Two waypoints will only ever be connected by a single edge.
# That edge is traversable in either direction.

# Identifier of this Edge.
# Edges are mutable -- the identifier does not have to be updated when other fields change.
bosdyn_msgs/EdgeId id
bool id_is_set

# Identifier of this edge's Snapshot data.
string snapshot_id

# Describes the transform between the "from" waypoint and the "to" waypoint.
geometry_msgs/Pose from_tform_to
bool from_tform_to_is_set


# Annotations understood by BostonDynamics systems.
# Annotations specific to the current edge.
bosdyn_msgs/EdgeAnnotations annotations
bool annotations_is_set
