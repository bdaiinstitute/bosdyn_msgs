// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfTaskSpecification.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TASK_SPECIFICATION__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TASK_SPECIFICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TASK_SPECIFICATION_NOT_SET'.
enum
{
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification__TASK_SPECIFICATION_NOT_SET = 0
};

/// Constant 'TASK_SPECIFICATION_TOOL_POSE_TASK_SET'.
enum
{
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification__TASK_SPECIFICATION_TOOL_POSE_TASK_SET = 1
};

/// Constant 'TASK_SPECIFICATION_TOOL_GAZE_TASK_SET'.
enum
{
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification__TASK_SPECIFICATION_TOOL_GAZE_TASK_SET = 2
};

// Include directives for member types
// Member 'tool_pose_task'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_tool_pose_task__struct.h"
// Member 'tool_gaze_task'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_tool_gaze_task__struct.h"

/// Struct defined in msg/InverseKinematicsRequestOneOfTaskSpecification in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification
{
  /// ONEOF MESSAGE  Only one of the following can be set
  /// The tool will be constrained to be at the desired pose.
  bosdyn_msgs__msg__InverseKinematicsRequestToolPoseTask tool_pose_task;
  /// The tool's x-axis will be constrained to point at a target point while the solver will
  /// prefer configurations that put the tool frame closer to the desired pose.
  bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask tool_gaze_task;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t task_specification_choice;
} bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification;

// Struct for a sequence of bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification.
typedef struct bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification__Sequence
{
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TASK_SPECIFICATION__STRUCT_H_
