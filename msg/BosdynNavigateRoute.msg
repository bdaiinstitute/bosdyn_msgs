# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Tell the robot to navigate a route.

# Name of the service to use.
string service_name
# Host machine the service is running on.
string host

# A route for the robot to follow.
bosdyn_msgs/Route route
bool route_is_set

# What should the robot do if it is not at the expected point in the route, or the route is
# blocked.
bosdyn_msgs/RouteFollowingParams route_follow_params
bool route_follow_params_is_set

# Parameters that define how to traverse and end the route.
bosdyn_msgs/TravelParams travel_params
bool travel_params_is_set

# If provided, this will write the last NavigationFeedbackResponse message
# to a blackboard variable with this name.
string navigation_feedback_response_blackboard_key
# If provided, this will write the last NavigateRouteResponse message to
# a blackboard variable with this name.
string navigate_route_response_blackboard_key
