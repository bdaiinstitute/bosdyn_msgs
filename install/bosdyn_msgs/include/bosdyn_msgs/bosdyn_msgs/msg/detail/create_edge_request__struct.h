// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/CreateEdgeRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_REQUEST__STRUCT_H_

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
// Member 'edge'
#include "bosdyn_msgs/msg/detail/edge__struct.h"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__struct.h"

/// Struct defined in msg/CreateEdgeRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__CreateEdgeRequest
{
  /// The CreateEdge request message specifies an edge to create between two existing waypoints.
  /// The edge must not already exist in the map. This can be used to close a loop or to add any
  /// additional edges.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// Create an edge between two existing waypoints in the map with
  /// the given parameters.
  bosdyn_msgs__msg__Edge edge;
  bool edge_is_set;
  /// The recording service is protected by a lease. The client must have a
  /// lease to the recording service to modify its internal state.
  bosdyn_msgs__msg__Lease lease;
  bool lease_is_set;
} bosdyn_msgs__msg__CreateEdgeRequest;

// Struct for a sequence of bosdyn_msgs__msg__CreateEdgeRequest.
typedef struct bosdyn_msgs__msg__CreateEdgeRequest__Sequence
{
  bosdyn_msgs__msg__CreateEdgeRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__CreateEdgeRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_REQUEST__STRUCT_H_
