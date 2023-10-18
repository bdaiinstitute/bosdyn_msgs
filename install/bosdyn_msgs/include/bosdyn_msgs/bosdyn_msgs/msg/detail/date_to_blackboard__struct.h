// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/DateToBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATE_TO_BLACKBOARD__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__DATE_TO_BLACKBOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DateToBlackboard in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__DateToBlackboard
{
  /// Record a datetime string into the blackboard. Writes the date according to ISO8601 format.
  /// The key of the variable that will be written.
  rosidl_runtime_c__String key;
} bosdyn_msgs__msg__DateToBlackboard;

// Struct for a sequence of bosdyn_msgs__msg__DateToBlackboard.
typedef struct bosdyn_msgs__msg__DateToBlackboard__Sequence
{
  bosdyn_msgs__msg__DateToBlackboard * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__DateToBlackboard__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATE_TO_BLACKBOARD__STRUCT_H_
