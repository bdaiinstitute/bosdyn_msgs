// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StopMissionResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STOP_MISSION_RESPONSE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__STOP_MISSION_RESPONSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
/**
  * Invalid status, do not use.
 */
enum
{
  bosdyn_msgs__msg__StopMissionResponseStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_OK'.
/**
  * Mission is stopped/complete.
  * The mission state may be in any of the "complete states", e.g. if the mission completed
  * successfully before this RPC took effect, the mission will report STATUS_SUCCESS and not
  * STATUS_STOPPED.
 */
enum
{
  bosdyn_msgs__msg__StopMissionResponseStatus__STATUS_OK = 1
};

/// Constant 'STATUS_NO_MISSION_PLAYING'.
/**
  * No mission has started playing.
  * NOT returned if the mission is already stopped. In that case, you will get STATUS_OK.
 */
enum
{
  bosdyn_msgs__msg__StopMissionResponseStatus__STATUS_NO_MISSION_PLAYING = 2
};

/// Struct defined in msg/StopMissionResponseStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StopMissionResponseStatus
{
  int8_t value;
} bosdyn_msgs__msg__StopMissionResponseStatus;

// Struct for a sequence of bosdyn_msgs__msg__StopMissionResponseStatus.
typedef struct bosdyn_msgs__msg__StopMissionResponseStatus__Sequence
{
  bosdyn_msgs__msg__StopMissionResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StopMissionResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STOP_MISSION_RESPONSE_STATUS__STRUCT_H_
