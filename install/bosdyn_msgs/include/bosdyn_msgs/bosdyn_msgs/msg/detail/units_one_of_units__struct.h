// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/UnitsOneOfUnits.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UNITS_ONE_OF_UNITS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__UNITS_ONE_OF_UNITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNITS_NOT_SET'.
enum
{
  bosdyn_msgs__msg__UnitsOneOfUnits__UNITS_NOT_SET = 0
};

/// Constant 'UNITS_NAME_SET'.
enum
{
  bosdyn_msgs__msg__UnitsOneOfUnits__UNITS_NAME_SET = 1
};

/// Constant 'UNITS_TEMP_SET'.
enum
{
  bosdyn_msgs__msg__UnitsOneOfUnits__UNITS_TEMP_SET = 2
};

/// Constant 'UNITS_PRESS_SET'.
enum
{
  bosdyn_msgs__msg__UnitsOneOfUnits__UNITS_PRESS_SET = 3
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'temp'
#include "bosdyn_msgs/msg/detail/temperature_enum__struct.h"
// Member 'press'
#include "bosdyn_msgs/msg/detail/pressure_enum__struct.h"

/// Struct defined in msg/UnitsOneOfUnits in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__UnitsOneOfUnits
{
  /// ONEOF MESSAGE  Only one of the following can be set
  /// Use this field if the desired unit is not a supported enum.
  rosidl_runtime_c__String name;
  bosdyn_msgs__msg__TemperatureEnum temp;
  bosdyn_msgs__msg__PressureEnum press;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t units_choice;
} bosdyn_msgs__msg__UnitsOneOfUnits;

// Struct for a sequence of bosdyn_msgs__msg__UnitsOneOfUnits.
typedef struct bosdyn_msgs__msg__UnitsOneOfUnits__Sequence
{
  bosdyn_msgs__msg__UnitsOneOfUnits * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__UnitsOneOfUnits__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__UNITS_ONE_OF_UNITS__STRUCT_H_
