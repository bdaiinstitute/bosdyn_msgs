// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StreamParamsOneOfExposure.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_ONE_OF_EXPOSURE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_ONE_OF_EXPOSURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EXPOSURE_NOT_SET'.
enum
{
  bosdyn_msgs__msg__StreamParamsOneOfExposure__EXPOSURE_NOT_SET = 0
};

/// Constant 'EXPOSURE_AUTO_EXPOSURE_SET'.
enum
{
  bosdyn_msgs__msg__StreamParamsOneOfExposure__EXPOSURE_AUTO_EXPOSURE_SET = 1
};

/// Constant 'EXPOSURE_SYNC_EXPOSURE_SET'.
enum
{
  bosdyn_msgs__msg__StreamParamsOneOfExposure__EXPOSURE_SYNC_EXPOSURE_SET = 2
};

/// Constant 'EXPOSURE_MANUAL_EXPOSURE_SET'.
enum
{
  bosdyn_msgs__msg__StreamParamsOneOfExposure__EXPOSURE_MANUAL_EXPOSURE_SET = 3
};

// Include directives for member types
// Member 'auto_exposure'
#include "bosdyn_msgs/msg/detail/stream_params_auto_exposure__struct.h"
// Member 'sync_exposure'
#include "bosdyn_msgs/msg/detail/stream_params_sync_auto_exposure__struct.h"
// Member 'manual_exposure'
#include "bosdyn_msgs/msg/detail/stream_params_manual_exposure__struct.h"

/// Struct defined in msg/StreamParamsOneOfExposure in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StreamParamsOneOfExposure
{
  /// ONEOF MESSAGE  Only one of the following can be set
  /// the AutoExposure option runs exposure independently on each of the ring cameras
  bosdyn_msgs__msg__StreamParamsAutoExposure auto_exposure;
  /// the SyncAutoExposure option runs a single autoexposure algorithm that takes into
  /// account data from all ring cameras
  bosdyn_msgs__msg__StreamParamsSyncAutoExposure sync_exposure;
  /// manual exposure sets an exposure for all ring cameras.
  bosdyn_msgs__msg__StreamParamsManualExposure manual_exposure;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t exposure_choice;
} bosdyn_msgs__msg__StreamParamsOneOfExposure;

// Struct for a sequence of bosdyn_msgs__msg__StreamParamsOneOfExposure.
typedef struct bosdyn_msgs__msg__StreamParamsOneOfExposure__Sequence
{
  bosdyn_msgs__msg__StreamParamsOneOfExposure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StreamParamsOneOfExposure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_ONE_OF_EXPOSURE__STRUCT_H_
