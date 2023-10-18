// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/CreateWaypointRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_REQUEST__STRUCT_H_

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
// Member 'waypoint_name'
#include "rosidl_runtime_c/string.h"
// Member 'recording_environment'
#include "bosdyn_msgs/msg/detail/recording_environment__struct.h"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__struct.h"
// Member 'require_fiducials'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'world_objects'
#include "bosdyn_msgs/msg/detail/world_object__struct.h"

/// Struct defined in msg/CreateWaypointRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__CreateWaypointRequest
{
  /// The CreateWaypoint request message specifies a name and environment the robot should
  /// use to generate a waypoint in the graph at it's current location.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// Name of the waypoint to create. Overrides any naming prefix.
  rosidl_runtime_c__String waypoint_name;
  /// This will be merged into a copy of the existing persistent recording
  /// environment and used as the environment for the created waypoint
  /// and the edge from the previous waypoint to the new one.
  /// It will not affect the persistent environment.
  bosdyn_msgs__msg__RecordingEnvironment recording_environment;
  bool recording_environment_is_set;
  /// The recording service is protected by a lease. The client must have a
  /// lease to the recording service to modify its internal state.
  bosdyn_msgs__msg__Lease lease;
  bool lease_is_set;
  /// If filled out, asks that the record service verify that the given fiducial IDs
  /// are presently visible before creating a waypoint. This is useful for verifying
  /// that the robot is where the user thinks it is in an area with known fiducials.
  rosidl_runtime_c__int32__Sequence require_fiducials;
  /// Additional world objects to insert into this waypoint.
  bosdyn_msgs__msg__WorldObject__Sequence world_objects;
} bosdyn_msgs__msg__CreateWaypointRequest;

// Struct for a sequence of bosdyn_msgs__msg__CreateWaypointRequest.
typedef struct bosdyn_msgs__msg__CreateWaypointRequest__Sequence
{
  bosdyn_msgs__msg__CreateWaypointRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__CreateWaypointRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_REQUEST__STRUCT_H_
