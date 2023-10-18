// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'base_frame_name'
#include "rosidl_runtime_c/string.h"
// Member 'resolution'
#include "bosdyn_msgs/msg/detail/vec2__struct.h"
// Member 'base_tform_sensor'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'intrinsics'
#include "bosdyn_msgs/msg/detail/camera_one_of_intrinsics__struct.h"

/// Struct defined in msg/Camera in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Camera
{
  /// Identifier for the camera.
  rosidl_runtime_c__String name;
  /// Resolution of the sensor, where x = width and y = height.
  bosdyn_msgs__msg__Vec2 resolution;
  bool resolution_is_set;
  /// The frame name for the parent frame of this camera. This frame will show up in the
  /// FrameTreeSnapshot grabbed from the payload registration service.
  rosidl_runtime_c__String base_frame_name;
  /// 'base_tfrom_sensor' defines the transform from the specific camera to the named base from.
  /// DEPRECATED as of 3.0.1 in favor of 'base_tform_sensor' which follows the intended naming
  /// convention and FrameTree directionality convention of the Spot system as defined in
  /// geometry.proto.
  /// The transform from the named base frame to this specific camera
  geometry_msgs__msg__Pose base_tform_sensor;
  bool base_tform_sensor_is_set;
  /// Spherical limits are the minimum and maximum angle of the image.
  /// IE the upper left pixel is at min_angle.x, min_angle.y
  /// and the lower right pixel is at max_angle.x, max_angle.y
  /// for a full-FOV image this will be (-180, 90) and (180, -90)
  bosdyn_msgs__msg__CameraOneOfIntrinsics intrinsics;
} bosdyn_msgs__msg__Camera;

// Struct for a sequence of bosdyn_msgs__msg__Camera.
typedef struct bosdyn_msgs__msg__Camera__Sequence
{
  bosdyn_msgs__msg__Camera * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Camera__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA__STRUCT_H_
