// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/TargetOneOfTarget.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TARGET_ONE_OF_TARGET__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__TARGET_ONE_OF_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TARGET_NOT_SET'.
enum
{
  bosdyn_msgs__msg__TargetOneOfTarget__TARGET_NOT_SET = 0
};

/// Constant 'TARGET_NAVIGATE_TO_SET'.
enum
{
  bosdyn_msgs__msg__TargetOneOfTarget__TARGET_NAVIGATE_TO_SET = 1
};

/// Constant 'TARGET_NAVIGATE_ROUTE_SET'.
enum
{
  bosdyn_msgs__msg__TargetOneOfTarget__TARGET_NAVIGATE_ROUTE_SET = 2
};

// Include directives for member types
// Member 'navigate_to'
#include "bosdyn_msgs/msg/detail/target_navigate_to__struct.h"
// Member 'navigate_route'
#include "bosdyn_msgs/msg/detail/target_navigate_route__struct.h"

/// Struct defined in msg/TargetOneOfTarget in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__TargetOneOfTarget
{
  /// ONEOF MESSAGE  Only one of the following can be set
  bosdyn_msgs__msg__TargetNavigateTo navigate_to;
  bosdyn_msgs__msg__TargetNavigateRoute navigate_route;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t target_choice;
} bosdyn_msgs__msg__TargetOneOfTarget;

// Struct for a sequence of bosdyn_msgs__msg__TargetOneOfTarget.
typedef struct bosdyn_msgs__msg__TargetOneOfTarget__Sequence
{
  bosdyn_msgs__msg__TargetOneOfTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__TargetOneOfTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__TARGET_ONE_OF_TARGET__STRUCT_H_
