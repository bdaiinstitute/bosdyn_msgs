// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/DockState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE__STRUCT_H_

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
#include "bosdyn_msgs/msg/detail/dock_state_docked_status__struct.h"
// Member 'dock_type'
#include "bosdyn_msgs/msg/detail/dock_type__struct.h"
// Member 'power_status'
#include "bosdyn_msgs/msg/detail/dock_state_link_status__struct.h"

/// Struct defined in msg/DockState in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__DockState
{
  /// Message describing the overall dock state of the robot, including power & comms connections.
  /// Not tied to any particular DockingCommand ID.
  /// Note: [*] indicates fields which are only valid if the status is DOCK_STATUS_DOCKED or DOCK_STATUS_DOCKING
  /// or DOCK_STATUS_UNDOCKING.
  /// Note: [^] indicates fields which are only valid if the status is DOCK_STATUS_DOCKED.
  /// Status of if the robot is on dock
  bosdyn_msgs__msg__DockStateDockedStatus status;
  /// Type of the dock
  bosdyn_msgs__msg__DockType dock_type;
  /// ID of the dock
  uint32_t dock_id;
  /// Status of power detection from the dock
  bosdyn_msgs__msg__DockStateLinkStatus power_status;
} bosdyn_msgs__msg__DockState;

// Struct for a sequence of bosdyn_msgs__msg__DockState.
typedef struct bosdyn_msgs__msg__DockState__Sequence
{
  bosdyn_msgs__msg__DockState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__DockState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE__STRUCT_H_
