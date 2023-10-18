// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/GetRecordStatusResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_RECORD_STATUS_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__GET_RECORD_STATUS_RESPONSE__STRUCT_H_

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
// Member 'recording_environment'
#include "bosdyn_msgs/msg/detail/recording_environment__struct.h"
// Member 'map_state'
#include "bosdyn_msgs/msg/detail/get_record_status_response_map_state__struct.h"
// Member 'status'
#include "bosdyn_msgs/msg/detail/get_record_status_response_status__struct.h"
// Member 'impaired_state'
#include "bosdyn_msgs/msg/detail/robot_impaired_state__struct.h"
// Member 'session_start_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'map_stats'
#include "bosdyn_msgs/msg/detail/map_stats__struct.h"

/// Struct defined in msg/GetRecordStatusResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__GetRecordStatusResponse
{
  /// The GetRecordStatus response message returns whether the service is currently recording and what
  /// the persistent recording environment is at the time the request was recieved.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// If true, the record service is actively recording
  /// a chain.
  bool is_recording;
  /// The current persistent recording environment.
  bosdyn_msgs__msg__RecordingEnvironment recording_environment;
  bool recording_environment_is_set;
  bosdyn_msgs__msg__GetRecordStatusResponseMapState map_state;
  bosdyn_msgs__msg__GetRecordStatusResponseStatus status;
  /// If the status is ROBOT_IMPAIRED, this is why the robot is impaired.
  bosdyn_msgs__msg__RobotImpairedState impaired_state;
  bool impaired_state_is_set;
  /// This is the robot local timestamp that graph_nav began recording on.
  /// If the Start Recording Request's session start time is provided, this should
  /// be the same as the request's session start time.
  builtin_interfaces__msg__Time session_start_time;
  bool session_start_time_is_set;
  /// General statistics of the map loaded in GraphNav.
  bosdyn_msgs__msg__MapStats map_stats;
  bool map_stats_is_set;
} bosdyn_msgs__msg__GetRecordStatusResponse;

// Struct for a sequence of bosdyn_msgs__msg__GetRecordStatusResponse.
typedef struct bosdyn_msgs__msg__GetRecordStatusResponse__Sequence
{
  bosdyn_msgs__msg__GetRecordStatusResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__GetRecordStatusResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_RECORD_STATUS_RESPONSE__STRUCT_H_
