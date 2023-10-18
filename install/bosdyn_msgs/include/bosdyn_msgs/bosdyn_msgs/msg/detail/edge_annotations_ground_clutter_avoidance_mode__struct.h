// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/EdgeAnnotationsGroundClutterAvoidanceMode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS_GROUND_CLUTTER_AVOIDANCE_MODE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS_GROUND_CLUTTER_AVOIDANCE_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GROUND_CLUTTER_UNKNOWN'.
/**
  * The mode is unset.
 */
enum
{
  bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode__GROUND_CLUTTER_UNKNOWN = 0
};

/// Constant 'GROUND_CLUTTER_OFF'.
/**
  * The mode is explicitly off.
 */
enum
{
  bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode__GROUND_CLUTTER_OFF = 1
};

/// Constant 'GROUND_CLUTTER_FROM_FOOTFALLS'.
/**
  * Enable detection of ground clutter using recorded footfalls.
  * Objects that were not stepped on during map recording are obstacles.
 */
enum
{
  bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode__GROUND_CLUTTER_FROM_FOOTFALLS = 2
};

/// Struct defined in msg/EdgeAnnotationsGroundClutterAvoidanceMode in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode
{
  int8_t value;
} bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode;

// Struct for a sequence of bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode.
typedef struct bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode__Sequence
{
  bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS_GROUND_CLUTTER_AVOIDANCE_MODE__STRUCT_H_
