// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Parameter.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PARAMETER__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PARAMETER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
// Member 'units'
// Member 'notes'
#include "rosidl_runtime_c/string.h"
// Member 'values'
#include "bosdyn_msgs/msg/detail/parameter_one_of_values__struct.h"

/// Struct defined in msg/Parameter in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Parameter
{
  /// A generic parameter message used by the robot state service to describe different,
  /// parameterized aspects of the robot.
  /// Name of parameter.
  rosidl_runtime_c__String label;
  /// Units of parameter value.
  rosidl_runtime_c__String units;
  bosdyn_msgs__msg__ParameterOneOfValues values;
  /// Description of the parameter or its value.
  rosidl_runtime_c__String notes;
} bosdyn_msgs__msg__Parameter;

// Struct for a sequence of bosdyn_msgs__msg__Parameter.
typedef struct bosdyn_msgs__msg__Parameter__Sequence
{
  bosdyn_msgs__msg__Parameter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Parameter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PARAMETER__STRUCT_H_
