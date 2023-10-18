﻿// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KINEMATIC_STATE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__KINEMATIC_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_states'
#include "bosdyn_msgs/msg/detail/joint_state__struct.h"
// Member 'acquisition_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'transforms_snapshot'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__struct.h"
// Member 'velocity_of_body_in_vision'
// Member 'velocity_of_body_in_odom'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/KinematicState in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__KinematicState
{
  /// The kinematic state of the robot describes the current estimated positions of the robot body and joints throughout the world.
  /// It includes a transform snapshot of the robot’s current known frames as well as joint states and the velocity of the body.
  /// Joint state of all robot joints.
  bosdyn_msgs__msg__JointState__Sequence joint_states;
  /// Robot clock timestamp corresponding to these readings.
  builtin_interfaces__msg__Time acquisition_timestamp;
  bool acquisition_timestamp_is_set;
  /// A tree-based collection of transformations, which will include the transformations to the
  /// robot body ("body") in addition to transformations to the common frames ("world", "dr") and
  /// ground plane estimate "gpe".
  /// All transforms within the snapshot are at the acquisition time of kinematic state.
  bosdyn_msgs__msg__FrameTreeSnapshot transforms_snapshot;
  bool transforms_snapshot_is_set;
  /// Velocity of the body frame with respect to vision frame and expressed in vision frame.
  /// The linear velocity is applied at the origin of the body frame.
  geometry_msgs__msg__Twist velocity_of_body_in_vision;
  bool velocity_of_body_in_vision_is_set;
  /// Velocity of the body frame with respect to odom frame and expressed in odom frame.
  /// Again, the linear velocity is applied at the origin of the body frame.
  geometry_msgs__msg__Twist velocity_of_body_in_odom;
  bool velocity_of_body_in_odom_is_set;
} bosdyn_msgs__msg__KinematicState;

// Struct for a sequence of bosdyn_msgs__msg__KinematicState.
typedef struct bosdyn_msgs__msg__KinematicState__Sequence
{
  bosdyn_msgs__msg__KinematicState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__KinematicState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__KINEMATIC_STATE__STRUCT_H_
