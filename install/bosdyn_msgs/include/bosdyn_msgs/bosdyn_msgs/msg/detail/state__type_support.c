// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/State.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/state__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/state__functions.h"
#include "bosdyn_msgs/msg/detail/state__struct.h"


// Include directives for member types
// Member `questions`
#include "bosdyn_msgs/msg/question.h"
// Member `questions`
#include "bosdyn_msgs/msg/detail/question__rosidl_typesupport_introspection_c.h"
// Member `answered_questions`
#include "bosdyn_msgs/msg/state_answered_question.h"
// Member `answered_questions`
#include "bosdyn_msgs/msg/detail/state_answered_question__rosidl_typesupport_introspection_c.h"
// Member `history`
#include "bosdyn_msgs/msg/state_node_states_at_tick.h"
// Member `history`
#include "bosdyn_msgs/msg/detail/state_node_states_at_tick__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/state_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/state_status__rosidl_typesupport_introspection_c.h"
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__State__init(message_memory);
}

void bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__State__fini(message_memory);
}

size_t bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__size_function__State__questions(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Question__Sequence * member =
    (const bosdyn_msgs__msg__Question__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__questions(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Question__Sequence * member =
    (const bosdyn_msgs__msg__Question__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__questions(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Question__Sequence * member =
    (bosdyn_msgs__msg__Question__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__fetch_function__State__questions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Question * item =
    ((const bosdyn_msgs__msg__Question *)
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__questions(untyped_member, index));
  bosdyn_msgs__msg__Question * value =
    (bosdyn_msgs__msg__Question *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__assign_function__State__questions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Question * item =
    ((bosdyn_msgs__msg__Question *)
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__questions(untyped_member, index));
  const bosdyn_msgs__msg__Question * value =
    (const bosdyn_msgs__msg__Question *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__resize_function__State__questions(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Question__Sequence * member =
    (bosdyn_msgs__msg__Question__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Question__Sequence__fini(member);
  return bosdyn_msgs__msg__Question__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__size_function__State__answered_questions(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__StateAnsweredQuestion__Sequence * member =
    (const bosdyn_msgs__msg__StateAnsweredQuestion__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__answered_questions(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__StateAnsweredQuestion__Sequence * member =
    (const bosdyn_msgs__msg__StateAnsweredQuestion__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__answered_questions(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__StateAnsweredQuestion__Sequence * member =
    (bosdyn_msgs__msg__StateAnsweredQuestion__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__fetch_function__State__answered_questions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__StateAnsweredQuestion * item =
    ((const bosdyn_msgs__msg__StateAnsweredQuestion *)
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__answered_questions(untyped_member, index));
  bosdyn_msgs__msg__StateAnsweredQuestion * value =
    (bosdyn_msgs__msg__StateAnsweredQuestion *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__assign_function__State__answered_questions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__StateAnsweredQuestion * item =
    ((bosdyn_msgs__msg__StateAnsweredQuestion *)
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__answered_questions(untyped_member, index));
  const bosdyn_msgs__msg__StateAnsweredQuestion * value =
    (const bosdyn_msgs__msg__StateAnsweredQuestion *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__resize_function__State__answered_questions(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__StateAnsweredQuestion__Sequence * member =
    (bosdyn_msgs__msg__StateAnsweredQuestion__Sequence *)(untyped_member);
  bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__fini(member);
  return bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__size_function__State__history(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence * member =
    (const bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__history(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence * member =
    (const bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__history(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence * member =
    (bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__fetch_function__State__history(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__StateNodeStatesAtTick * item =
    ((const bosdyn_msgs__msg__StateNodeStatesAtTick *)
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__history(untyped_member, index));
  bosdyn_msgs__msg__StateNodeStatesAtTick * value =
    (bosdyn_msgs__msg__StateNodeStatesAtTick *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__assign_function__State__history(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__StateNodeStatesAtTick * item =
    ((bosdyn_msgs__msg__StateNodeStatesAtTick *)
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__history(untyped_member, index));
  const bosdyn_msgs__msg__StateNodeStatesAtTick * value =
    (const bosdyn_msgs__msg__StateNodeStatesAtTick *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__resize_function__State__history(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence * member =
    (bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence *)(untyped_member);
  bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__fini(member);
  return bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array[7] = {
  {
    "questions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__State, questions),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__size_function__State__questions,  // size() function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__questions,  // get_const(index) function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__questions,  // get(index) function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__fetch_function__State__questions,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__assign_function__State__questions,  // assign(index, value) function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__resize_function__State__questions  // resize(index) function pointer
  },
  {
    "answered_questions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__State, answered_questions),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__size_function__State__answered_questions,  // size() function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__answered_questions,  // get_const(index) function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__answered_questions,  // get(index) function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__fetch_function__State__answered_questions,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__assign_function__State__answered_questions,  // assign(index, value) function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__resize_function__State__answered_questions  // resize(index) function pointer
  },
  {
    "history",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__State, history),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__size_function__State__history,  // size() function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__history,  // get_const(index) function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__history,  // get(index) function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__fetch_function__State__history,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__assign_function__State__history,  // assign(index, value) function pointer
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__resize_function__State__history  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__State, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__State, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tick_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__State, tick_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__State, mission_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "State",  // message name
  7,  // number of fields
  sizeof(bosdyn_msgs__msg__State),
  bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array,  // message members
  bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, State)() {
  bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Question)();
  bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StateAnsweredQuestion)();
  bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StateNodeStatesAtTick)();
  bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StateStatus)();
  if (!bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
