// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ImagePixelFormat.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_PIXEL_FORMAT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_PIXEL_FORMAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PIXEL_FORMAT_UNKNOWN'.
/**
  * Unspecified value -- should not be used.
 */
enum
{
  bosdyn_msgs__msg__ImagePixelFormat__PIXEL_FORMAT_UNKNOWN = 0
};

/// Constant 'PIXEL_FORMAT_GREYSCALE_U8'.
/**
  * One byte per pixel.
 */
enum
{
  bosdyn_msgs__msg__ImagePixelFormat__PIXEL_FORMAT_GREYSCALE_U8 = 1
};

/// Constant 'PIXEL_FORMAT_RGB_U8'.
/**
  * Three bytes per pixel.
 */
enum
{
  bosdyn_msgs__msg__ImagePixelFormat__PIXEL_FORMAT_RGB_U8 = 2
};

/// Constant 'PIXEL_FORMAT_RGBA_U8'.
/**
  * Four bytes per pixel.
 */
enum
{
  bosdyn_msgs__msg__ImagePixelFormat__PIXEL_FORMAT_RGBA_U8 = 3
};

/// Constant 'PIXEL_FORMAT_DEPTH_U16'.
/**
  * Little-endian uint16 z-distance from camera (mm).
 */
enum
{
  bosdyn_msgs__msg__ImagePixelFormat__PIXEL_FORMAT_DEPTH_U16 = 4
};

/// Constant 'PIXEL_FORMAT_GREYSCALE_U16'.
/**
  * Big-endian uint16
 */
enum
{
  bosdyn_msgs__msg__ImagePixelFormat__PIXEL_FORMAT_GREYSCALE_U16 = 5
};

/// Struct defined in msg/ImagePixelFormat in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ImagePixelFormat
{
  int8_t value;
} bosdyn_msgs__msg__ImagePixelFormat;

// Struct for a sequence of bosdyn_msgs__msg__ImagePixelFormat.
typedef struct bosdyn_msgs__msg__ImagePixelFormat__Sequence
{
  bosdyn_msgs__msg__ImagePixelFormat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ImagePixelFormat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_PIXEL_FORMAT__STRUCT_H_
