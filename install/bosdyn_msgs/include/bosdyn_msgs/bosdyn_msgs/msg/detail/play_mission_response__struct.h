// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/PlayMissionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAY_MISSION_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PLAY_MISSION_RESPONSE__STRUCT_H_

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
// Member 'status'
#include "bosdyn_msgs/msg/detail/play_mission_response_status__struct.h"
// Member 'lease_use_results'
#include "bosdyn_msgs/msg/detail/lease_use_result__struct.h"

/// Struct defined in msg/PlayMissionResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__PlayMissionResponse
{
  /// The PlayMission response message will return the status of the play mission request.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Possible results for a play request.
  /// The result of the play request.
  bosdyn_msgs__msg__PlayMissionResponseStatus status;
  /// Results from any leases that may have been provided with the play request.
  bosdyn_msgs__msg__LeaseUseResult__Sequence lease_use_results;
} bosdyn_msgs__msg__PlayMissionResponse;

// Struct for a sequence of bosdyn_msgs__msg__PlayMissionResponse.
typedef struct bosdyn_msgs__msg__PlayMissionResponse__Sequence
{
  bosdyn_msgs__msg__PlayMissionResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__PlayMissionResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAY_MISSION_RESPONSE__STRUCT_H_
