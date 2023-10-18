// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SetGripperCameraParamsOneOfParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS_ONE_OF_PARAMS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS_ONE_OF_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PARAMS_NOT_SET'.
enum
{
  bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__PARAMS_NOT_SET = 0
};

/// Constant 'PARAMS_PARAMS_IN_BLACKBOARD_KEY_SET'.
enum
{
  bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__PARAMS_PARAMS_IN_BLACKBOARD_KEY_SET = 1
};

/// Constant 'PARAMS_NEW_PARAMS_SET'.
enum
{
  bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__PARAMS_NEW_PARAMS_SET = 2
};

// Include directives for member types
// Member 'params_in_blackboard_key'
#include "rosidl_runtime_c/string.h"
// Member 'new_params'
#include "bosdyn_msgs/msg/detail/gripper_camera_params__struct.h"

/// Struct defined in msg/SetGripperCameraParamsOneOfParams in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams
{
  /// ONEOF MESSAGE  Only one of the following can be set
  rosidl_runtime_c__String params_in_blackboard_key;
  bosdyn_msgs__msg__GripperCameraParams new_params;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t params_choice;
} bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams;

// Struct for a sequence of bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams.
typedef struct bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence
{
  bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS_ONE_OF_PARAMS__STRUCT_H_
