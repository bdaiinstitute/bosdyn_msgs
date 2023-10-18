// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamAlignmentAlignmentOneOfReference.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT_ONE_OF_REFERENCE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT_ONE_OF_REFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REFERENCE_NOT_SET'.
enum
{
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignmentOneOfReference__REFERENCE_NOT_SET = 0
};

/// Constant 'REFERENCE_SCENE_OBJECT_ID_SET'.
enum
{
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignmentOneOfReference__REFERENCE_SCENE_OBJECT_ID_SET = 1
};

// Include directives for member types
// Member 'scene_object_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ActionWrapperSpotCamAlignmentAlignmentOneOfReference in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignmentOneOfReference
{
  /// ONEOF MESSAGE  Only one of the following can be set
  rosidl_runtime_c__String scene_object_id;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t reference_choice;
} bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignmentOneOfReference;

// Struct for a sequence of bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignmentOneOfReference.
typedef struct bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignmentOneOfReference__Sequence
{
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignmentOneOfReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignmentOneOfReference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT_ONE_OF_REFERENCE__STRUCT_H_
