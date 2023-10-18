// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ArmSurfaceContactRequestAxisMode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST_AXIS_MODE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST_AXIS_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AXIS_MODE_POSITION'.
enum
{
  bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__AXIS_MODE_POSITION = 0
};

/// Struct defined in msg/ArmSurfaceContactRequestAxisMode in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode
{
  int8_t value;
} bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode;

// Struct for a sequence of bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode.
typedef struct bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__Sequence
{
  bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST_AXIS_MODE__STRUCT_H_
