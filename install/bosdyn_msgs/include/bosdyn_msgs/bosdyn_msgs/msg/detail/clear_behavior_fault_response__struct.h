// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ClearBehaviorFaultResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULT_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULT_RESPONSE__STRUCT_H_

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
// Member 'lease_use_result'
#include "bosdyn_msgs/msg/detail/lease_use_result__struct.h"
// Member 'status'
#include "bosdyn_msgs/msg/detail/clear_behavior_fault_response_status__struct.h"
// Member 'behavior_fault'
#include "bosdyn_msgs/msg/detail/behavior_fault__struct.h"
// Member 'blocking_system_faults'
#include "bosdyn_msgs/msg/detail/system_fault__struct.h"

/// Struct defined in msg/ClearBehaviorFaultResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ClearBehaviorFaultResponse
{
  /// A ClearBehaviorFault response message has status indicating whether the service cleared
  /// the fault or not.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Details about how the lease was used.
  bosdyn_msgs__msg__LeaseUseResult lease_use_result;
  bool lease_use_result_is_set;
  /// Return status for a request.
  bosdyn_msgs__msg__ClearBehaviorFaultResponseStatus status;
  /// Echo back the behavior fault if it was active at the time of request.
  bosdyn_msgs__msg__BehaviorFault behavior_fault;
  bool behavior_fault_is_set;
  /// Blocking hardware faults for an unclearable behavior fault.
  bosdyn_msgs__msg__SystemFault__Sequence blocking_system_faults;
} bosdyn_msgs__msg__ClearBehaviorFaultResponse;

// Struct for a sequence of bosdyn_msgs__msg__ClearBehaviorFaultResponse.
typedef struct bosdyn_msgs__msg__ClearBehaviorFaultResponse__Sequence
{
  bosdyn_msgs__msg__ClearBehaviorFaultResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ClearBehaviorFaultResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULT_RESPONSE__STRUCT_H_
