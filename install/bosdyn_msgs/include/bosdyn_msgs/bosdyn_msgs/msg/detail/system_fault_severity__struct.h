// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SystemFaultSeverity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SYSTEM_FAULT_SEVERITY__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SYSTEM_FAULT_SEVERITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SEVERITY_UNKNOWN'.
/**
  * Unknown severity
 */
enum
{
  bosdyn_msgs__msg__SystemFaultSeverity__SEVERITY_UNKNOWN = 0
};

/// Constant 'SEVERITY_INFO'.
/**
  * No hardware problem
 */
enum
{
  bosdyn_msgs__msg__SystemFaultSeverity__SEVERITY_INFO = 1
};

/// Constant 'SEVERITY_WARN'.
/**
  * Robot performance may be degraded
 */
enum
{
  bosdyn_msgs__msg__SystemFaultSeverity__SEVERITY_WARN = 2
};

/// Constant 'SEVERITY_CRITICAL'.
/**
  * Critical fault
 */
enum
{
  bosdyn_msgs__msg__SystemFaultSeverity__SEVERITY_CRITICAL = 3
};

/// Struct defined in msg/SystemFaultSeverity in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SystemFaultSeverity
{
  int8_t value;
} bosdyn_msgs__msg__SystemFaultSeverity;

// Struct for a sequence of bosdyn_msgs__msg__SystemFaultSeverity.
typedef struct bosdyn_msgs__msg__SystemFaultSeverity__Sequence
{
  bosdyn_msgs__msg__SystemFaultSeverity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SystemFaultSeverity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SYSTEM_FAULT_SEVERITY__STRUCT_H_
