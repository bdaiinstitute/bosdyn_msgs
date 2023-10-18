// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/DataAcquisition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION__STRUCT_H_

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
// Member 'host'
// Member 'group_name_format'
// Member 'request_name_in_blackboard'
// Member 'metadata_name_in_blackboard'
// Member 'action_name_format'
#include "rosidl_runtime_c/string.h"
// Member 'request'
#include "bosdyn_msgs/msg/detail/acquire_data_request__struct.h"
// Member 'completion_behavior'
#include "bosdyn_msgs/msg/detail/data_acquisition_completion_behavior__struct.h"

/// Struct defined in msg/DataAcquisition in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__DataAcquisition
{
  /// Trigger the acquisition and storage of data.
  /// Name of the service to use.
  rosidl_runtime_c__String service_name;
  /// Host machine of the directory server that the data acquisition service is registered with.
  rosidl_runtime_c__String host;
  /// Specification of the data and metadata to store.
  bosdyn_msgs__msg__AcquireDataRequest request;
  bool request_is_set;
  bosdyn_msgs__msg__DataAcquisitionCompletionBehavior completion_behavior;
  /// Define a format string that will be used together with the blackboard to generate
  /// a group_name.  If a value is specified in this field, it will override the group_name value
  /// specified in the CaptureActionId of the AcquireDataRequest.  Values from the blackboard will
  /// replace the keys in braces {}.
  /// Example: "telop-{date}", where "date" is a blackboard variable.
  /// Example: "{date}_loop_{loop_counter}", where "loop_counter" is a blackboard variable from a
  /// Repeat node.
  rosidl_runtime_c__String group_name_format;
  /// If populated, name of the variable in the blackboard in which to store the AcquireDataRequest
  /// after it's created, and sent to the Data Acquisition service.
  rosidl_runtime_c__String request_name_in_blackboard;
  /// The name of the metadata object in the blackboard to be stored.
  /// The metadata object can be any protobuf message.
  /// The metadata will be merged with the AcquireDataRequest's metadata field.
  rosidl_runtime_c__String metadata_name_in_blackboard;
  /// Define a format string that will be used together with the blackboard to generate
  /// an action_name.  If a value is specified in this field, it will override the action_name
  /// value specified in the CaptureActionId of the AcquireDataRequest.  Values from the blackboard
  /// will replace the keys in braces {}.
  /// Example: "element 0 attempt {loop_counter}", where "loop_counter" is a blackboard variable
  /// from a Retry.
  rosidl_runtime_c__String action_name_format;
  /// If set to false (default), this node will cancel an outgoing AcquireDataRequest when the node
  /// is paused / stopped.  When the node is resumed, it will restart the AcquireDataRequest.
  ///
  /// If set to true, this node will NOT cancel outgoing AcquireDataRequest's when the node is
  /// paused / stopped.  When the node is resumed, it will check feedback on the original outgoing
  /// AcquireDataReqeust.
  bool disable_cancel_on_pause_or_stop;
} bosdyn_msgs__msg__DataAcquisition;

// Struct for a sequence of bosdyn_msgs__msg__DataAcquisition.
typedef struct bosdyn_msgs__msg__DataAcquisition__Sequence
{
  bosdyn_msgs__msg__DataAcquisition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__DataAcquisition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION__STRUCT_H_
