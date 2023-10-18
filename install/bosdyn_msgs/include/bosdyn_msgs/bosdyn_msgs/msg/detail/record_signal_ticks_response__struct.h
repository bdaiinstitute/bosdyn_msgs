// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RecordSignalTicksResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_SIGNAL_TICKS_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_SIGNAL_TICKS_RESPONSE__STRUCT_H_

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
// Member 'errors'
#include "bosdyn_msgs/msg/detail/record_signal_ticks_response_error__struct.h"

/// Struct defined in msg/RecordSignalTicksResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RecordSignalTicksResponse
{
  /// Signal tick recording error.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Errors which occurred when logging signal ticks.
  bosdyn_msgs__msg__RecordSignalTicksResponseError__Sequence errors;
} bosdyn_msgs__msg__RecordSignalTicksResponse;

// Struct for a sequence of bosdyn_msgs__msg__RecordSignalTicksResponse.
typedef struct bosdyn_msgs__msg__RecordSignalTicksResponse__Sequence
{
  bosdyn_msgs__msg__RecordSignalTicksResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RecordSignalTicksResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_SIGNAL_TICKS_RESPONSE__STRUCT_H_
