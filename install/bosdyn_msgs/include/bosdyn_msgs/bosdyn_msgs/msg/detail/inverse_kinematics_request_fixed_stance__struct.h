// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestFixedStance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_FIXED_STANCE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_FIXED_STANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fl_rt_scene'
// Member 'fr_rt_scene'
// Member 'hl_rt_scene'
// Member 'hr_rt_scene'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/InverseKinematicsRequestFixedStance in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__InverseKinematicsRequestFixedStance
{
  /// The feet will be constrained to the specified positions relative to the scene frame. If
  /// unspecified, these will default to the current positions of the feet.
  geometry_msgs__msg__Vector3 fl_rt_scene;
  bool fl_rt_scene_is_set;
  geometry_msgs__msg__Vector3 fr_rt_scene;
  bool fr_rt_scene_is_set;
  geometry_msgs__msg__Vector3 hl_rt_scene;
  bool hl_rt_scene_is_set;
  geometry_msgs__msg__Vector3 hr_rt_scene;
  bool hr_rt_scene_is_set;
} bosdyn_msgs__msg__InverseKinematicsRequestFixedStance;

// Struct for a sequence of bosdyn_msgs__msg__InverseKinematicsRequestFixedStance.
typedef struct bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence
{
  bosdyn_msgs__msg__InverseKinematicsRequestFixedStance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_FIXED_STANCE__STRUCT_H_
