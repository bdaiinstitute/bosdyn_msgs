// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StopRecordingRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STOP_RECORDING_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__STOP_RECORDING_REQUEST__STRUCT_H_

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
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__struct.h"

/// Struct defined in msg/StopRecordingRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StopRecordingRequest
{
  /// The StopRecording request message tells the robot to no longer continue adding waypoints and
  /// edges to the graph.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// The recording service is protected by a lease. The client must have a
  /// lease to the recording service to modify its internal state.
  bosdyn_msgs__msg__Lease lease;
  bool lease_is_set;
} bosdyn_msgs__msg__StopRecordingRequest;

// Struct for a sequence of bosdyn_msgs__msg__StopRecordingRequest.
typedef struct bosdyn_msgs__msg__StopRecordingRequest__Sequence
{
  bosdyn_msgs__msg__StopRecordingRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StopRecordingRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STOP_RECORDING_REQUEST__STRUCT_H_
