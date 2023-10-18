// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/NavigationFeedbackResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
/**
  * An unknown / unexpected error occurred.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_FOLLOWING_ROUTE'.
/**
  * The robot is currently, successfully following the route.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_FOLLOWING_ROUTE = 1
};

/// Constant 'STATUS_REACHED_GOAL'.
/**
  * The robot has reached the final goal of the navigation request.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_REACHED_GOAL = 2
};

/// Constant 'STATUS_NO_ROUTE'.
/**
  * There's no route currently being navigated.
  * This can happen if no command has been issued, or if the graph has been changed during
  * navigation.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_NO_ROUTE = 3
};

/// Constant 'STATUS_NO_LOCALIZATION'.
/**
  * Robot is not localized to a route.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_NO_LOCALIZATION = 4
};

/// Constant 'STATUS_LOST'.
/**
  * Robot appears to be lost.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_LOST = 5
};

/// Constant 'STATUS_STUCK'.
/**
  * Robot appears stuck and unable to make progress, but can still navigate to other destinations.
  * stuck_reason provides more details on the reason that caused the robot to become stuck.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_STUCK = 6
};

/// Constant 'STATUS_COMMAND_TIMED_OUT'.
/**
  * The command expired.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_COMMAND_TIMED_OUT = 7
};

/// Constant 'STATUS_ROBOT_IMPAIRED'.
/**
  * Cannot navigate a route if the robot has a crtical perception fault, or behavior fault,
  * or LIDAR not working. See impared_status for details.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_ROBOT_IMPAIRED = 8
};

/// Constant 'STATUS_CONSTRAINT_FAULT'.
/**
  * The route constraints were not feasible.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_CONSTRAINT_FAULT = 9
};

/// Constant 'STATUS_COMMAND_OVERRIDDEN'.
/**
  * The command was replaced by a new command
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_COMMAND_OVERRIDDEN = 10
};

/// Constant 'STATUS_NOT_LOCALIZED_TO_ROUTE'.
/**
  * The localization or route changed mid-traverse.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_NOT_LOCALIZED_TO_ROUTE = 11
};

/// Constant 'STATUS_LEASE_ERROR'.
/**
  * The lease is no longer valid.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_LEASE_ERROR = 12
};

/// Constant 'STATUS_AREA_CALLBACK_ERROR'.
/**
  * An error occurred with an Area Callback in a way that graph nav was unable to recover
  * from. Navigating to another location may also fail.
  * Lease errors will be reported via STATUS_LEASE_ERROR instead.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__STATUS_AREA_CALLBACK_ERROR = 13
};

/// Struct defined in msg/NavigationFeedbackResponseStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__NavigationFeedbackResponseStatus
{
  int8_t value;
} bosdyn_msgs__msg__NavigationFeedbackResponseStatus;

// Struct for a sequence of bosdyn_msgs__msg__NavigationFeedbackResponseStatus.
typedef struct bosdyn_msgs__msg__NavigationFeedbackResponseStatus__Sequence
{
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__NavigationFeedbackResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_STATUS__STRUCT_H_
