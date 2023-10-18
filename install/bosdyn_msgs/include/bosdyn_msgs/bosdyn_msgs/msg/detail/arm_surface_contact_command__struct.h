// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ArmSurfaceContactCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_COMMAND__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_COMMAND__STRUCT_H_

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
#include "bosdyn_msgs/msg/detail/request_header__struct.h"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__struct.h"
// Member 'request'
#include "bosdyn_msgs/msg/detail/arm_surface_contact_request__struct.h"

/// Struct defined in msg/ArmSurfaceContactCommand in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ArmSurfaceContactCommand
{
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// The Lease to show ownership of the robot.
  bosdyn_msgs__msg__Lease lease;
  bool lease_is_set;
  bosdyn_msgs__msg__ArmSurfaceContactRequest request;
  bool request_is_set;
} bosdyn_msgs__msg__ArmSurfaceContactCommand;

// Struct for a sequence of bosdyn_msgs__msg__ArmSurfaceContactCommand.
typedef struct bosdyn_msgs__msg__ArmSurfaceContactCommand__Sequence
{
  bosdyn_msgs__msg__ArmSurfaceContactCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ArmSurfaceContactCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_COMMAND__STRUCT_H_
