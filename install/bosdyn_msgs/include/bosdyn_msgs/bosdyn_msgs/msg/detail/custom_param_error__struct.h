// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/CustomParamError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ERROR__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/custom_param_error_status__struct.h"
// Member 'error_messages'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CustomParamError in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__CustomParamError
{
  /// Errors specific to the use of custom parameters.
  bosdyn_msgs__msg__CustomParamErrorStatus status;
  /// List of error messages from this parameter and its children
  rosidl_runtime_c__String__Sequence error_messages;
} bosdyn_msgs__msg__CustomParamError;

// Struct for a sequence of bosdyn_msgs__msg__CustomParamError.
typedef struct bosdyn_msgs__msg__CustomParamError__Sequence
{
  bosdyn_msgs__msg__CustomParamError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__CustomParamError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ERROR__STRUCT_H_
