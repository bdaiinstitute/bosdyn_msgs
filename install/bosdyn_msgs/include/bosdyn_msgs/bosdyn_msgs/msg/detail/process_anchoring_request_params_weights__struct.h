// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParamsWeights.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_WEIGHTS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_WEIGHTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ProcessAnchoringRequestParamsWeights in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights
{
  double kinematic_odometry_weight;
  double visual_odometry_weight;
  double world_object_weight;
  double hint_weight;
  double gyroscope_weight;
  double loop_closure_weight;
} bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights;

// Struct for a sequence of bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights.
typedef struct bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence
{
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_WEIGHTS__STRUCT_H_
