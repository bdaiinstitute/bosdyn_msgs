// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RecordDataBlobsResponseErrorType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_DATA_BLOBS_RESPONSE_ERROR_TYPE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_DATA_BLOBS_RESPONSE_ERROR_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  bosdyn_msgs__msg__RecordDataBlobsResponseErrorType__NONE = 0
};

/// Constant 'CLIENT_ERROR'.
enum
{
  bosdyn_msgs__msg__RecordDataBlobsResponseErrorType__CLIENT_ERROR = 1
};

/// Constant 'SERVER_ERROR'.
enum
{
  bosdyn_msgs__msg__RecordDataBlobsResponseErrorType__SERVER_ERROR = 2
};

/// Struct defined in msg/RecordDataBlobsResponseErrorType in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RecordDataBlobsResponseErrorType
{
  int8_t value;
} bosdyn_msgs__msg__RecordDataBlobsResponseErrorType;

// Struct for a sequence of bosdyn_msgs__msg__RecordDataBlobsResponseErrorType.
typedef struct bosdyn_msgs__msg__RecordDataBlobsResponseErrorType__Sequence
{
  bosdyn_msgs__msg__RecordDataBlobsResponseErrorType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RecordDataBlobsResponseErrorType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_DATA_BLOBS_RESPONSE_ERROR_TYPE__STRUCT_H_
