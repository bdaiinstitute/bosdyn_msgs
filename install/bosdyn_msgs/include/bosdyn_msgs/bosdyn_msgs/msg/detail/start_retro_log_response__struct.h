// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StartRetroLogResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__START_RETRO_LOG_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__START_RETRO_LOG_RESPONSE__STRUCT_H_

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
#include "bosdyn_msgs/msg/detail/response_header__struct.h"
// Member 'status'
#include "bosdyn_msgs/msg/detail/start_retro_log_response_status__struct.h"
// Member 'log_status'
#include "bosdyn_msgs/msg/detail/log_status__struct.h"
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/StartRetroLogResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StartRetroLogResponse
{
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Response status.
  bosdyn_msgs__msg__StartRetroLogResponseStatus status;
  /// Status of the created log.
  bosdyn_msgs__msg__LogStatus log_status;
  bool log_status_is_set;
  /// Timestamp of the end of the log, in robot time.
  builtin_interfaces__msg__Time end_time;
  bool end_time_is_set;
} bosdyn_msgs__msg__StartRetroLogResponse;

// Struct for a sequence of bosdyn_msgs__msg__StartRetroLogResponse.
typedef struct bosdyn_msgs__msg__StartRetroLogResponse__Sequence
{
  bosdyn_msgs__msg__StartRetroLogResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StartRetroLogResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__START_RETRO_LOG_RESPONSE__STRUCT_H_
