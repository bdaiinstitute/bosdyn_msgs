// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SetRecordingEnvironmentRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_RECORDING_ENVIRONMENT_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SET_RECORDING_ENVIRONMENT_REQUEST__STRUCT_H_

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
// Member 'environment'
#include "bosdyn_msgs/msg/detail/recording_environment__struct.h"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__struct.h"

/// Struct defined in msg/SetRecordingEnvironmentRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SetRecordingEnvironmentRequest
{
  /// The SetRecordingEnvironment request message sets a persistent recording environment
  /// until changed with another SetRecordingEnvironment rpc.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// Persistent environment to use while recording. This allows the
  /// user to specify annotations and naming prefixes for new waypoints
  /// and edges.
  bosdyn_msgs__msg__RecordingEnvironment environment;
  bool environment_is_set;
  /// The recording service is protected by a lease. The client must have a
  /// lease to the recording service to modify its internal state.
  bosdyn_msgs__msg__Lease lease;
  bool lease_is_set;
} bosdyn_msgs__msg__SetRecordingEnvironmentRequest;

// Struct for a sequence of bosdyn_msgs__msg__SetRecordingEnvironmentRequest.
typedef struct bosdyn_msgs__msg__SetRecordingEnvironmentRequest__Sequence
{
  bosdyn_msgs__msg__SetRecordingEnvironmentRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SetRecordingEnvironmentRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_RECORDING_ENVIRONMENT_REQUEST__STRUCT_H_
