// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/UnregisterServiceRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UNREGISTER_SERVICE_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__UNREGISTER_SERVICE_REQUEST__STRUCT_H_

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

/// Struct defined in msg/UnregisterServiceRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__UnregisterServiceRequest
{
  /// The UnregisterService request message will unregister a service based on name.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// The unique user-friendly name of the service.
  rosidl_runtime_c__String service_name;
} bosdyn_msgs__msg__UnregisterServiceRequest;

// Struct for a sequence of bosdyn_msgs__msg__UnregisterServiceRequest.
typedef struct bosdyn_msgs__msg__UnregisterServiceRequest__Sequence
{
  bosdyn_msgs__msg__UnregisterServiceRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__UnregisterServiceRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__UNREGISTER_SERVICE_REQUEST__STRUCT_H_
