// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/GetAudioCaptureGainResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_AUDIO_CAPTURE_GAIN_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__GET_AUDIO_CAPTURE_GAIN_RESPONSE__STRUCT_H_

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

/// Struct defined in msg/GetAudioCaptureGainResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__GetAudioCaptureGainResponse
{
  /// Result of getting the audio capture gain
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Gain for microphone, range from 0.0 to 1.0
  double gain;
} bosdyn_msgs__msg__GetAudioCaptureGainResponse;

// Struct for a sequence of bosdyn_msgs__msg__GetAudioCaptureGainResponse.
typedef struct bosdyn_msgs__msg__GetAudioCaptureGainResponse__Sequence
{
  bosdyn_msgs__msg__GetAudioCaptureGainResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__GetAudioCaptureGainResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_AUDIO_CAPTURE_GAIN_RESPONSE__STRUCT_H_
