// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Box3WithFrame.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOX3_WITH_FRAME__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__BOX3_WITH_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'box'
#include "bosdyn_msgs/msg/detail/box3__struct.h"
// Member 'frame_name'
#include "rosidl_runtime_c/string.h"
// Member 'frame_name_tform_box'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Box3WithFrame in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Box3WithFrame
{
  /// Geometric primitive to describe a 3D box in a specific frame.
  /// The box width (y), length (x), and height (z) are interpreted in, and the
  /// full box is fixed at an origin, where it's sides are along the coordinate
  /// frame's axes.
  bosdyn_msgs__msg__Box3 box;
  bool box_is_set;
  /// The pose of the axis-aligned box is in 'frame_name'.
  rosidl_runtime_c__String frame_name;
  /// The transformation of the axis-aligned box into the desired frame
  /// (specified above).
  geometry_msgs__msg__Pose frame_name_tform_box;
  bool frame_name_tform_box_is_set;
} bosdyn_msgs__msg__Box3WithFrame;

// Struct for a sequence of bosdyn_msgs__msg__Box3WithFrame.
typedef struct bosdyn_msgs__msg__Box3WithFrame__Sequence
{
  bosdyn_msgs__msg__Box3WithFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Box3WithFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOX3_WITH_FRAME__STRUCT_H_
