// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StoreResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_RESPONSE__STRUCT_H_

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
// Member 'point'
#include "bosdyn_msgs/msg/detail/logpoint__struct.h"

/// Struct defined in msg/StoreResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StoreResponse
{
  /// Result of data acquisition trigger.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// The log point returned here can be used to add a tag to the Logpoint later
  /// It will very likely be in th 'QUEUED' state.
  bosdyn_msgs__msg__Logpoint point;
  bool point_is_set;
} bosdyn_msgs__msg__StoreResponse;

// Struct for a sequence of bosdyn_msgs__msg__StoreResponse.
typedef struct bosdyn_msgs__msg__StoreResponse__Sequence
{
  bosdyn_msgs__msg__StoreResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StoreResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_RESPONSE__STRUCT_H_
