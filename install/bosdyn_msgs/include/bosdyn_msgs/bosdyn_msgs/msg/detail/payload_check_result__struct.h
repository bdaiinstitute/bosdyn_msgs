// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/PayloadCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_CHECK_RESULT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_CHECK_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'error'
#include "bosdyn_msgs/msg/detail/payload_check_result_error__struct.h"

/// Struct defined in msg/PayloadCheckResult in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__PayloadCheckResult
{
  /// Results of payload check.
  /// Errors reflect an issue with payload configuration.
  /// A flag to indicate if configuration has an error.
  bosdyn_msgs__msg__PayloadCheckResultError error;
  /// Indicates how much extra payload (in kg) we think the robot has
  /// Positive indicates robot has more payload than it is configured.
  /// Negative indicates robot has less payload than it is configured.
  float extra_payload;
} bosdyn_msgs__msg__PayloadCheckResult;

// Struct for a sequence of bosdyn_msgs__msg__PayloadCheckResult.
typedef struct bosdyn_msgs__msg__PayloadCheckResult__Sequence
{
  bosdyn_msgs__msg__PayloadCheckResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__PayloadCheckResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_CHECK_RESULT__STRUCT_H_
