// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ModifyPolicyRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.h"
// Member 'to_add'
#include "bosdyn_msgs/msg/detail/policy__struct.h"
// Member 'policy_ids_to_remove'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ModifyPolicyRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ModifyPolicyRequest
{
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  bosdyn_msgs__msg__Policy to_add;
  bool to_add_is_set;
  rosidl_runtime_c__uint64__Sequence policy_ids_to_remove;
} bosdyn_msgs__msg__ModifyPolicyRequest;

// Struct for a sequence of bosdyn_msgs__msg__ModifyPolicyRequest.
typedef struct bosdyn_msgs__msg__ModifyPolicyRequest__Sequence
{
  bosdyn_msgs__msg__ModifyPolicyRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ModifyPolicyRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_REQUEST__STRUCT_H_
