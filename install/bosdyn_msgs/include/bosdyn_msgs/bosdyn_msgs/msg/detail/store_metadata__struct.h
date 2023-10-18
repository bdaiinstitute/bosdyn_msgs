// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StoreMetadata.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA__STRUCT_H_

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
// Member 'acquire_data_request_name'
// Member 'metadata_channel'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "bosdyn_msgs/msg/detail/store_metadata_one_of_data__struct.h"

/// Struct defined in msg/StoreMetadata in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StoreMetadata
{
  /// Triggers a StoreMetadataRequest to the data acquisition store.
  /// Name of the service to use.
  rosidl_runtime_c__String service_name;
  /// Host machine of the directory server that the data acquisition service is registered with.
  rosidl_runtime_c__String host;
  /// The name of the blackboard variable that holds the associated AcquireDataRequest. The
  /// reference ID that this metadata is associated with will be copied from the request.
  rosidl_runtime_c__String acquire_data_request_name;
  bosdyn_msgs__msg__StoreMetadataOneOfData data;
  /// The data buffer channel on which to store the metadata.
  rosidl_runtime_c__String metadata_channel;
} bosdyn_msgs__msg__StoreMetadata;

// Struct for a sequence of bosdyn_msgs__msg__StoreMetadata.
typedef struct bosdyn_msgs__msg__StoreMetadata__Sequence
{
  bosdyn_msgs__msg__StoreMetadata * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StoreMetadata__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA__STRUCT_H_
