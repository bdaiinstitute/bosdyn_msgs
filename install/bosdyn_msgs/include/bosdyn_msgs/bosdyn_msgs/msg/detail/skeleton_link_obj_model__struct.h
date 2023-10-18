// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SkeletonLinkObjModel.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK_OBJ_MODEL__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK_OBJ_MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'file_name'
// Member 'file_contents'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SkeletonLinkObjModel in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SkeletonLinkObjModel
{
  /// Name of the file.
  rosidl_runtime_c__String file_name;
  /// The contents of the file.
  rosidl_runtime_c__String file_contents;
} bosdyn_msgs__msg__SkeletonLinkObjModel;

// Struct for a sequence of bosdyn_msgs__msg__SkeletonLinkObjModel.
typedef struct bosdyn_msgs__msg__SkeletonLinkObjModel__Sequence
{
  bosdyn_msgs__msg__SkeletonLinkObjModel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SkeletonLinkObjModel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK_OBJ_MODEL__STRUCT_H_
