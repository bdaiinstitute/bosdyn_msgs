// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfStanceSpecification.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_STANCE_SPECIFICATION__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_STANCE_SPECIFICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STANCE_SPECIFICATION_NOT_SET'.
enum
{
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__STANCE_SPECIFICATION_NOT_SET = 0
};

/// Constant 'STANCE_SPECIFICATION_FIXED_STANCE_SET'.
enum
{
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__STANCE_SPECIFICATION_FIXED_STANCE_SET = 1
};

/// Constant 'STANCE_SPECIFICATION_ON_GROUND_PLANE_STANCE_SET'.
enum
{
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__STANCE_SPECIFICATION_ON_GROUND_PLANE_STANCE_SET = 2
};

// Include directives for member types
// Member 'fixed_stance'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_fixed_stance__struct.h"
// Member 'on_ground_plane_stance'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_on_ground_plane_stance__struct.h"

/// Struct defined in msg/InverseKinematicsRequestOneOfStanceSpecification in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification
{
  /// ONEOF MESSAGE  Only one of the following can be set
  bosdyn_msgs__msg__InverseKinematicsRequestFixedStance fixed_stance;
  bosdyn_msgs__msg__InverseKinematicsRequestOnGroundPlaneStance on_ground_plane_stance;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t stance_specification_choice;
} bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification;

// Struct for a sequence of bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification.
typedef struct bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence
{
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_STANCE_SPECIFICATION__STRUCT_H_
