// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/DrawablePropertiesColor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_COLOR__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DrawablePropertiesColor in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__DrawablePropertiesColor
{
  /// Red value ranging from [0,255].
  int32_t r;
  /// / Green value ranging from [0,255].
  int32_t g;
  /// Blue value ranging from [0,255].
  int32_t b;
  /// Alpha (transparency) value ranging from [0,1].
  double a;
} bosdyn_msgs__msg__DrawablePropertiesColor;

// Struct for a sequence of bosdyn_msgs__msg__DrawablePropertiesColor.
typedef struct bosdyn_msgs__msg__DrawablePropertiesColor__Sequence
{
  bosdyn_msgs__msg__DrawablePropertiesColor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__DrawablePropertiesColor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_COLOR__STRUCT_H_
