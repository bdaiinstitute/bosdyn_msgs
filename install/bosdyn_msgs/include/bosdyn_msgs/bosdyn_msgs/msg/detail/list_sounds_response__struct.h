// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ListSoundsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_SOUNDS_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_SOUNDS_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__struct.h"
// Member 'sounds'
#include "bosdyn_msgs/msg/detail/sound__struct.h"

/// Struct defined in msg/ListSoundsResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ListSoundsResponse
{
  /// List of all sounds present on the robot.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// All sounds currently loaded.
  bosdyn_msgs__msg__Sound__Sequence sounds;
} bosdyn_msgs__msg__ListSoundsResponse;

// Struct for a sequence of bosdyn_msgs__msg__ListSoundsResponse.
typedef struct bosdyn_msgs__msg__ListSoundsResponse__Sequence
{
  bosdyn_msgs__msg__ListSoundsResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ListSoundsResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_SOUNDS_RESPONSE__STRUCT_H_
