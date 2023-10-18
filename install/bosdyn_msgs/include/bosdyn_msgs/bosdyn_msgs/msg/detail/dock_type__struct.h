// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/DockType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCK_TYPE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__DOCK_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DOCK_TYPE_UNKNOWN'.
/**
  * Type of dock
  * Unknown type of dock
 */
enum
{
  bosdyn_msgs__msg__DockType__DOCK_TYPE_UNKNOWN = 0
};

/// Constant 'DOCK_TYPE_CONTACT_PROTOTYPE'.
/**
  * Prototype version SpotDock
 */
enum
{
  bosdyn_msgs__msg__DockType__DOCK_TYPE_CONTACT_PROTOTYPE = 1
};

/// Constant 'DOCK_TYPE_SPOT_DOCK'.
/**
  * Production version SpotDock
 */
enum
{
  bosdyn_msgs__msg__DockType__DOCK_TYPE_SPOT_DOCK = 2
};

/// Constant 'DOCK_TYPE_SPOT_DOGHOUSE'.
/**
  * Production version SpotDock located in the dog house.
 */
enum
{
  bosdyn_msgs__msg__DockType__DOCK_TYPE_SPOT_DOGHOUSE = 3
};

/// Struct defined in msg/DockType in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__DockType
{
  int8_t value;
} bosdyn_msgs__msg__DockType;

// Struct for a sequence of bosdyn_msgs__msg__DockType.
typedef struct bosdyn_msgs__msg__DockType__Sequence
{
  bosdyn_msgs__msg__DockType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__DockType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCK_TYPE__STRUCT_H_
