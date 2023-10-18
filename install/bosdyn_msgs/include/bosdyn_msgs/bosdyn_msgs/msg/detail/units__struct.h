// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Units.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UNITS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__UNITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'units'
#include "bosdyn_msgs/msg/detail/units_one_of_units__struct.h"

/// Struct defined in msg/Units in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Units
{
  bosdyn_msgs__msg__UnitsOneOfUnits units;
  /// If a service wants an absolute temperature threshold between 0 C  and 100 C, that would show
  /// up as 32 F to 212 F on any Fahrenheit loving clients IF is_relative is set to false.  Note
  /// the change from 0 C to 32 F.
  ///
  /// If a service wants a relative temperate threshold (region A must be no more than X degrees
  /// hotter than region B), between 0 and 100 C, that would show up as 0 F to 180 F on any
  /// Fahrenheit loving clients IF is_relative is set to true.  Note that 0 C now maps to 0 F.
  ///
  /// NOTE: Only relevant for units with non equal zero points.
  bool is_relative;
} bosdyn_msgs__msg__Units;

// Struct for a sequence of bosdyn_msgs__msg__Units.
typedef struct bosdyn_msgs__msg__Units__Sequence
{
  bosdyn_msgs__msg__Units * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Units__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__UNITS__STRUCT_H_
