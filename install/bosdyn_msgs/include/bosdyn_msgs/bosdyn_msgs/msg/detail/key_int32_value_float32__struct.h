// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/KeyInt32ValueFloat32.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_INT32_VALUE_FLOAT32__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_INT32_VALUE_FLOAT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/KeyInt32ValueFloat32 in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__KeyInt32ValueFloat32
{
  int32_t key;
  float value;
} bosdyn_msgs__msg__KeyInt32ValueFloat32;

// Struct for a sequence of bosdyn_msgs__msg__KeyInt32ValueFloat32.
typedef struct bosdyn_msgs__msg__KeyInt32ValueFloat32__Sequence
{
  bosdyn_msgs__msg__KeyInt32ValueFloat32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__KeyInt32ValueFloat32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_INT32_VALUE_FLOAT32__STRUCT_H_
