// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SignalTick.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SIGNAL_TICK__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SIGNAL_TICK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'source'
#include "rosidl_runtime_c/string.h"
// Member 'encoding'
#include "bosdyn_msgs/msg/detail/signal_tick_encoding__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SignalTick in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SignalTick
{
  /// A timestamped set of signals variable values.
  /// Successive ticks should have successive sequence_id's.
  /// The robot uses this to determine if a tick was somehow lost.
  int64_t sequence_id;
  /// Timestamp at which the variable values were sampled.
  builtin_interfaces__msg__Time timestamp;
  bool timestamp_is_set;
  /// The client name.
  /// This may be used to segregate data for the same variables to different parts of the buffer.
  rosidl_runtime_c__String source;
  /// This specifies the SignalSchema to be used in interpreting the |data| field.
  /// This value was returned by the server when the schema was registered.
  uint64_t schema_id;
  /// Format describing how the data bytes array is encoded.
  bosdyn_msgs__msg__SignalTickEncoding encoding;
  /// The encoded data representing a tick of multiple values of signal-styles data.
  rosidl_runtime_c__octet__Sequence data;
} bosdyn_msgs__msg__SignalTick;

// Struct for a sequence of bosdyn_msgs__msg__SignalTick.
typedef struct bosdyn_msgs__msg__SignalTick__Sequence
{
  bosdyn_msgs__msg__SignalTick * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SignalTick__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SIGNAL_TICK__STRUCT_H_
