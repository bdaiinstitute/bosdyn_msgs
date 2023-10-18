// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StopRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STOP_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__STOP_REQUEST__STRUCT_H_

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
#include "bosdyn_msgs/msg/detail/request_header__struct.h"
// Member 'session_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StopRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StopRequest
{
  /// Used to stop a node that was previously ticked, so that it knows that
  /// the next Tick represents a restart rather than a continuation.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// Session ID as returned by the EstablishSessionResponse.
  /// Used to guarantee coherence between a single client and a servicer.
  rosidl_runtime_c__String session_id;
} bosdyn_msgs__msg__StopRequest;

// Struct for a sequence of bosdyn_msgs__msg__StopRequest.
typedef struct bosdyn_msgs__msg__StopRequest__Sequence
{
  bosdyn_msgs__msg__StopRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StopRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STOP_REQUEST__STRUCT_H_
