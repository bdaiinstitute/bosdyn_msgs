// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Volume.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VOLUME__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__VOLUME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'geometry'
#include "bosdyn_msgs/msg/detail/volume_one_of_geometry__struct.h"

/// Struct defined in msg/Volume in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Volume
{
  /// Represents a volume of space in an unspecified frame.
  bosdyn_msgs__msg__VolumeOneOfGeometry geometry;
} bosdyn_msgs__msg__Volume;

// Struct for a sequence of bosdyn_msgs__msg__Volume.
typedef struct bosdyn_msgs__msg__Volume__Sequence
{
  bosdyn_msgs__msg__Volume * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Volume__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__VOLUME__STRUCT_H_
