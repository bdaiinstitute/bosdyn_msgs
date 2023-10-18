// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/EStopStateState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__E_STOP_STATE_STATE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__E_STOP_STATE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_UNKNOWN'.
/**
  * No E-Stop information is present. Only happens in an error case.
 */
enum
{
  bosdyn_msgs__msg__EStopStateState__STATE_UNKNOWN = 0
};

/// Constant 'STATE_ESTOPPED'.
/**
  * E-Stop is active -- robot cannot power its actuators.
 */
enum
{
  bosdyn_msgs__msg__EStopStateState__STATE_ESTOPPED = 1
};

/// Constant 'STATE_NOT_ESTOPPED'.
/**
  * E-Stop is released -- robot may be able to power its actuators.
 */
enum
{
  bosdyn_msgs__msg__EStopStateState__STATE_NOT_ESTOPPED = 2
};

/// Struct defined in msg/EStopStateState in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__EStopStateState
{
  int8_t value;
} bosdyn_msgs__msg__EStopStateState;

// Struct for a sequence of bosdyn_msgs__msg__EStopStateState.
typedef struct bosdyn_msgs__msg__EStopStateState__Sequence
{
  bosdyn_msgs__msg__EStopStateState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__EStopStateState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__E_STOP_STATE_STATE__STRUCT_H_
