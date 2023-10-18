// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Polygon.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POLYGON__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__POLYGON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vertexes'
#include "bosdyn_msgs/msg/detail/vec2__struct.h"

/// Struct defined in msg/Polygon in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Polygon
{
  /// Polygon in the XY plane.
  /// May be concave, but should not self-intersect. Vertices can be specified in either
  /// clockwise or counterclockwise orders.
  bosdyn_msgs__msg__Vec2__Sequence vertexes;
} bosdyn_msgs__msg__Polygon;

// Struct for a sequence of bosdyn_msgs__msg__Polygon.
typedef struct bosdyn_msgs__msg__Polygon__Sequence
{
  bosdyn_msgs__msg__Polygon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Polygon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__POLYGON__STRUCT_H_
