// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/DrawableArrow.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_ARROW__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_ARROW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/DrawableArrow in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__DrawableArrow
{
  /// A directed arrow drawing object.
  geometry_msgs__msg__Vector3 direction;
  bool direction_is_set;
  double radius;
} bosdyn_msgs__msg__DrawableArrow;

// Struct for a sequence of bosdyn_msgs__msg__DrawableArrow.
typedef struct bosdyn_msgs__msg__DrawableArrow__Sequence
{
  bosdyn_msgs__msg__DrawableArrow * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__DrawableArrow__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_ARROW__STRUCT_H_
