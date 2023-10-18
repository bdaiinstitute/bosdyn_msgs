// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/FormatBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FORMAT_BLACKBOARD__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__FORMAT_BLACKBOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'format'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FormatBlackboard in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__FormatBlackboard
{
  /// Sets a blackboard variable to a formatted string, reading from other blackboard vars.
  /// The key of the variable that will be written.
  rosidl_runtime_c__String key;
  /// Define a format string that will be used together with the blackboard to generate
  /// string value.  Values from the blackboard will replace the keys in braces {}, i.e.
  /// {blackboard_variable_name}.  We also allow some string formatting options, namely:
  ///
  /// 1) Floating point decimal places: {float_variable:.2f}
  /// 2) TBD
  ///
  /// Select examples:
  ///
  /// Format String: "telop-{date}"
  ///    Blackboard: "date" is a blackboard variable with string value: "2021-05-13"
  ///        Output: "teleop-2021-05-13"
  ///
  /// Format String: "{date}_loop_{loop_counter}"
  ///    Blackboard: "date" is a blackboard variable with string value: "2021-05-13"
  ///    Blackboard: "loop_counter" is a blackboard variable with integer value: "3"
  ///        Output: "2021-05-13_loop_3"
  ///
  /// Format String: "battery charge is: {state.power_state.locomotion_charge_percentage.value}"
  ///    Blackboard: "state" is a protobuf message in the blackboard from a BosdynRobotState, and
  ///                the power_state submessage has a charge percentage of 30.2148320923085
  ///        Output: "battery charge is: 30.2158320923085"
  ///
  /// Format String: "battery charge is:
  /// {state.power_state.locomotion_charge_percentage.value:.2f}"
  ///    Blackboard: "state" is a protobuf message in the blackboard from a BosdynRobotState, and
  ///                the power_state submessage has a charge percentage of 30.2148320923085
  ///        Output: "battery charge is: 30.21"
  ///
  /// Format String: "the value is {x:.0f}"
  ///    Blackboard: "x" is a blackboard variable with float value: "2.71828"
  ///        Output: "the value is 3"
  rosidl_runtime_c__String format;
} bosdyn_msgs__msg__FormatBlackboard;

// Struct for a sequence of bosdyn_msgs__msg__FormatBlackboard.
typedef struct bosdyn_msgs__msg__FormatBlackboard__Sequence
{
  bosdyn_msgs__msg__FormatBlackboard * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__FormatBlackboard__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__FORMAT_BLACKBOARD__STRUCT_H_
