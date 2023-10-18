// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/InverseKinematicsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__struct.h"
// Member 'status'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_response_status__struct.h"
// Member 'robot_configuration'
#include "bosdyn_msgs/msg/detail/kinematic_state__struct.h"

/// Struct defined in msg/InverseKinematicsResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__InverseKinematicsResponse
{
  /// Response type for InverseKinematicsRequest. If a solution was found (STATUS_OK) the
  /// robot_configuration field will contain that solution. Otherwise robot_configuration
  /// will be empty.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Return status of the request.
  bosdyn_msgs__msg__InverseKinematicsResponseStatus status;
  /// The transforms_snapshot subfield will include the root, scene, and task frames of the request
  /// as well as the body, tool, and foot frames in the solved configuration. The joint_states
  /// subfield will include the name and position for each joint in the solved configuration.
  bosdyn_msgs__msg__KinematicState robot_configuration;
  bool robot_configuration_is_set;
} bosdyn_msgs__msg__InverseKinematicsResponse;

// Struct for a sequence of bosdyn_msgs__msg__InverseKinematicsResponse.
typedef struct bosdyn_msgs__msg__InverseKinematicsResponse__Sequence
{
  bosdyn_msgs__msg__InverseKinematicsResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__InverseKinematicsResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_RESPONSE__STRUCT_H_
