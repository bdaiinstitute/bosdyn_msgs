// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/JointState in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__JointState
{
  /// Proto containing the state of a joint on the robot. This can be used with the robot skeleton to
  /// update the current view of the robot.
  /// This name maps directly to the joints in the URDF.
  rosidl_runtime_c__String name;
  /// This is typically an angle in radians as joints are typically revolute. However, for
  /// translational joints this could be a distance in meters.
  double position;
  bool position_is_set;
  /// The joint velocity in.
  double velocity;
  bool velocity_is_set;
  /// The joint acceleration in.
  double acceleration;
  bool acceleration_is_set;
  /// This is typically a torque in Newton meters as joints are typically revolute. However, for
  /// translational joints this could be a force in Newtons.
  double load;
  bool load_is_set;
} bosdyn_msgs__msg__JointState;

// Struct for a sequence of bosdyn_msgs__msg__JointState.
typedef struct bosdyn_msgs__msg__JointState__Sequence
{
  bosdyn_msgs__msg__JointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__JointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_
