// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/TerminateLogResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TERMINATE_LOG_RESPONSE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__TERMINATE_LOG_RESPONSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
enum
{
  bosdyn_msgs__msg__TerminateLogResponseStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_OK'.
enum
{
  bosdyn_msgs__msg__TerminateLogResponseStatus__STATUS_OK = 1
};

/// Constant 'STATUS_ID_NOT_FOUND'.
/**
  * This log is not available on the robot.
 */
enum
{
  bosdyn_msgs__msg__TerminateLogResponseStatus__STATUS_ID_NOT_FOUND = 2
};

/// Struct defined in msg/TerminateLogResponseStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__TerminateLogResponseStatus
{
  int8_t value;
} bosdyn_msgs__msg__TerminateLogResponseStatus;

// Struct for a sequence of bosdyn_msgs__msg__TerminateLogResponseStatus.
typedef struct bosdyn_msgs__msg__TerminateLogResponseStatus__Sequence
{
  bosdyn_msgs__msg__TerminateLogResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__TerminateLogResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__TERMINATE_LOG_RESPONSE_STATUS__STRUCT_H_
