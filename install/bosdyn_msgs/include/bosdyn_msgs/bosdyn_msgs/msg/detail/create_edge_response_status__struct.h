// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/CreateEdgeResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_RESPONSE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_RESPONSE_STATUS__STRUCT_H_

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
  * Status is unknown/unset.
 */
enum
{
  bosdyn_msgs__msg__CreateEdgeResponseStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_OK'.
/**
  * The edge was successfully created.
 */
enum
{
  bosdyn_msgs__msg__CreateEdgeResponseStatus__STATUS_OK = 1
};

/// Constant 'STATUS_EXISTS'.
/**
  * Edge already exists with the given ID.
 */
enum
{
  bosdyn_msgs__msg__CreateEdgeResponseStatus__STATUS_EXISTS = 2
};

/// Constant 'STATUS_NOT_RECORDING'.
/**
  * Clients can only create edges when recording.
 */
enum
{
  bosdyn_msgs__msg__CreateEdgeResponseStatus__STATUS_NOT_RECORDING = 3
};

/// Constant 'STATUS_UNKNOWN_WAYPOINT'.
/**
  * One or more of the specified waypoints aren't in the map.
 */
enum
{
  bosdyn_msgs__msg__CreateEdgeResponseStatus__STATUS_UNKNOWN_WAYPOINT = 4
};

/// Constant 'STATUS_MISSING_TRANSFORM'.
/**
  * Specified edge did not include a transform.
 */
enum
{
  bosdyn_msgs__msg__CreateEdgeResponseStatus__STATUS_MISSING_TRANSFORM = 5
};

/// Struct defined in msg/CreateEdgeResponseStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__CreateEdgeResponseStatus
{
  int8_t value;
} bosdyn_msgs__msg__CreateEdgeResponseStatus;

// Struct for a sequence of bosdyn_msgs__msg__CreateEdgeResponseStatus.
typedef struct bosdyn_msgs__msg__CreateEdgeResponseStatus__Sequence
{
  bosdyn_msgs__msg__CreateEdgeResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__CreateEdgeResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_RESPONSE_STATUS__STRUCT_H_
