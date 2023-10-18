// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ListStoredDataResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_DATA_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_DATA_RESPONSE__STRUCT_H_

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
// Member 'data_ids'
#include "bosdyn_msgs/msg/detail/data_identifier__struct.h"

/// Struct defined in msg/ListStoredDataResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ListStoredDataResponse
{
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// List of data identifiers that satisfied the query parameters.
  bosdyn_msgs__msg__DataIdentifier__Sequence data_ids;
} bosdyn_msgs__msg__ListStoredDataResponse;

// Struct for a sequence of bosdyn_msgs__msg__ListStoredDataResponse.
typedef struct bosdyn_msgs__msg__ListStoredDataResponse__Sequence
{
  bosdyn_msgs__msg__ListStoredDataResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ListStoredDataResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_DATA_RESPONSE__STRUCT_H_
