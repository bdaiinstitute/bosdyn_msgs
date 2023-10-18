// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SetIrMeterOverlayRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_IR_METER_OVERLAY_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SET_IR_METER_OVERLAY_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.h"
// Member 'overlay'
#include "bosdyn_msgs/msg/detail/ir_meter_overlay__struct.h"

/// Struct defined in msg/SetIrMeterOverlayRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SetIrMeterOverlayRequest
{
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  bosdyn_msgs__msg__IrMeterOverlay overlay;
  bool overlay_is_set;
} bosdyn_msgs__msg__SetIrMeterOverlayRequest;

// Struct for a sequence of bosdyn_msgs__msg__SetIrMeterOverlayRequest.
typedef struct bosdyn_msgs__msg__SetIrMeterOverlayRequest__Sequence
{
  bosdyn_msgs__msg__SetIrMeterOverlayRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SetIrMeterOverlayRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_IR_METER_OVERLAY_REQUEST__STRUCT_H_
