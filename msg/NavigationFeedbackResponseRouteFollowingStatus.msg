# AUTOMATICALLY GENERATED BY PROTO CONVERSION

int8 ROUTE_FOLLOWING_STATUS_UNKNOWN=0
# The robot is following the nominal path to the goal, either from a request or
# from internal path planning.
int8 ROUTE_FOLLOWING_STATUS_FOLLOWING_ROUTE=1
# The robot is trying to get back to the nominal path to the goal, either because
# it was not on the nominal path originally, or because it was moved away from the path.
int8 ROUTE_FOLLOWING_STATUS_RETURNING_TO_ROUTE=2
# The robot is taking a different path through the map via edges/waypoints
# to get around a perceived obstacle. This might take it through a different part
# of the building.
int8 ROUTE_FOLLOWING_STATUS_FOLLOWING_ALTERNATE_ROUTE=3
# The robot is walking to a different, nearby part of the map to find a path around
# a perceived blockage.
int8 ROUTE_FOLLOWING_STATUS_EXPLORING=4

int8 value
