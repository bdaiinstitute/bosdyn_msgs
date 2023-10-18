// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/AssociatedMetadata.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ASSOCIATED_METADATA__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ASSOCIATED_METADATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reference_id'
#include "bosdyn_msgs/msg/detail/data_identifier__struct.h"
// Member 'metadata'
#include "bosdyn_msgs/msg/detail/metadata__struct.h"

/// Struct defined in msg/AssociatedMetadata in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__AssociatedMetadata
{
  /// This message can be stored as a DataBlob in the data buffer in order to be recognized as
  /// metadata that is associated with previously stored data.
  /// The data that this metadata refers to.
  /// The timestamp field is ignored.
  /// If only the action_id is filled out, this metadata is associated with the entire capture
  /// action.
  bosdyn_msgs__msg__DataIdentifier reference_id;
  bool reference_id_is_set;
  /// Metadata message to be stored.
  bosdyn_msgs__msg__Metadata metadata;
  bool metadata_is_set;
} bosdyn_msgs__msg__AssociatedMetadata;

// Struct for a sequence of bosdyn_msgs__msg__AssociatedMetadata.
typedef struct bosdyn_msgs__msg__AssociatedMetadata__Sequence
{
  bosdyn_msgs__msg__AssociatedMetadata * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__AssociatedMetadata__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ASSOCIATED_METADATA__STRUCT_H_
