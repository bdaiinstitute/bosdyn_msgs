// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/PayloadCredentials.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_CREDENTIALS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_CREDENTIALS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'guid'
// Member 'secret'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PayloadCredentials in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__PayloadCredentials
{
  /// PayloadCredentials are used to authorize a payload.
  /// The GUID of the payload.
  rosidl_runtime_c__String guid;
  /// The secret of the payload.
  rosidl_runtime_c__String secret;
} bosdyn_msgs__msg__PayloadCredentials;

// Struct for a sequence of bosdyn_msgs__msg__PayloadCredentials.
typedef struct bosdyn_msgs__msg__PayloadCredentials__Sequence
{
  bosdyn_msgs__msg__PayloadCredentials * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__PayloadCredentials__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_CREDENTIALS__STRUCT_H_
