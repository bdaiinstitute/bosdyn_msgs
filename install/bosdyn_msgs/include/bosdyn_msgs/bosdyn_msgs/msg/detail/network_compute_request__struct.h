// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/NetworkComputeRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_REQUEST__STRUCT_H_

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
// Member 'input'
#include "bosdyn_msgs/msg/detail/network_compute_request_one_of_input__struct.h"
// Member 'server_config'
#include "bosdyn_msgs/msg/detail/network_compute_server_configuration__struct.h"

/// Struct defined in msg/NetworkComputeRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__NetworkComputeRequest
{
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// There are two forms of input for NetworkComputeRequest.
  ///
  ///   Input             | Worker has NetworkCompute | Worker has WorkerCompute | Result
  ///   ------------------+---------------------------+--------------------------+-------
  ///   input_data        | True                      | True                     | 1
  ///   input_data        | True                      | False                    | 2
  ///   input_data        | False                     | True                     | 3
  ///   input_data_bridge | True                      | True                     | 4
  ///   input_data_bridge | True                      | False                    | 5
  ///   input_data_bridge | False                     | True                     | 6
  ///   -------------+--------------------------------+--------------------------+-------
  ///
  /// Notes: If the client specifies the old deprecated input_data field, the NetworkComputeBridge
  /// will responds with the older output format.  This is because the NetworkComputeBridge does
  /// not know if the client can handle the new output format.
  ///
  /// 1. NetworkComputeBridge will call the worker's deprecated [NetworkCompute] RPC, and use
  ///    deprecated output fields.
  /// 2. NetworkComputeBridge will call the worker's deprecated [NetworkCompute] RPC, and use
  ///    deprecated output fields.
  /// 3. Returns an RPC error.  This row represents older clients talking to newer workers.
  ///    Upgrade the client in this cast.
  /// 4. NetworkComputeBridge will call the [WorkerCompute] RPC, and use the new output fields.
  /// 5. NetworkComputeBridge will call the [WorkerCompute] RPC which will return an Unimplemented
  ///    error.  The NetworkComputeBridge will then silently gobble up that error, call the
  ///    worker's old deprecated [NetworkCompute] RPC, and convert the output of that RPC to the
  ///    new format.
  /// 6. NetworkComputeBridge will call the [WorkerCompute] RPC, and use the new output fields.
  bosdyn_msgs__msg__NetworkComputeRequestOneOfInput input;
  /// Configuration about which server to use.
  bosdyn_msgs__msg__NetworkComputeServerConfiguration server_config;
  bool server_config_is_set;
} bosdyn_msgs__msg__NetworkComputeRequest;

// Struct for a sequence of bosdyn_msgs__msg__NetworkComputeRequest.
typedef struct bosdyn_msgs__msg__NetworkComputeRequest__Sequence
{
  bosdyn_msgs__msg__NetworkComputeRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__NetworkComputeRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_REQUEST__STRUCT_H_
