// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/Question.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/question__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/question__functions.h"
#include "bosdyn_msgs/msg/detail/question__struct.h"


// Include directives for member types
// Member `source`
// Member `text`
#include "rosidl_runtime_c/string_functions.h"
// Member `options`
#include "bosdyn_msgs/msg/prompt_option.h"
// Member `options`
#include "bosdyn_msgs/msg/detail/prompt_option__rosidl_typesupport_introspection_c.h"
// Member `severity`
#include "bosdyn_msgs/msg/alert_data_severity_level.h"
// Member `severity`
#include "bosdyn_msgs/msg/detail/alert_data_severity_level__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__Question__init(message_memory);
}

void bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__Question__fini(message_memory);
}

size_t bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__size_function__Question__options(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__PromptOption__Sequence * member =
    (const bosdyn_msgs__msg__PromptOption__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__get_const_function__Question__options(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__PromptOption__Sequence * member =
    (const bosdyn_msgs__msg__PromptOption__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__get_function__Question__options(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__PromptOption__Sequence * member =
    (bosdyn_msgs__msg__PromptOption__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__fetch_function__Question__options(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__PromptOption * item =
    ((const bosdyn_msgs__msg__PromptOption *)
    bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__get_const_function__Question__options(untyped_member, index));
  bosdyn_msgs__msg__PromptOption * value =
    (bosdyn_msgs__msg__PromptOption *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__assign_function__Question__options(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__PromptOption * item =
    ((bosdyn_msgs__msg__PromptOption *)
    bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__get_function__Question__options(untyped_member, index));
  const bosdyn_msgs__msg__PromptOption * value =
    (const bosdyn_msgs__msg__PromptOption *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__resize_function__Question__options(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__PromptOption__Sequence * member =
    (bosdyn_msgs__msg__PromptOption__Sequence *)(untyped_member);
  bosdyn_msgs__msg__PromptOption__Sequence__fini(member);
  return bosdyn_msgs__msg__PromptOption__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_message_member_array[6] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Question, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Question, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Question, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Question, options),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__size_function__Question__options,  // size() function pointer
    bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__get_const_function__Question__options,  // get_const(index) function pointer
    bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__get_function__Question__options,  // get(index) function pointer
    bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__fetch_function__Question__options,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__assign_function__Question__options,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__resize_function__Question__options  // resize(index) function pointer
  },
  {
    "for_autonomous_processing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Question, for_autonomous_processing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "severity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Question, severity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "Question",  // message name
  6,  // number of fields
  sizeof(bosdyn_msgs__msg__Question),
  bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_message_member_array,  // message members
  bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Question)() {
  bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PromptOption)();
  bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, AlertDataSeverityLevel)();
  if (!bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__Question__rosidl_typesupport_introspection_c__Question_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
