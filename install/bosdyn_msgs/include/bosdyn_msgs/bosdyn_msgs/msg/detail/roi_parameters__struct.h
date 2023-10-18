// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RoiParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'roi_percentage_in_image'
#include "bosdyn_msgs/msg/detail/vec2__struct.h"
// Member 'window_size'
#include "bosdyn_msgs/msg/detail/roi_parameters_roi_window_size__struct.h"

/// Struct defined in msg/RoiParameters in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RoiParameters
{
  /// Region of interest (ROI) indicates the region within the image that should be used for
  /// determination of automatic focus or exposure.
  /// Center point of the ROI in the image. The upper lefthand corner of the image is (0, 0) and
  /// the lower righthand corner is (1, 1). The middle of the image is (0.5, 0.5).
  bosdyn_msgs__msg__Vec2 roi_percentage_in_image;
  bool roi_percentage_in_image_is_set;
  /// Size of the region of interest.
  bosdyn_msgs__msg__RoiParametersRoiWindowSize window_size;
} bosdyn_msgs__msg__RoiParameters;

// Struct for a sequence of bosdyn_msgs__msg__RoiParameters.
typedef struct bosdyn_msgs__msg__RoiParameters__Sequence
{
  bosdyn_msgs__msg__RoiParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RoiParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS__STRUCT_H_
