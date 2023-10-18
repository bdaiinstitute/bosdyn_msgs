// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/WorldObjectAnchorHint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT_ANCHOR_HINT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT_ANCHOR_HINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_anchor'
#include "bosdyn_msgs/msg/detail/anchored_world_object__struct.h"
// Member 'seed_tform_object_uncertainty'
#include "bosdyn_msgs/msg/detail/anchor_hint_uncertainty__struct.h"
// Member 'seed_tform_object_constraint'
#include "bosdyn_msgs/msg/detail/pose_bounds__struct.h"

/// Struct defined in msg/WorldObjectAnchorHint in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__WorldObjectAnchorHint
{
  /// World objects (such as fiducials) may be anchored to a particular seed frame. The user may request that an object
  /// be anchored in a particular place with some Gaussian uncertainty.
  /// Note on gravity alignment: optimization is sensitive to bad alignment with respect to gravity. By default, the
  /// orientation of the seed frame assumes gravity is pointing in the negative z direction. Take care to ensure that
  /// the orientation of the world object is correct with respect to gravity. By convention, fiducials' orientation
  /// is defined as: Z out of the page, X up and Y left (when looking at the fiducial). So, if a fiducial is mounted
  /// perfectly flat against a wall, its orientation w.r.t the seed frame would have the top of the fiducial facing
  /// positive Z.
  /// +-----------+       z
  /// |      ^x   |       ^
  /// |      |    |       |
  /// |      |    |       |
  /// | <----+    |       |
  /// | y         |      Seed
  /// |           |
  /// +-----------+
  ///    Fiducial (on wall)
  /// This is to be interpreted as the mean of a Gaussian distribution, representing
  /// the pose of the object in the seed frame.
  bosdyn_msgs__msg__AnchoredWorldObject object_anchor;
  bool object_anchor_is_set;
  /// This is the uncertainty of the anchor's pose in the seed frame.
  /// If left empty, a reasonable default uncertainty will be generated.
  bosdyn_msgs__msg__AnchorHintUncertainty seed_tform_object_uncertainty;
  bool seed_tform_object_uncertainty_is_set;
  /// Normally, the optimizer will move the anchorings of object based on context, to minimize the
  /// overall cost of the optimization problem. By providing a constraint on pose, the user can ensure
  /// that the anchors stay within a certain region in the seed frame.
  /// Leaving this empty will allow the optimizer to move the anchoring from the hint as far as it likes.
  bosdyn_msgs__msg__PoseBounds seed_tform_object_constraint;
  bool seed_tform_object_constraint_is_set;
} bosdyn_msgs__msg__WorldObjectAnchorHint;

// Struct for a sequence of bosdyn_msgs__msg__WorldObjectAnchorHint.
typedef struct bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence
{
  bosdyn_msgs__msg__WorldObjectAnchorHint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT_ANCHOR_HINT__STRUCT_H_
