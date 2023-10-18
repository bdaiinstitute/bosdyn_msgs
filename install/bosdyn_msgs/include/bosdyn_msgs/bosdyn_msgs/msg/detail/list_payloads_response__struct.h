// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ListPayloadsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_PAYLOADS_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_PAYLOADS_RESPONSE__STRUCT_H_

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
// Member 'payloads'
#include "bosdyn_msgs/msg/detail/payload__struct.h"

/// Struct defined in msg/ListPayloadsResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ListPayloadsResponse
{
  /// The ListPayloads response message returns all payloads registered in the robot's directory.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// The returned list of payloads registered in the directory.
  bosdyn_msgs__msg__Payload__Sequence payloads;
} bosdyn_msgs__msg__ListPayloadsResponse;

// Struct for a sequence of bosdyn_msgs__msg__ListPayloadsResponse.
typedef struct bosdyn_msgs__msg__ListPayloadsResponse__Sequence
{
  bosdyn_msgs__msg__ListPayloadsResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ListPayloadsResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_PAYLOADS_RESPONSE__STRUCT_H_
