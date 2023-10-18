// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/TimeSyncRoundTrip.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ROUND_TRIP__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ROUND_TRIP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'client_tx'
// Member 'server_rx'
// Member 'server_tx'
// Member 'client_rx'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/TimeSyncRoundTrip in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__TimeSyncRoundTrip
{
  /// Timestamp information from a full GRPC call round-trip.
  /// These are used to estimate the round-trip communication time and difference between
  /// client and server clocks.
  /// Client system time when the message was sent, if not zero.
  builtin_interfaces__msg__Time client_tx;
  bool client_tx_is_set;
  /// Server system time when the message was received, if not zero.
  builtin_interfaces__msg__Time server_rx;
  bool server_rx_is_set;
  /// Server system time when the response was sent, if not zero.
  builtin_interfaces__msg__Time server_tx;
  bool server_tx_is_set;
  /// Client time when the response was received, if not zero.
  builtin_interfaces__msg__Time client_rx;
  bool client_rx_is_set;
} bosdyn_msgs__msg__TimeSyncRoundTrip;

// Struct for a sequence of bosdyn_msgs__msg__TimeSyncRoundTrip.
typedef struct bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence
{
  bosdyn_msgs__msg__TimeSyncRoundTrip * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ROUND_TRIP__STRUCT_H_
