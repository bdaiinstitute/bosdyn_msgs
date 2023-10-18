// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/MobilityCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FEEDBACK_NOT_SET'.
enum
{
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__FEEDBACK_NOT_SET = 0
};

/// Constant 'FEEDBACK_SE2_TRAJECTORY_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__FEEDBACK_SE2_TRAJECTORY_FEEDBACK_SET = 1
};

/// Constant 'FEEDBACK_SE2_VELOCITY_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__FEEDBACK_SE2_VELOCITY_FEEDBACK_SET = 2
};

/// Constant 'FEEDBACK_SIT_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__FEEDBACK_SIT_FEEDBACK_SET = 3
};

/// Constant 'FEEDBACK_STAND_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__FEEDBACK_STAND_FEEDBACK_SET = 4
};

/// Constant 'FEEDBACK_STANCE_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__FEEDBACK_STANCE_FEEDBACK_SET = 5
};

/// Constant 'FEEDBACK_STOP_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__FEEDBACK_STOP_FEEDBACK_SET = 6
};

/// Constant 'FEEDBACK_FOLLOW_ARM_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__FEEDBACK_FOLLOW_ARM_FEEDBACK_SET = 7
};

// Include directives for member types
// Member 'se2_trajectory_feedback'
#include "bosdyn_msgs/msg/detail/se2_trajectory_command_feedback__struct.h"
// Member 'se2_velocity_feedback'
#include "bosdyn_msgs/msg/detail/se2_velocity_command_feedback__struct.h"
// Member 'sit_feedback'
#include "bosdyn_msgs/msg/detail/sit_command_feedback__struct.h"
// Member 'stand_feedback'
#include "bosdyn_msgs/msg/detail/stand_command_feedback__struct.h"
// Member 'stance_feedback'
#include "bosdyn_msgs/msg/detail/stance_command_feedback__struct.h"
// Member 'stop_feedback'
#include "bosdyn_msgs/msg/detail/stop_command_feedback__struct.h"
// Member 'follow_arm_feedback'
#include "bosdyn_msgs/msg/detail/follow_arm_command_feedback__struct.h"

/// Struct defined in msg/MobilityCommandFeedbackOneOfFeedback in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback
{
  /// ONEOF MESSAGE  Only one of the following can be set
  /// Feedback for the trajectory command.
  bosdyn_msgs__msg__SE2TrajectoryCommandFeedback se2_trajectory_feedback;
  /// Feedback for the velocity command.
  bosdyn_msgs__msg__SE2VelocityCommandFeedback se2_velocity_feedback;
  /// Feedback for the sit command.
  bosdyn_msgs__msg__SitCommandFeedback sit_feedback;
  /// Feedback for the stand command.
  bosdyn_msgs__msg__StandCommandFeedback stand_feedback;
  bosdyn_msgs__msg__StanceCommandFeedback stance_feedback;
  bosdyn_msgs__msg__StopCommandFeedback stop_feedback;
  bosdyn_msgs__msg__FollowArmCommandFeedback follow_arm_feedback;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t feedback_choice;
} bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback;

// Struct for a sequence of bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback.
typedef struct bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence
{
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_H_
