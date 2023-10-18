// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SpotCamResetAutofocus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_RESET_AUTOFOCUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_RESET_AUTOFOCUS__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SpotCamResetAutofocus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SpotCamResetAutofocus
{
  /// Reset the autofocus on the Spot CAM PTZ
  /// Name of the service to use.
  rosidl_runtime_c__String service_name;
  /// Host machine of the directory server that the Spot CAM registered with.
  rosidl_runtime_c__String host;
} bosdyn_msgs__msg__SpotCamResetAutofocus;

// Struct for a sequence of bosdyn_msgs__msg__SpotCamResetAutofocus.
typedef struct bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence
{
  bosdyn_msgs__msg__SpotCamResetAutofocus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_RESET_AUTOFOCUS__STRUCT_H_
