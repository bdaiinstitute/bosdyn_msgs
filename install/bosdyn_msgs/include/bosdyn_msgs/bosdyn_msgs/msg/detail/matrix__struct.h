// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Matrix.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MATRIX__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__MATRIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Matrix in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Matrix
{
  /// Represents a row-major order matrix of doubles.
  int32_t rows;
  int32_t cols;
  rosidl_runtime_c__double__Sequence values;
} bosdyn_msgs__msg__Matrix;

// Struct for a sequence of bosdyn_msgs__msg__Matrix.
typedef struct bosdyn_msgs__msg__Matrix__Sequence
{
  bosdyn_msgs__msg__Matrix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Matrix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__MATRIX__STRUCT_H_
