// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/DebugRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DEBUG_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__DEBUG_REQUEST__STRUCT_H_

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

/// Struct defined in msg/DebugRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__DebugRequest
{
  /// Change debug logging settings on the SpotCam.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// Set true to enable logging of temperature data;
  bool enable_temperature;
  /// Set true to enable logging of humidity data;
  bool enable_humidity;
  /// Set true to enable logging of BIT events;
  /// BIT events are always recorded to volatile memory
  /// and can be viewed (and cleared) with the Health service,
  /// but this enables writing them to disk.
  bool enable_bit;
  /// Set true to enable logging of Shock data;
  /// this is on by default.
  bool enable_shock;
  /// Set to true to enable logging of system load stats
  /// cpu, gpu, memory, and network utilization
  bool enable_system_stat;
} bosdyn_msgs__msg__DebugRequest;

// Struct for a sequence of bosdyn_msgs__msg__DebugRequest.
typedef struct bosdyn_msgs__msg__DebugRequest__Sequence
{
  bosdyn_msgs__msg__DebugRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__DebugRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__DEBUG_REQUEST__STRUCT_H_
