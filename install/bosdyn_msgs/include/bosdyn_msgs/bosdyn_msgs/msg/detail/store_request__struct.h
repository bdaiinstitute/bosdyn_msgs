// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StoreRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_REQUEST__STRUCT_H_

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
// Member 'camera'
#include "bosdyn_msgs/msg/detail/camera__struct.h"
// Member 'type'
#include "bosdyn_msgs/msg/detail/logpoint_record_type__struct.h"
// Member 'tag'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StoreRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StoreRequest
{
  /// Trigger a data acquisition.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// Which camera to capture.
  bosdyn_msgs__msg__Camera camera;
  bool camera_is_set;
  /// Type of data capture to perform.
  bosdyn_msgs__msg__LogpointRecordType type;
  /// Metadata to associate with the store.
  rosidl_runtime_c__String tag;
} bosdyn_msgs__msg__StoreRequest;

// Struct for a sequence of bosdyn_msgs__msg__StoreRequest.
typedef struct bosdyn_msgs__msg__StoreRequest__Sequence
{
  bosdyn_msgs__msg__StoreRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StoreRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_REQUEST__STRUCT_H_
