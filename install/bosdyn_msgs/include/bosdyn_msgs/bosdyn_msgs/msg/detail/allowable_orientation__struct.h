// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/AllowableOrientation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'constraint'
#include "bosdyn_msgs/msg/detail/allowable_orientation_one_of_constraint__struct.h"

/// Struct defined in msg/AllowableOrientation in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__AllowableOrientation
{
  /// Allowable orientation allow you to specify vectors that the different axes of the robot's
  /// gripper will be aligned with in the final grasp pose.
  ///
  /// Frame:
  ///  In stow position, +X is to the front of the gripper, pointing forward.
  ///                    +Y is out of the side of the gripper going to the robot's left
  ///                    +Z is straight up towards the sky
  ///
  /// Here, you can supply vectors that you want the gripper to be aligned with at the final grasp
  /// position.  For example, if you wanted to grasp a cup, you'd wouldn't want a top-down grasp.
  /// So you might specify:
  ///      frame_name = "vision" (so that Z is gravity aligned)
  ///       VectorAlignmentWithTolerance:
  ///          axis_to_on_gripper_ewrt_gripper = Vec3(0, 0, 1)  <--- we want to control the
  ///                                                                gripper's z-axis.
  ///
  ///          axis_to_align_with_ewrt_frame = Vec3(0, 0, 1)  <--- ...and we want that axis to be
  ///                                                                 straight up
  ///          tolerance_z = 0.52  <--- 30 degrees
  ///    This will ensure that the z-axis of the gripper is pointed within 30 degrees of vertical
  ///    so that your grasp won't be top-down (which would need the z-axis of the gripper to be
  ///    pointed at the horizon).
  ///
  /// You can also specify more than one AllowableOrientation to give the system multiple options.
  /// For example, you could specify that you're OK with either a z-up or z-down version of the cup
  /// grasp, allowing the gripper roll 180 from the stow position to grasp the cup.
  bosdyn_msgs__msg__AllowableOrientationOneOfConstraint constraint;
} bosdyn_msgs__msg__AllowableOrientation;

// Struct for a sequence of bosdyn_msgs__msg__AllowableOrientation.
typedef struct bosdyn_msgs__msg__AllowableOrientation__Sequence
{
  bosdyn_msgs__msg__AllowableOrientation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__AllowableOrientation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION__STRUCT_H_
