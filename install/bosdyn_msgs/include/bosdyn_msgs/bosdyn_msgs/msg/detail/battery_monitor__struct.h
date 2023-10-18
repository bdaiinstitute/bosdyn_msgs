// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/BatteryMonitor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BATTERY_MONITOR__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__BATTERY_MONITOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BatteryMonitor in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__BatteryMonitor
{
  /// If your mission has docks, autowalk can pause the mission to return
  /// to the dock if the battery gets too low.  Use this message to control
  /// when this behavior happens.
  /// Once charging, the robot will continue to charge until the battery
  /// level is greater than or equal to this threshold, at which point in
  /// time, the mission will start.
  float battery_start_threshold;
  /// If the battery level is less than or equal to this threshold, the
  /// robot will stop what it is currently doing and return to the dock.
  /// Once the battery level is greater than or equal to the battery start
  /// threshold, the mission will resume.
  float battery_stop_threshold;
} bosdyn_msgs__msg__BatteryMonitor;

// Struct for a sequence of bosdyn_msgs__msg__BatteryMonitor.
typedef struct bosdyn_msgs__msg__BatteryMonitor__Sequence
{
  bosdyn_msgs__msg__BatteryMonitor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__BatteryMonitor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__BATTERY_MONITOR__STRUCT_H_
