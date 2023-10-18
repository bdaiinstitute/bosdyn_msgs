// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GripperCommand in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__GripperCommand
{
  uint8_t structure_needs_at_least_one_member;
} bosdyn_msgs__msg__GripperCommand;

// Struct for a sequence of bosdyn_msgs__msg__GripperCommand.
typedef struct bosdyn_msgs__msg__GripperCommand__Sequence
{
  bosdyn_msgs__msg__GripperCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__GripperCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_
