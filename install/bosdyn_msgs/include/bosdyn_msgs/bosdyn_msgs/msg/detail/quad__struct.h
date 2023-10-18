// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Quad.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__QUAD__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__QUAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Quad in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Quad
{
  /// A square oriented in 3D space.
  /// The center of the quad and the orientation of the normal.
  /// The normal axis is [0, 0, 1].
  geometry_msgs__msg__Pose pose;
  bool pose_is_set;
  /// The side length of the quad.
  double size;
} bosdyn_msgs__msg__Quad;

// Struct for a sequence of bosdyn_msgs__msg__Quad.
typedef struct bosdyn_msgs__msg__Quad__Sequence
{
  bosdyn_msgs__msg__Quad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Quad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__QUAD__STRUCT_H_
