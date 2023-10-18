// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RestartWhenPaused.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RESTART_WHEN_PAUSED__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__RESTART_WHEN_PAUSED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'child'
#include "bosdyn_msgs/msg/detail/node__struct.h"

/// Struct defined in msg/RestartWhenPaused in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RestartWhenPaused
{
  /// This node will run and return the status of the child node.
  /// If the mission is paused while this node is executing, the child will be
  /// restarted when the mission is resumed.
  bosdyn_msgs__msg__Node child;
  bool child_is_set;
} bosdyn_msgs__msg__RestartWhenPaused;

// Struct for a sequence of bosdyn_msgs__msg__RestartWhenPaused.
typedef struct bosdyn_msgs__msg__RestartWhenPaused__Sequence
{
  bosdyn_msgs__msg__RestartWhenPaused * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RestartWhenPaused__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__RESTART_WHEN_PAUSED__STRUCT_H_
