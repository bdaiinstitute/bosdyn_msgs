// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/UpdatePayloadVersionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_VERSION_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_VERSION_RESPONSE__STRUCT_H_

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
// Member 'status'
#include "bosdyn_msgs/msg/detail/update_payload_version_response_status__struct.h"

/// Struct defined in msg/UpdatePayloadVersionResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__UpdatePayloadVersionResponse
{
  /// The UpdatePayloadVersion response message contains the status of whether the update was
  /// successful.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Return status for the request.
  bosdyn_msgs__msg__UpdatePayloadVersionResponseStatus status;
} bosdyn_msgs__msg__UpdatePayloadVersionResponse;

// Struct for a sequence of bosdyn_msgs__msg__UpdatePayloadVersionResponse.
typedef struct bosdyn_msgs__msg__UpdatePayloadVersionResponse__Sequence
{
  bosdyn_msgs__msg__UpdatePayloadVersionResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__UpdatePayloadVersionResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_VERSION_RESPONSE__STRUCT_H_
