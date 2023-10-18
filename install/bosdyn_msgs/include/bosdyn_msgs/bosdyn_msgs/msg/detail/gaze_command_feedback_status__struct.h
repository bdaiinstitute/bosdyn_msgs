// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/GazeCommandFeedbackStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_FEEDBACK_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_FEEDBACK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
/**
  * STATUS_UNKNOWN should never be used. If used, an internal error has happened.
 */
enum
{
  bosdyn_msgs__msg__GazeCommandFeedbackStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_TRAJECTORY_COMPLETE'.
/**
  * Robot is gazing at the target at the end of the trajectory.
 */
enum
{
  bosdyn_msgs__msg__GazeCommandFeedbackStatus__STATUS_TRAJECTORY_COMPLETE = 1
};

/// Constant 'STATUS_IN_PROGRESS'.
/**
  * Robot is re-configuring arm to gaze at the target.
 */
enum
{
  bosdyn_msgs__msg__GazeCommandFeedbackStatus__STATUS_IN_PROGRESS = 2
};

/// Constant 'STATUS_TOOL_TRAJECTORY_STALLED'.
/**
  * The arm has stopped making progress to the goal pose for the tool.
  * Note, this does not cancel the trajectory. For example, if the requested goal is too
  * far away, walking the base robot closer to the goal will cause the arm to continue
  * along the trajectory once it can continue.
 */
enum
{
  bosdyn_msgs__msg__GazeCommandFeedbackStatus__STATUS_TOOL_TRAJECTORY_STALLED = 3
};

/// Struct defined in msg/GazeCommandFeedbackStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__GazeCommandFeedbackStatus
{
  int8_t value;
} bosdyn_msgs__msg__GazeCommandFeedbackStatus;

// Struct for a sequence of bosdyn_msgs__msg__GazeCommandFeedbackStatus.
typedef struct bosdyn_msgs__msg__GazeCommandFeedbackStatus__Sequence
{
  bosdyn_msgs__msg__GazeCommandFeedbackStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__GazeCommandFeedbackStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_FEEDBACK_STATUS__STRUCT_H_
