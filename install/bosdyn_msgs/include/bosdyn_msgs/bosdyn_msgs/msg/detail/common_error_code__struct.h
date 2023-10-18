// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/CommonErrorCode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__COMMON_ERROR_CODE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__COMMON_ERROR_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CODE_UNSPECIFIED'.
/**
  * Code is not specified.
 */
enum
{
  bosdyn_msgs__msg__CommonErrorCode__CODE_UNSPECIFIED = 0
};

/// Constant 'CODE_OK'.
/**
  * Not an error.  Request was successful.
 */
enum
{
  bosdyn_msgs__msg__CommonErrorCode__CODE_OK = 1
};

/// Constant 'CODE_INTERNAL_SERVER_ERROR'.
/**
  * Service experienced an unexpected error state.
 */
enum
{
  bosdyn_msgs__msg__CommonErrorCode__CODE_INTERNAL_SERVER_ERROR = 2
};

/// Constant 'CODE_INVALID_REQUEST'.
/**
  * Ill-formed request.  Request arguments were not valid.
 */
enum
{
  bosdyn_msgs__msg__CommonErrorCode__CODE_INVALID_REQUEST = 3
};

/// Struct defined in msg/CommonErrorCode in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__CommonErrorCode
{
  int8_t value;
} bosdyn_msgs__msg__CommonErrorCode;

// Struct for a sequence of bosdyn_msgs__msg__CommonErrorCode.
typedef struct bosdyn_msgs__msg__CommonErrorCode__Sequence
{
  bosdyn_msgs__msg__CommonErrorCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__CommonErrorCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__COMMON_ERROR_CODE__STRUCT_H_
