// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/NetworkComputeInputDataOneOfInput.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_ONE_OF_INPUT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_ONE_OF_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INPUT_NOT_SET'.
enum
{
  bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput__INPUT_NOT_SET = 0
};

/// Constant 'INPUT_IMAGE_SOURCE_AND_SERVICE_SET'.
enum
{
  bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput__INPUT_IMAGE_SOURCE_AND_SERVICE_SET = 1
};

/// Constant 'INPUT_IMAGE_SET'.
enum
{
  bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput__INPUT_IMAGE_SET = 2
};

// Include directives for member types
// Member 'image_source_and_service'
#include "bosdyn_msgs/msg/detail/image_source_and_service__struct.h"
// Member 'image'
#include "bosdyn_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/NetworkComputeInputDataOneOfInput in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput
{
  /// ONEOF MESSAGE  Only one of the following can be set
  /// Image source to collect an image from.
  bosdyn_msgs__msg__ImageSourceAndService image_source_and_service;
  /// Image to process, if you are not using an image source.
  bosdyn_msgs__msg__Image image;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t input_choice;
} bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput;

// Struct for a sequence of bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput.
typedef struct bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput__Sequence
{
  bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_ONE_OF_INPUT__STRUCT_H_
