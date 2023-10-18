// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandCylindricalVelocity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CYLINDRICAL_VELOCITY__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CYLINDRICAL_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'linear_velocity'
#include "bosdyn_msgs/msg/detail/cylindrical_coordinate__struct.h"

/// Struct defined in msg/ArmVelocityCommandCylindricalVelocity in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ArmVelocityCommandCylindricalVelocity
{
  /// / The linear velocities for the end-effector are specified in unitless cylindrical
  /// / coordinates. The origin of the cylindrical coordinate system is the base of the arm
  /// / (shoulder).  The Z-axis is aligned with gravity, and the X-axis is the unit vector from
  /// / the shoulder to the hand-point. This construction allows for 'Z'-axis velocities to
  /// / raise/lower the hand, 'R'-axis velocities will cause the hand to move towards/away from
  /// / the shoulder, and 'theta'-axis velocities will cause the hand to travel
  /// / clockwise/counter-clockwise around the shoulder. Lastly, the command is unitless, with
  /// / values for each axis specified in the range [-1, 1].  A value of 0 denotes no velocity
  /// / and values of +/- 1 denote maximum velocity (see max_linear_velocity).
  bosdyn_msgs__msg__CylindricalCoordinate linear_velocity;
  bool linear_velocity_is_set;
  /// / The maximum velocity in meters / second for the hand.
  /// / If unset and default value of 0 received, will set max_linear_velocity to 0.5 m/s.
  double max_linear_velocity;
  bool max_linear_velocity_is_set;
} bosdyn_msgs__msg__ArmVelocityCommandCylindricalVelocity;

// Struct for a sequence of bosdyn_msgs__msg__ArmVelocityCommandCylindricalVelocity.
typedef struct bosdyn_msgs__msg__ArmVelocityCommandCylindricalVelocity__Sequence
{
  bosdyn_msgs__msg__ArmVelocityCommandCylindricalVelocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ArmVelocityCommandCylindricalVelocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CYLINDRICAL_VELOCITY__STRUCT_H_
