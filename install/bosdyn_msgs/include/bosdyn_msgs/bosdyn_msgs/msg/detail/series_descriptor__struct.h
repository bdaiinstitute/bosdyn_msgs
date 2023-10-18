// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SeriesDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'series_identifier'
#include "bosdyn_msgs/msg/detail/series_identifier__struct.h"
// Member 'data_type'
#include "bosdyn_msgs/msg/detail/series_descriptor_one_of_data_type__struct.h"
// Member 'annotations'
#include "bosdyn_msgs/msg/detail/key_string_value_string__struct.h"
// Member 'additional_index_names'
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SeriesDescriptor in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SeriesDescriptor
{
  /// A description of a series of data blocks.
  /// These data blocks may either represent binary messages of a variable size, or they may
  ///  represent a sequence of samples of POD data samples: single/vector/matrix/... of integer
  ///  or floating-point values.
  /// This index for the series is unique within the data file.
  uint32_t series_index;
  /// This is the globally unique {key -> value} mapping to identify the series.
  bosdyn_msgs__msg__SeriesIdentifier series_identifier;
  bool series_identifier_is_set;
  /// This is a hash of the series_identifier.
  /// The hash is the first 64 bits (read as a big-endian encoded uint64_t) of
  ///  SHA1(S K1 V1 K2 V2 ...) where,
  ///   - S is series identifier text,
  ///   - K1 and V1 are the key and value of the first key and value of the `spec`,
  ///   - K2 and V2 are the second key and value of the spec, etc...
  /// Here, all strings are encoded as utf-8, and keys are sorted lexicographically using this
  ///  encoding (K1 < K2 < ...).
  uint64_t identifier_hash;
  bosdyn_msgs__msg__SeriesDescriptorOneOfDataType data_type;
  /// Annotations are a {key -> value} mapping for associating additional information with
  ///  the series.
  /// The format of annotation keys should be
  ///   {project-or-organization}/{annotation-name}
  /// For example, 'bosdyn/channel-name', 'bosdyn/protobuf-type'.
  /// Annotation keys without a '/' are reserved.
  /// The only current key in the reserved namespace is 'units': e.g., {'units': 'm/s2'}.
  bosdyn_msgs__msg__KeyStringValueString__Sequence annotations;
  /// Labels for additional index values which should be attached to each DataDescriptor
  ///  in the series.
  /// See the description of "additional_indexes" in DataDescriptor.
  rosidl_runtime_c__String__Sequence additional_index_names;
  rosidl_runtime_c__String description;
} bosdyn_msgs__msg__SeriesDescriptor;

// Struct for a sequence of bosdyn_msgs__msg__SeriesDescriptor.
typedef struct bosdyn_msgs__msg__SeriesDescriptor__Sequence
{
  bosdyn_msgs__msg__SeriesDescriptor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SeriesDescriptor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR__STRUCT_H_
