// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ModifyNavigationResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MODIFY_NAVIGATION_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__MODIFY_NAVIGATION_RESPONSE__STRUCT_H_

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
#include "bosdyn_msgs/msg/detail/response_header__struct.h"
// Member 'lease_use_results'
#include "bosdyn_msgs/msg/detail/lease_use_result__struct.h"
// Member 'status'
#include "bosdyn_msgs/msg/detail/modify_navigation_response_status__struct.h"

/// Struct defined in msg/ModifyNavigationResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ModifyNavigationResponse
{
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Results of using the various leases.
  bosdyn_msgs__msg__LeaseUseResult__Sequence lease_use_results;
  /// Status code specific to the ModifyNavigationResponse.
  bosdyn_msgs__msg__ModifyNavigationResponseStatus status;
} bosdyn_msgs__msg__ModifyNavigationResponse;

// Struct for a sequence of bosdyn_msgs__msg__ModifyNavigationResponse.
typedef struct bosdyn_msgs__msg__ModifyNavigationResponse__Sequence
{
  bosdyn_msgs__msg__ModifyNavigationResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ModifyNavigationResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__MODIFY_NAVIGATION_RESPONSE__STRUCT_H_
