// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SystemFaultState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SYSTEM_FAULT_STATE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SYSTEM_FAULT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'faults'
// Member 'historical_faults'
#include "bosdyn_msgs/msg/detail/system_fault__struct.h"
// Member 'aggregated'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_system_fault_severity__struct.h"

/// Struct defined in msg/SystemFaultState in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SystemFaultState
{
  /// The current state of each system fault the robot is experiencing.
  /// An "active" fault indicates a hardware/software currently on the robot.
  /// A "historical" fault indicates a, now cleared, hardware/software problem.
  /// Historical faults are useful to diagnose robot behavior subject to intermittent failed states.
  /// Currently active faults
  bosdyn_msgs__msg__SystemFault__Sequence faults;
  /// Inactive faults that cleared within the last 10 minutes
  bosdyn_msgs__msg__SystemFault__Sequence historical_faults;
  /// Aggregated fault data.
  /// This provides a very quick way of determining if there any
  /// "battery" or "vision" faults above a certain severity level.
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity__Sequence aggregated;
} bosdyn_msgs__msg__SystemFaultState;

// Struct for a sequence of bosdyn_msgs__msg__SystemFaultState.
typedef struct bosdyn_msgs__msg__SystemFaultState__Sequence
{
  bosdyn_msgs__msg__SystemFaultState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SystemFaultState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SYSTEM_FAULT_STATE__STRUCT_H_
