// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
/**
  * UNKNOWN should never be used.
 */
enum
{
  bosdyn_msgs__msg__UpdateCallbackResponseStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_OK'.
/**
  * The AreaCallback is actively updating. If an execution error does occur, that is reported
  * via the response oneof.
 */
enum
{
  bosdyn_msgs__msg__UpdateCallbackResponseStatus__STATUS_OK = 1
};

/// Constant 'STATUS_INVALID_COMMAND_ID'.
/**
  * The request command id does not exist or is no longer executing.
 */
enum
{
  bosdyn_msgs__msg__UpdateCallbackResponseStatus__STATUS_INVALID_COMMAND_ID = 2
};

/// Constant 'STATUS_EXPIRED_END_TIME'.
/**
  * The area callback end time already expired.
 */
enum
{
  bosdyn_msgs__msg__UpdateCallbackResponseStatus__STATUS_EXPIRED_END_TIME = 3
};

/// Struct defined in msg/UpdateCallbackResponseStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__UpdateCallbackResponseStatus
{
  int8_t value;
} bosdyn_msgs__msg__UpdateCallbackResponseStatus;

// Struct for a sequence of bosdyn_msgs__msg__UpdateCallbackResponseStatus.
typedef struct bosdyn_msgs__msg__UpdateCallbackResponseStatus__Sequence
{
  bosdyn_msgs__msg__UpdateCallbackResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__UpdateCallbackResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_STATUS__STRUCT_H_
