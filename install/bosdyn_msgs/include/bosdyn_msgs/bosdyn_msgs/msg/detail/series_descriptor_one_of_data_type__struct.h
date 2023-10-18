// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SeriesDescriptorOneOfDataType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR_ONE_OF_DATA_TYPE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR_ONE_OF_DATA_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DATATYPE_NOT_SET'.
enum
{
  bosdyn_msgs__msg__SeriesDescriptorOneOfDataType__DATATYPE_NOT_SET = 0
};

/// Constant 'DATATYPE_MESSAGE_TYPE_SET'.
enum
{
  bosdyn_msgs__msg__SeriesDescriptorOneOfDataType__DATATYPE_MESSAGE_TYPE_SET = 1
};

/// Constant 'DATATYPE_POD_TYPE_SET'.
enum
{
  bosdyn_msgs__msg__SeriesDescriptorOneOfDataType__DATATYPE_POD_TYPE_SET = 2
};

/// Constant 'DATATYPE_STRUCT_TYPE_SET'.
enum
{
  bosdyn_msgs__msg__SeriesDescriptorOneOfDataType__DATATYPE_STRUCT_TYPE_SET = 3
};

// Include directives for member types
// Member 'message_type'
#include "bosdyn_msgs/msg/detail/message_type_descriptor__struct.h"
// Member 'pod_type'
#include "bosdyn_msgs/msg/detail/pod_type_descriptor__struct.h"
// Member 'struct_type'
#include "bosdyn_msgs/msg/detail/struct_type_descriptor__struct.h"

/// Struct defined in msg/SeriesDescriptorOneOfDataType in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SeriesDescriptorOneOfDataType
{
  /// ONEOF MESSAGE  Only one of the following can be set
  bosdyn_msgs__msg__MessageTypeDescriptor message_type;
  bosdyn_msgs__msg__PodTypeDescriptor pod_type;
  bosdyn_msgs__msg__StructTypeDescriptor struct_type;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t data_type_choice;
} bosdyn_msgs__msg__SeriesDescriptorOneOfDataType;

// Struct for a sequence of bosdyn_msgs__msg__SeriesDescriptorOneOfDataType.
typedef struct bosdyn_msgs__msg__SeriesDescriptorOneOfDataType__Sequence
{
  bosdyn_msgs__msg__SeriesDescriptorOneOfDataType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SeriesDescriptorOneOfDataType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR_ONE_OF_DATA_TYPE__STRUCT_H_
