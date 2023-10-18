// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ManipulatorStateStowState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE_STOW_STATE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE_STOW_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STOWSTATE_UNKNOWN'.
enum
{
  bosdyn_msgs__msg__ManipulatorStateStowState__STOWSTATE_UNKNOWN = 0
};

/// Constant 'STOWSTATE_STOWED'.
enum
{
  bosdyn_msgs__msg__ManipulatorStateStowState__STOWSTATE_STOWED = 1
};

/// Constant 'STOWSTATE_DEPLOYED'.
enum
{
  bosdyn_msgs__msg__ManipulatorStateStowState__STOWSTATE_DEPLOYED = 2
};

/// Struct defined in msg/ManipulatorStateStowState in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ManipulatorStateStowState
{
  int8_t value;
} bosdyn_msgs__msg__ManipulatorStateStowState;

// Struct for a sequence of bosdyn_msgs__msg__ManipulatorStateStowState.
typedef struct bosdyn_msgs__msg__ManipulatorStateStowState__Sequence
{
  bosdyn_msgs__msg__ManipulatorStateStowState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ManipulatorStateStowState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE_STOW_STATE__STRUCT_H_
