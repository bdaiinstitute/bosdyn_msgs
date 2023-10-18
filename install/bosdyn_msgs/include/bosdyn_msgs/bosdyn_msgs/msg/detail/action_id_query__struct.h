// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ActionIdQuery.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_ID_QUERY__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_ID_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action_ids'
#include "bosdyn_msgs/msg/detail/capture_action_id__struct.h"

/// Struct defined in msg/ActionIdQuery in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ActionIdQuery
{
  /// A query parameter which filters the possible set of data identifiters to those
  /// which contain the same action/group names matching any of the names in the
  /// set of CaptureActionIds.
  /// The action ids to filter with.
  bosdyn_msgs__msg__CaptureActionId__Sequence action_ids;
} bosdyn_msgs__msg__ActionIdQuery;

// Struct for a sequence of bosdyn_msgs__msg__ActionIdQuery.
typedef struct bosdyn_msgs__msg__ActionIdQuery__Sequence
{
  bosdyn_msgs__msg__ActionIdQuery * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ActionIdQuery__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_ID_QUERY__STRUCT_H_
