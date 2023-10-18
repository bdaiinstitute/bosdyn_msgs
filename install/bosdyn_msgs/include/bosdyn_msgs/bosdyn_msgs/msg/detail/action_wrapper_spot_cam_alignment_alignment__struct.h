// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamAlignmentAlignment.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sensor_id'
#include "rosidl_runtime_c/string.h"
// Member 'reference'
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment_alignment_one_of_reference__struct.h"

/// Struct defined in msg/ActionWrapperSpotCamAlignmentAlignment in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment
{
  /// Camera zoom parameter
  float zoom;
  /// Sensor to use for alignment
  rosidl_runtime_c__String sensor_id;
  /// Image to use for alignment
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignmentOneOfReference reference;
  /// If true, this alignment will be skipped during playback
  bool is_skipped;
} bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment;

// Struct for a sequence of bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment.
typedef struct bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence
{
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT__STRUCT_H_
