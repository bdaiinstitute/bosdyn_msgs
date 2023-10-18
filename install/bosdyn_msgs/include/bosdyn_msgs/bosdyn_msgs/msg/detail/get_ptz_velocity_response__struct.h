// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/GetPtzVelocityResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_VELOCITY_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_VELOCITY_RESPONSE__STRUCT_H_

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
// Member 'velocity'
#include "bosdyn_msgs/msg/detail/ptz_velocity__struct.h"

/// Struct defined in msg/GetPtzVelocityResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__GetPtzVelocityResponse
{
  /// Provides the current measured velocity.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Current velocity of the mechanism.
  bosdyn_msgs__msg__PtzVelocity velocity;
  bool velocity_is_set;
} bosdyn_msgs__msg__GetPtzVelocityResponse;

// Struct for a sequence of bosdyn_msgs__msg__GetPtzVelocityResponse.
typedef struct bosdyn_msgs__msg__GetPtzVelocityResponse__Sequence
{
  bosdyn_msgs__msg__GetPtzVelocityResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__GetPtzVelocityResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_VELOCITY_RESPONSE__STRUCT_H_
