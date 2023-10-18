// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ArmSurfaceContactRequestOneOfJointConfiguration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST_ONE_OF_JOINT_CONFIGURATION__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST_ONE_OF_JOINT_CONFIGURATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'JOINT_CONFIGURATION_NOT_SET'.
enum
{
  bosdyn_msgs__msg__ArmSurfaceContactRequestOneOfJointConfiguration__JOINT_CONFIGURATION_NOT_SET = 0
};

/// Constant 'JOINT_CONFIGURATION_FORCE_REMAIN_NEAR_CURRENT_JOINT_CONFIGURATION_SET'.
enum
{
  bosdyn_msgs__msg__ArmSurfaceContactRequestOneOfJointConfiguration__JOINT_CONFIGURATION_FORCE_REMAIN_NEAR_CURRENT_JOINT_CONFIGURATION_SET = 1
};

/// Constant 'JOINT_CONFIGURATION_PREFERRED_JOINT_CONFIGURATION_SET'.
enum
{
  bosdyn_msgs__msg__ArmSurfaceContactRequestOneOfJointConfiguration__JOINT_CONFIGURATION_PREFERRED_JOINT_CONFIGURATION_SET = 2
};

// Include directives for member types
// Member 'preferred_joint_configuration'
#include "bosdyn_msgs/msg/detail/arm_joint_position__struct.h"

/// Struct defined in msg/ArmSurfaceContactRequestOneOfJointConfiguration in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ArmSurfaceContactRequestOneOfJointConfiguration
{
  /// ONEOF MESSAGE  Only one of the following can be set
  bool force_remain_near_current_joint_configuration;
  bosdyn_msgs__msg__ArmJointPosition preferred_joint_configuration;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t joint_configuration_choice;
} bosdyn_msgs__msg__ArmSurfaceContactRequestOneOfJointConfiguration;

// Struct for a sequence of bosdyn_msgs__msg__ArmSurfaceContactRequestOneOfJointConfiguration.
typedef struct bosdyn_msgs__msg__ArmSurfaceContactRequestOneOfJointConfiguration__Sequence
{
  bosdyn_msgs__msg__ArmSurfaceContactRequestOneOfJointConfiguration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ArmSurfaceContactRequestOneOfJointConfiguration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST_ONE_OF_JOINT_CONFIGURATION__STRUCT_H_
