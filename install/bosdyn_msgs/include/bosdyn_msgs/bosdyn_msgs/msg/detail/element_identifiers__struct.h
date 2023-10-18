// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ElementIdentifiers.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ELEMENT_IDENTIFIERS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ELEMENT_IDENTIFIERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'root_id'
// Member 'action_id'
#include "bosdyn_msgs/msg/detail/node_identifier__struct.h"

/// Struct defined in msg/ElementIdentifiers in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ElementIdentifiers
{
  /// Identifiable data for the root node of the element.
  bosdyn_msgs__msg__NodeIdentifier root_id;
  bool root_id_is_set;
  /// Identifiable data for action node of the element.
  bosdyn_msgs__msg__NodeIdentifier action_id;
  bool action_id_is_set;
} bosdyn_msgs__msg__ElementIdentifiers;

// Struct for a sequence of bosdyn_msgs__msg__ElementIdentifiers.
typedef struct bosdyn_msgs__msg__ElementIdentifiers__Sequence
{
  bosdyn_msgs__msg__ElementIdentifiers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ElementIdentifiers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ELEMENT_IDENTIFIERS__STRUCT_H_
