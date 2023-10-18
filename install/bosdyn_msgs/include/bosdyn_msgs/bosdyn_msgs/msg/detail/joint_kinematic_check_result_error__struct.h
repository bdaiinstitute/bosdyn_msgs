// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/JointKinematicCheckResultError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT_ERROR__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ERROR_UNKNOWN'.
/**
  * Unused enum.
 */
enum
{
  bosdyn_msgs__msg__JointKinematicCheckResultError__ERROR_UNKNOWN = 0
};

/// Constant 'ERROR_NONE'.
/**
  * No hardware error detected.
 */
enum
{
  bosdyn_msgs__msg__JointKinematicCheckResultError__ERROR_NONE = 1
};

/// Constant 'ERROR_CLUTCH_SLIP'.
/**
  * Error detected in clutch performance.
 */
enum
{
  bosdyn_msgs__msg__JointKinematicCheckResultError__ERROR_CLUTCH_SLIP = 2
};

/// Constant 'ERROR_INVALID_RANGE_OF_MOTION'.
/**
  * Error if a joint has an incorrect range of motion.
 */
enum
{
  bosdyn_msgs__msg__JointKinematicCheckResultError__ERROR_INVALID_RANGE_OF_MOTION = 3
};

/// Constant 'ERROR_ENCODER_SHIFTED'.
/**
  * Error if the measured endstops shifted from kin cal.
 */
enum
{
  bosdyn_msgs__msg__JointKinematicCheckResultError__ERROR_ENCODER_SHIFTED = 4
};

/// Constant 'ERROR_COLLISION'.
/**
  * Error if checking the joint would have a collsion.
 */
enum
{
  bosdyn_msgs__msg__JointKinematicCheckResultError__ERROR_COLLISION = 5
};

/// Struct defined in msg/JointKinematicCheckResultError in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__JointKinematicCheckResultError
{
  int8_t value;
} bosdyn_msgs__msg__JointKinematicCheckResultError;

// Struct for a sequence of bosdyn_msgs__msg__JointKinematicCheckResultError.
typedef struct bosdyn_msgs__msg__JointKinematicCheckResultError__Sequence
{
  bosdyn_msgs__msg__JointKinematicCheckResultError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__JointKinematicCheckResultError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT_ERROR__STRUCT_H_
