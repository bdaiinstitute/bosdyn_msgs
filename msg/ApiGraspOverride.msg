# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Use this message to assert the ground truth about grasping.
# Grasping is usually detected automatically by the robot. If the client wishes to override the
# robot's determination of grasp status, send an ApiGraspOverride message with either:
# OVERRIDE_HOLDING, indicating the gripper is holding something, or
# OVERRIDE_NOT_HOLDING, indicating the gripper is not holding
# anything.

bosdyn_msgs/ApiGraspOverrideOverride override_request
