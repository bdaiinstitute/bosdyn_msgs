# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# ONEOF MESSAGE  Only one of the following can be set
bosdyn_msgs/ArmVelocityCommandCylindricalVelocity cylindrical_velocity
bosdyn_msgs/ArmVelocityCommandCartesianVelocity cartesian_velocity

int8 COMMAND_NOT_SET=0
int8 COMMAND_CYLINDRICAL_VELOCITY_SET=1
int8 COMMAND_CARTESIAN_VELOCITY_SET=2

# Only one of the above can be filled in.  Use the enum to choose which.
int8 command_choice
