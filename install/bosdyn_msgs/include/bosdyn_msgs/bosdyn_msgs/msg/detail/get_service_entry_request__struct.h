// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/GetServiceEntryRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_SERVICE_ENTRY_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__GET_SERVICE_ENTRY_REQUEST__STRUCT_H_

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
// Member 'service_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GetServiceEntryRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__GetServiceEntryRequest
{
  /// The GetServiceEntry request message sends the service name to the robot.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// The unique user-friendly name of the service.
  rosidl_runtime_c__String service_name;
} bosdyn_msgs__msg__GetServiceEntryRequest;

// Struct for a sequence of bosdyn_msgs__msg__GetServiceEntryRequest.
typedef struct bosdyn_msgs__msg__GetServiceEntryRequest__Sequence
{
  bosdyn_msgs__msg__GetServiceEntryRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__GetServiceEntryRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_SERVICE_ENTRY_REQUEST__STRUCT_H_
