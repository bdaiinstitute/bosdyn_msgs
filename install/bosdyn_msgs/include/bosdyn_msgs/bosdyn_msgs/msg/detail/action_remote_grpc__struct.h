// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ActionRemoteGrpc.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_REMOTE_GRPC__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_REMOTE_GRPC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'service_name'
// Member 'lease_resources'
#include "rosidl_runtime_c/string.h"
// Member 'rpc_timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'parameters'
#include "bosdyn_msgs/msg/detail/custom_param_collection__struct.h"
// Member 'record_time_images'
#include "bosdyn_msgs/msg/detail/image_capture_and_source__struct.h"

/// Struct defined in msg/ActionRemoteGrpc in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ActionRemoteGrpc
{
  /// Name of the service in the directory.
  rosidl_runtime_c__String service_name;
  /// Timeout of any single RPC. If the timeout is exceeded, the RPC will fail. The mission
  /// service treats each failed RPC differently:
  /// - EstablishSession: An error is returned in LoadMission.
  /// - Tick: The RPC is retried.
  /// - Stop: The error is ignored, and the RPC is not retried.
  /// Omit for a default of 60 seconds.
  builtin_interfaces__msg__Duration rpc_timeout;
  bool rpc_timeout_is_set;
  /// Resources that we will need leases on.
  rosidl_runtime_c__String__Sequence lease_resources;
  /// The list of variables the remote host should receive.
  /// Variables given can be available at either run-time or compile-time.
  /// The "key" in KeyValue is the name of the variable as used by the remote system.
  /// DEPRECATED as of 3.3.  Please use 'parameters' instead.
  /// All specifications and any values chosen at record time.
  bosdyn_msgs__msg__CustomParamCollection parameters;
  bool parameters_is_set;
  /// Any images taken at action creation time.  For RemoteGRPC's, this will only happen
  /// if the RemoteGRPC advertises parameters that require a region of interest for a specific
  /// camera.
  ///
  /// This data is meant to allow UI's to give users context about their actions, AND
  /// provide them a canvas to edit region of interests with after the fact.  It is
  /// not used at mission playback time.
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence record_time_images;
} bosdyn_msgs__msg__ActionRemoteGrpc;

// Struct for a sequence of bosdyn_msgs__msg__ActionRemoteGrpc.
typedef struct bosdyn_msgs__msg__ActionRemoteGrpc__Sequence
{
  bosdyn_msgs__msg__ActionRemoteGrpc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ActionRemoteGrpc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_REMOTE_GRPC__STRUCT_H_
