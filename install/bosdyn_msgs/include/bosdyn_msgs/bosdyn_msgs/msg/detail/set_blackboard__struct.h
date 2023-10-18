// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SetBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_BLACKBOARD__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SET_BLACKBOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'blackboard_variables'
#include "bosdyn_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/SetBlackboard in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SetBlackboard
{
  /// Sets existing blackboard variables within this scope to specific values, returning SUCCESS.
  /// The key of the KeyValue is the name of the blackboard variable.
  /// The value will be dereferenced and converted into a value type at runtime
  /// inside this node's tick function. For example, if the value is a runtime
  /// variable, that variable will be evaluated at tick time, and then stored into
  /// the blackboard. If the value is another blackboard variable, that blackboard
  /// variable's value will be copied into the variable specified by the key.
  bosdyn_msgs__msg__KeyValue__Sequence blackboard_variables;
} bosdyn_msgs__msg__SetBlackboard;

// Struct for a sequence of bosdyn_msgs__msg__SetBlackboard.
typedef struct bosdyn_msgs__msg__SetBlackboard__Sequence
{
  bosdyn_msgs__msg__SetBlackboard * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SetBlackboard__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_BLACKBOARD__STRUCT_H_
