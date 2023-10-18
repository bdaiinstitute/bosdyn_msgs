// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestFiducialLoopClosureParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_FIDUCIAL_LOOP_CLOSURE_PARAMS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_FIDUCIAL_LOOP_CLOSURE_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ProcessTopologyRequestFiducialLoopClosureParams in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams
{
  /// The minimum distance between waypoints found by walking a path from
  /// one waypoint to the other using only the existing edges in the map.
  /// Set this higher to avoid creating small shortcuts along the existing path.
  /// Note that this is a 2d path length.
  double min_loop_closure_path_length;
  bool min_loop_closure_path_length_is_set;
  /// Once a loop closure candidate is found, the system creates an edge between the
  /// candidate waypoints. Only create the edge if it is shorter than this value.
  /// Note that this is a 3d edge length.
  double max_loop_closure_edge_length;
  bool max_loop_closure_edge_length_is_set;
  /// Maximum distance to accept between a waypoint and a fiducial detection to
  /// use that fiducial detection for generating loop closure candidates.
  double max_fiducial_distance;
  bool max_fiducial_distance_is_set;
  /// The maximum apparent height change of the created edge that we are
  /// willing to accept between waypoints. This avoids closing loops up ramps,
  /// stairs, etc. or closing loops where there is significant odometry drift.
  double max_loop_closure_height_change;
  bool max_loop_closure_height_change_is_set;
  /// If true, redundant edges will be ignored, and only the "best" in a small area
  /// will be selected (true by default).
  bool prune_edges;
  bool prune_edges_is_set;
} bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams;

// Struct for a sequence of bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams.
typedef struct bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence
{
  bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_FIDUCIAL_LOOP_CLOSURE_PARAMS__STRUCT_H_
