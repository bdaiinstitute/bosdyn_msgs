// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/FileFormatDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_DESCRIPTOR__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_DESCRIPTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'version'
#include "bosdyn_msgs/msg/detail/file_format_version__struct.h"
// Member 'annotations'
#include "bosdyn_msgs/msg/detail/key_string_value_string__struct.h"
// Member 'checksum_type'
#include "bosdyn_msgs/msg/detail/file_format_descriptor_check_sum_type__struct.h"

/// Struct defined in msg/FileFormatDescriptor in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__FileFormatDescriptor
{
  /// The first block in the file should be a DescriptorBlock containing a FileFormatDescriptor.
  /// FileFormatDescriptor indicates the file format version and annotations.
  /// Annotations describe things like the robot from which the log was taken and the release id.
  /// The format of annotation keys should be
  ///   {project-or-organization}/{annotation-name}
  /// For example, 'bosdyn/robot-serial-number'.
  /// The version number of the BDDF file.
  bosdyn_msgs__msg__FileFormatVersion version;
  bool version_is_set;
  /// File/stream-wide annotations to describe the content of the file.
  bosdyn_msgs__msg__KeyStringValueString__Sequence annotations;
  /// The type of checksum supported by this stream.
  /// For BDDF version 1.0.0 this should be SHA1.
  bosdyn_msgs__msg__FileFormatDescriptorCheckSumType checksum_type;
  /// The number of bytes used for the BDDF checksum.
  /// For BDDF version 1.0.0 this should always be 20, even if CHECKSUM_NONE is used.
  uint32_t checksum_num_bytes;
} bosdyn_msgs__msg__FileFormatDescriptor;

// Struct for a sequence of bosdyn_msgs__msg__FileFormatDescriptor.
typedef struct bosdyn_msgs__msg__FileFormatDescriptor__Sequence
{
  bosdyn_msgs__msg__FileFormatDescriptor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__FileFormatDescriptor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_DESCRIPTOR__STRUCT_H_
