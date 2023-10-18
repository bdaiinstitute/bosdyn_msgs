// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RobotCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "bosdyn_msgs/msg/detail/robot_command_feedback_one_of_command__struct.h"

/// Struct defined in msg/RobotCommandFeedback in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RobotCommandFeedback
{
  /// Command specific feedback. Distance to goal, estimated time remaining, probability of
  /// success, etc. Note that the feedback should directly mirror the command request.
  bosdyn_msgs__msg__RobotCommandFeedbackOneOfCommand command;
} bosdyn_msgs__msg__RobotCommandFeedback;

// Struct for a sequence of bosdyn_msgs__msg__RobotCommandFeedback.
typedef struct bosdyn_msgs__msg__RobotCommandFeedback__Sequence
{
  bosdyn_msgs__msg__RobotCommandFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RobotCommandFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK__STRUCT_H_
