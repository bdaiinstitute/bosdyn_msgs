// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/CommsStateOneOfState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE_ONE_OF_STATE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE_ONE_OF_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_NOT_SET'.
enum
{
  bosdyn_msgs__msg__CommsStateOneOfState__STATE_NOT_SET = 0
};

/// Constant 'STATE_WIFI_STATE_SET'.
enum
{
  bosdyn_msgs__msg__CommsStateOneOfState__STATE_WIFI_STATE_SET = 1
};

// Include directives for member types
// Member 'wifi_state'
#include "bosdyn_msgs/msg/detail/wi_fi_state__struct.h"

/// Struct defined in msg/CommsStateOneOfState in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__CommsStateOneOfState
{
  /// ONEOF MESSAGE  Only one of the following can be set
  /// The communication state is WiFi.
  bosdyn_msgs__msg__WiFiState wifi_state;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t state_choice;
} bosdyn_msgs__msg__CommsStateOneOfState;

// Struct for a sequence of bosdyn_msgs__msg__CommsStateOneOfState.
typedef struct bosdyn_msgs__msg__CommsStateOneOfState__Sequence
{
  bosdyn_msgs__msg__CommsStateOneOfState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__CommsStateOneOfState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE_ONE_OF_STATE__STRUCT_H_
