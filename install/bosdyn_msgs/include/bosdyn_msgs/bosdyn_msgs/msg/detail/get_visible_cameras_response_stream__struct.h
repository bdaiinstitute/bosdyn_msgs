// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/GetVisibleCamerasResponseStream.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'window'
#include "bosdyn_msgs/msg/detail/get_visible_cameras_response_stream_window__struct.h"
// Member 'camera'
#include "bosdyn_msgs/msg/detail/camera__struct.h"

/// Struct defined in msg/GetVisibleCamerasResponseStream in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__GetVisibleCamerasResponseStream
{
  /// The location of a sub-image within a larger image.
  /// The location of this camera stream within the larger stream.
  bosdyn_msgs__msg__GetVisibleCamerasResponseStreamWindow window;
  bool window_is_set;
  /// The name field in this camera member is of the form 'c:w',
  /// where c is the name of the camera and w is the name of the
  /// window that's projecting it.
  bosdyn_msgs__msg__Camera camera;
  bool camera_is_set;
} bosdyn_msgs__msg__GetVisibleCamerasResponseStream;

// Struct for a sequence of bosdyn_msgs__msg__GetVisibleCamerasResponseStream.
typedef struct bosdyn_msgs__msg__GetVisibleCamerasResponseStream__Sequence
{
  bosdyn_msgs__msg__GetVisibleCamerasResponseStream * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__GetVisibleCamerasResponseStream__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM__STRUCT_H_
