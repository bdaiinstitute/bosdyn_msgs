// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST__STRUCT_H_

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
// Member 'params'
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params__struct.h"
// Member 'initial_hint'
#include "bosdyn_msgs/msg/detail/anchoring_hint__struct.h"

/// Struct defined in msg/ProcessAnchoringRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ProcessAnchoringRequest
{
  /// Causes the server to optimize an existing anchoring, or generate a new anchoring for the map using the given parameters.
  /// In general, if parameters are not provided, reasonable defaults will be used.
  /// The new anchoring will be streamed back to the client, or modified on the server if desired.
  /// Parameters for procesing an anchoring.
  /// Standard request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  bosdyn_msgs__msg__ProcessAnchoringRequestParams params;
  bool params_is_set;
  /// Initial guess at some number of waypoints and world objects and their anchorings.
  bosdyn_msgs__msg__AnchoringHint initial_hint;
  bool initial_hint_is_set;
  /// If true, the map currently uploaded to the server will have its anchoring modified.
  /// Otherwise, the user is expected to re-upload the anchoring.
  bool modify_anchoring_on_server;
  /// If true, the anchoring will be streamed back to the user after every iteration.
  /// This is useful for debug visualization.
  bool stream_intermediate_results;
} bosdyn_msgs__msg__ProcessAnchoringRequest;

// Struct for a sequence of bosdyn_msgs__msg__ProcessAnchoringRequest.
typedef struct bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence
{
  bosdyn_msgs__msg__ProcessAnchoringRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST__STRUCT_H_
