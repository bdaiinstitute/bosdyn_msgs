// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/GetDockingStateResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_DOCKING_STATE_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__GET_DOCKING_STATE_RESPONSE__STRUCT_H_

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
// Member 'dock_state'
#include "bosdyn_msgs/msg/detail/dock_state__struct.h"

/// Struct defined in msg/GetDockingStateResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__GetDockingStateResponse
{
  /// Response of a GetDockingStateRequest
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  bosdyn_msgs__msg__DockState dock_state;
  bool dock_state_is_set;
} bosdyn_msgs__msg__GetDockingStateResponse;

// Struct for a sequence of bosdyn_msgs__msg__GetDockingStateResponse.
typedef struct bosdyn_msgs__msg__GetDockingStateResponse__Sequence
{
  bosdyn_msgs__msg__GetDockingStateResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__GetDockingStateResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_DOCKING_STATE_RESPONSE__STRUCT_H_
