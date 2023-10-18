// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StateNodeStatesAtTickNodeStateBlackboardState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE_BLACKBOARD_STATE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE_BLACKBOARD_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'variables'
#include "bosdyn_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/StateNodeStatesAtTickNodeStateBlackboardState in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StateNodeStatesAtTickNodeStateBlackboardState
{
  bosdyn_msgs__msg__KeyValue__Sequence variables;
} bosdyn_msgs__msg__StateNodeStatesAtTickNodeStateBlackboardState;

// Struct for a sequence of bosdyn_msgs__msg__StateNodeStatesAtTickNodeStateBlackboardState.
typedef struct bosdyn_msgs__msg__StateNodeStatesAtTickNodeStateBlackboardState__Sequence
{
  bosdyn_msgs__msg__StateNodeStatesAtTickNodeStateBlackboardState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StateNodeStatesAtTickNodeStateBlackboardState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE_BLACKBOARD_STATE__STRUCT_H_
