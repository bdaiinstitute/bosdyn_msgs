// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/DepthPlaneSpotCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DEPTH_PLANE_SPOT_CHECK_RESULT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__DEPTH_PLANE_SPOT_CHECK_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/depth_plane_spot_check_result_status__struct.h"

/// Struct defined in msg/DepthPlaneSpotCheckResult in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__DepthPlaneSpotCheckResult
{
  /// Results from camera check.
  /// Errors reflect an issue with camera hardware.
  /// Return status for the request.
  bosdyn_msgs__msg__DepthPlaneSpotCheckResultStatus status;
  /// Higher is worse. Above 100 means the camera is severely out of calibration.
  float severity_score;
} bosdyn_msgs__msg__DepthPlaneSpotCheckResult;

// Struct for a sequence of bosdyn_msgs__msg__DepthPlaneSpotCheckResult.
typedef struct bosdyn_msgs__msg__DepthPlaneSpotCheckResult__Sequence
{
  bosdyn_msgs__msg__DepthPlaneSpotCheckResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__DepthPlaneSpotCheckResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__DEPTH_PLANE_SPOT_CHECK_RESULT__STRUCT_H_
