# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Specify the linear velocity of the hand in either a cylindrical or Cartesian coordinate
# system.
bosdyn_msgs/ArmVelocityCommandRequestOneOfCommand command

# The angular velocity of the hand frame measured with respect to the odom frame, expressed
# in the hand frame. A 'X' rate will cause the hand to rotate about its x-axis, e.g. the
# final wrist twist joint will rotate. And similarly, 'Y' and 'Z' rates will cause the hand
# to rotate about its y and z axis respectively. 
# The units should be rad/sec.
geometry_msgs/Vector3 angular_velocity_of_hand_rt_odom_in_hand
bool angular_velocity_of_hand_rt_odom_in_hand_is_set

# Optional maximum acceleration magnitude of the end-effector. (m/s^2)
float64 maximum_acceleration
bool maximum_acceleration_is_set

# The timestamp (in robot time) by which a command must finish executing.
# This is a required field and used to prevent runaway commands.
builtin_interfaces/Time end_time
bool end_time_is_set

