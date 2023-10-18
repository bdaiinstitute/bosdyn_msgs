// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/DockStateDockedStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE_DOCKED_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE_DOCKED_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DOCK_STATUS_UNKNOWN'.
/**
  * Unknown
 */
enum
{
  bosdyn_msgs__msg__DockStateDockedStatus__DOCK_STATUS_UNKNOWN = 0
};

/// Constant 'DOCK_STATUS_DOCKED'.
/**
  * Robot is detected as on a dock
 */
enum
{
  bosdyn_msgs__msg__DockStateDockedStatus__DOCK_STATUS_DOCKED = 1
};

/// Constant 'DOCK_STATUS_DOCKING'.
/**
  * Robot is currently running a docking command
 */
enum
{
  bosdyn_msgs__msg__DockStateDockedStatus__DOCK_STATUS_DOCKING = 2
};

/// Constant 'DOCK_STATUS_UNDOCKED'.
/**
  * Robot is not detected as on dock
 */
enum
{
  bosdyn_msgs__msg__DockStateDockedStatus__DOCK_STATUS_UNDOCKED = 3
};

/// Constant 'DOCK_STATUS_UNDOCKING'.
/**
  * Robot is currently running an undocking command
 */
enum
{
  bosdyn_msgs__msg__DockStateDockedStatus__DOCK_STATUS_UNDOCKING = 4
};

/// Struct defined in msg/DockStateDockedStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__DockStateDockedStatus
{
  int8_t value;
} bosdyn_msgs__msg__DockStateDockedStatus;

// Struct for a sequence of bosdyn_msgs__msg__DockStateDockedStatus.
typedef struct bosdyn_msgs__msg__DockStateDockedStatus__Sequence
{
  bosdyn_msgs__msg__DockStateDockedStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__DockStateDockedStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE_DOCKED_STATUS__STRUCT_H_
