// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StateAnsweredQuestion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_ANSWERED_QUESTION__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_ANSWERED_QUESTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'question'
#include "bosdyn_msgs/msg/detail/question__struct.h"

/// Struct defined in msg/StateAnsweredQuestion in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StateAnsweredQuestion
{
  /// The question that this state information is related to.
  bosdyn_msgs__msg__Question question;
  bool question_is_set;
  /// The answer that was provided.
  int64_t accepted_answer_code;
} bosdyn_msgs__msg__StateAnsweredQuestion;

// Struct for a sequence of bosdyn_msgs__msg__StateAnsweredQuestion.
typedef struct bosdyn_msgs__msg__StateAnsweredQuestion__Sequence
{
  bosdyn_msgs__msg__StateAnsweredQuestion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StateAnsweredQuestion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_ANSWERED_QUESTION__STRUCT_H_
