// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SetLocalizationRequestOneOfRefinement.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_ONE_OF_REFINEMENT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_ONE_OF_REFINEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REFINEMENT_NOT_SET'.
enum
{
  bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement__REFINEMENT_NOT_SET = 0
};

/// Constant 'REFINEMENT_REFINE_FIDUCIAL_RESULT_WITH_ICP_SET'.
enum
{
  bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement__REFINEMENT_REFINE_FIDUCIAL_RESULT_WITH_ICP_SET = 1
};

/// Constant 'REFINEMENT_REFINE_WITH_VISUAL_FEATURES_SET'.
enum
{
  bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement__REFINEMENT_REFINE_WITH_VISUAL_FEATURES_SET = 2
};

// Include directives for member types
// Member 'refine_with_visual_features'
#include "bosdyn_msgs/msg/detail/visual_refinement_options__struct.h"

/// Struct defined in msg/SetLocalizationRequestOneOfRefinement in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement
{
  /// ONEOF MESSAGE  Only one of the following can be set
  /// If true, and we are using fiducials during initialization, will run ICP after the fiducial
  /// was used for an initial guess.
  bool refine_fiducial_result_with_icp;
  /// Improve localization based on images from body cameras
  bosdyn_msgs__msg__VisualRefinementOptions refine_with_visual_features;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t refinement_choice;
} bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement;

// Struct for a sequence of bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement.
typedef struct bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement__Sequence
{
  bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_ONE_OF_REFINEMENT__STRUCT_H_
