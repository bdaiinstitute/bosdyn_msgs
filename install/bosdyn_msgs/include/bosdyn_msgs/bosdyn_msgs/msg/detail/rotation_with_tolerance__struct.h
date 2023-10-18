// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RotationWithTolerance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROTATION_WITH_TOLERANCE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ROTATION_WITH_TOLERANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rotation_ewrt_frame'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/RotationWithTolerance in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RotationWithTolerance
{
  geometry_msgs__msg__Quaternion rotation_ewrt_frame;
  bool rotation_ewrt_frame_is_set;
  float threshold_radians;
} bosdyn_msgs__msg__RotationWithTolerance;

// Struct for a sequence of bosdyn_msgs__msg__RotationWithTolerance.
typedef struct bosdyn_msgs__msg__RotationWithTolerance__Sequence
{
  bosdyn_msgs__msg__RotationWithTolerance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RotationWithTolerance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROTATION_WITH_TOLERANCE__STRUCT_H_
