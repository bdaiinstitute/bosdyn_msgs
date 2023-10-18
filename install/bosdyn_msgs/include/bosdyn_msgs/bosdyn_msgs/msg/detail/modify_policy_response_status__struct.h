// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ModifyPolicyResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_RESPONSE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_RESPONSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
enum
{
  bosdyn_msgs__msg__ModifyPolicyResponseStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_OK'.
/**
  * Policy was added successfully, and/or policies were removed successfully.
 */
enum
{
  bosdyn_msgs__msg__ModifyPolicyResponseStatus__STATUS_OK = 1
};

/// Constant 'STATUS_INVALID_POLICY_ID'.
/**
  * Set if any given policy ID was not valid on the system.
  * No policy will have been added.
 */
enum
{
  bosdyn_msgs__msg__ModifyPolicyResponseStatus__STATUS_INVALID_POLICY_ID = 2
};

/// Constant 'STATUS_INVALID_LEASE'.
/**
  * Set if given policy's associated_lease was not the same, super, or sub lease of the
  * active lease.
  * No policy will have been removed.
 */
enum
{
  bosdyn_msgs__msg__ModifyPolicyResponseStatus__STATUS_INVALID_LEASE = 3
};

/// Struct defined in msg/ModifyPolicyResponseStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ModifyPolicyResponseStatus
{
  int8_t value;
} bosdyn_msgs__msg__ModifyPolicyResponseStatus;

// Struct for a sequence of bosdyn_msgs__msg__ModifyPolicyResponseStatus.
typedef struct bosdyn_msgs__msg__ModifyPolicyResponseStatus__Sequence
{
  bosdyn_msgs__msg__ModifyPolicyResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ModifyPolicyResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_RESPONSE_STATUS__STRUCT_H_
