# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Get state from the robot.

# Name of the service to use.
string service_name
# Host machine the service is running on.
string host
# Child node. Children will have access to the state gathered by this node.
bosdyn_msgs/Node child
bool child_is_set
# Name of the bosdyn.api.RobotState object in the blackboard. For example, if this is set to
# "robot", children can look up "robot.power_state.motor_power_state" in the blackboard.
string state_name
