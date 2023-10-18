// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SetLocalizationRequestFiducialInit.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_FIDUCIAL_INIT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_FIDUCIAL_INIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FIDUCIAL_INIT_UNKNOWN'.
/**
  * It is a programming error to use this one.
 */
enum
{
  bosdyn_msgs__msg__SetLocalizationRequestFiducialInit__FIDUCIAL_INIT_UNKNOWN = 0
};

/// Constant 'FIDUCIAL_INIT_NO_FIDUCIAL'.
/**
  * Ignore fiducials during initialization.
 */
enum
{
  bosdyn_msgs__msg__SetLocalizationRequestFiducialInit__FIDUCIAL_INIT_NO_FIDUCIAL = 1
};

/// Constant 'FIDUCIAL_INIT_NEAREST'.
/**
  * Localize to the nearest fiducial in any waypoint.
 */
enum
{
  bosdyn_msgs__msg__SetLocalizationRequestFiducialInit__FIDUCIAL_INIT_NEAREST = 2
};

/// Constant 'FIDUCIAL_INIT_NEAREST_AT_TARGET'.
/**
  * Localize to nearest fiducial at the target waypoint (from initial_guess).
 */
enum
{
  bosdyn_msgs__msg__SetLocalizationRequestFiducialInit__FIDUCIAL_INIT_NEAREST_AT_TARGET = 3
};

/// Constant 'FIDUCIAL_INIT_SPECIFIC'.
/**
  * Localize to the given fiducial at the target waypoint (from initial_guess) if it exists, or any waypoint otherwise.
 */
enum
{
  bosdyn_msgs__msg__SetLocalizationRequestFiducialInit__FIDUCIAL_INIT_SPECIFIC = 4
};

/// Struct defined in msg/SetLocalizationRequestFiducialInit in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SetLocalizationRequestFiducialInit
{
  int8_t value;
} bosdyn_msgs__msg__SetLocalizationRequestFiducialInit;

// Struct for a sequence of bosdyn_msgs__msg__SetLocalizationRequestFiducialInit.
typedef struct bosdyn_msgs__msg__SetLocalizationRequestFiducialInit__Sequence
{
  bosdyn_msgs__msg__SetLocalizationRequestFiducialInit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SetLocalizationRequestFiducialInit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_FIDUCIAL_INIT__STRUCT_H_
