// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ImageRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image_source_name'
#include "rosidl_runtime_c/string.h"
// Member 'image_format'
#include "bosdyn_msgs/msg/detail/image_format__struct.h"
// Member 'pixel_format'
#include "bosdyn_msgs/msg/detail/image_pixel_format__struct.h"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param__struct.h"

/// Struct defined in msg/ImageRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ImageRequest
{
  /// The image request specifying the image source and data format desired.
  /// The string name of the image source to get image data from.
  rosidl_runtime_c__String image_source_name;
  /// Image quality: a number from 0 (worst) to 100 (highest).
  /// Note that jpeg quality 100 is still lossy.
  double quality_percent;
  /// Specify the desired image encoding (e.g. JPEG, RAW). If no format is specified (e.g. FORMAT_UNKNOWN), the image
  /// service will choose the best format for the data.
  bosdyn_msgs__msg__ImageFormat image_format;
  /// Optional specification of the desired image dimensions.
  /// If the original image is 1920x1080, a resize_ratio of (2/3) will return an image with size 1280x720
  /// The range is clipped to [0.01, 1] while maintaining the original aspect ratio.
  /// For backwards compatibliity, a value of 0 means no resizing.
  /// Note: this field is not supported by the robot body cameras image service (`image`).
  double resize_ratio;
  /// Specify the desired pixel format (e.g. GREYSCALE_U8, RGB_U8). If no format is specified
  /// (e.g. PIXEL_FORMAT_UNKNOWN), the image service will choose the best format for the data.
  bosdyn_msgs__msg__ImagePixelFormat pixel_format;
  /// Parameters unique to the servicer that do not match any of the above fields.
  /// Whether or not these are valid may depend on the values of the above fields.
  bosdyn_msgs__msg__DictParam custom_params;
  bool custom_params_is_set;
} bosdyn_msgs__msg__ImageRequest;

// Struct for a sequence of bosdyn_msgs__msg__ImageRequest.
typedef struct bosdyn_msgs__msg__ImageRequest__Sequence
{
  bosdyn_msgs__msg__ImageRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ImageRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_REQUEST__STRUCT_H_
