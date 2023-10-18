// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRAPH__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "bosdyn_msgs/msg/detail/waypoint__struct.h"
// Member 'edges'
#include "bosdyn_msgs/msg/detail/edge__struct.h"
// Member 'anchoring'
#include "bosdyn_msgs/msg/detail/anchoring__struct.h"

/// Struct defined in msg/Graph in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Graph
{
  /// This is an arbitrary collection of waypoints and edges. The edges and waypoints are not required
  /// to be connected. A waypoint may belong to multiple graphs. This message is used to pass around
  /// information about a graph's topology, and is used to serialize map topology to and from files.
  /// Note that the graph does not contain any of the waypoint/edge data (which is found in snapshots).
  /// Snapshots are stored separately.
  /// The waypoints for the graph (containing frames, annotations, and sensor data).
  bosdyn_msgs__msg__Waypoint__Sequence waypoints;
  /// The edges connecting the graph's waypoints.
  bosdyn_msgs__msg__Edge__Sequence edges;
  /// The anchoring (mapping from waypoints to their pose in a shared reference frame).
  bosdyn_msgs__msg__Anchoring anchoring;
  bool anchoring_is_set;
} bosdyn_msgs__msg__Graph;

// Struct for a sequence of bosdyn_msgs__msg__Graph.
typedef struct bosdyn_msgs__msg__Graph__Sequence
{
  bosdyn_msgs__msg__Graph * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Graph__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRAPH__STRUCT_H_
