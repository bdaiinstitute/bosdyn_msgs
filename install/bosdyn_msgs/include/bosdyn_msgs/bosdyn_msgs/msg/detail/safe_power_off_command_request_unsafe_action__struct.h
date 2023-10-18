// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SafePowerOffCommandRequestUnsafeAction.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_REQUEST_UNSAFE_ACTION__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_REQUEST_UNSAFE_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNSAFE_UNKNOWN'.
enum
{
  bosdyn_msgs__msg__SafePowerOffCommandRequestUnsafeAction__UNSAFE_UNKNOWN = 0
};

/// Constant 'UNSAFE_MOVE_TO_SAFE_POSITION'.
/**
  * Robot may attempt to move to a safe position (i.e. descends stairs) before sitting
  * and powering off.
 */
enum
{
  bosdyn_msgs__msg__SafePowerOffCommandRequestUnsafeAction__UNSAFE_MOVE_TO_SAFE_POSITION = 1
};

/// Constant 'UNSAFE_FORCE_COMMAND'.
/**
  * Force sit and power off regardless of positioning. Robot will not take additional
  * steps
 */
enum
{
  bosdyn_msgs__msg__SafePowerOffCommandRequestUnsafeAction__UNSAFE_FORCE_COMMAND = 2
};

/// Struct defined in msg/SafePowerOffCommandRequestUnsafeAction in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SafePowerOffCommandRequestUnsafeAction
{
  int8_t value;
} bosdyn_msgs__msg__SafePowerOffCommandRequestUnsafeAction;

// Struct for a sequence of bosdyn_msgs__msg__SafePowerOffCommandRequestUnsafeAction.
typedef struct bosdyn_msgs__msg__SafePowerOffCommandRequestUnsafeAction__Sequence
{
  bosdyn_msgs__msg__SafePowerOffCommandRequestUnsafeAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SafePowerOffCommandRequestUnsafeAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_REQUEST_UNSAFE_ACTION__STRUCT_H_
