// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/Staircase.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/staircase__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/staircase__functions.h"
#include "bosdyn_msgs/msg/detail/staircase__struct.h"


// Include directives for member types
// Member `knowledge_type`
#include "bosdyn_msgs/msg/staircase_knowledge_type.h"
// Member `knowledge_type`
#include "bosdyn_msgs/msg/detail/staircase_knowledge_type__rosidl_typesupport_introspection_c.h"
// Member `stair_tform`
#include "bosdyn_msgs/msg/stair_transform.h"
// Member `stair_tform`
#include "bosdyn_msgs/msg/detail/stair_transform__rosidl_typesupport_introspection_c.h"
// Member `average_width`
#include "bosdyn_msgs/msg/staircase_width.h"
// Member `average_width`
#include "bosdyn_msgs/msg/detail/staircase_width__rosidl_typesupport_introspection_c.h"
// Member `steps`
#include "bosdyn_msgs/msg/staircase_step.h"
// Member `steps`
#include "bosdyn_msgs/msg/detail/staircase_step__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__Staircase__init(message_memory);
}

void bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__Staircase__fini(message_memory);
}

size_t bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__size_function__Staircase__steps(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__StaircaseStep__Sequence * member =
    (const bosdyn_msgs__msg__StaircaseStep__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__get_const_function__Staircase__steps(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__StaircaseStep__Sequence * member =
    (const bosdyn_msgs__msg__StaircaseStep__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__get_function__Staircase__steps(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__StaircaseStep__Sequence * member =
    (bosdyn_msgs__msg__StaircaseStep__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__fetch_function__Staircase__steps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__StaircaseStep * item =
    ((const bosdyn_msgs__msg__StaircaseStep *)
    bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__get_const_function__Staircase__steps(untyped_member, index));
  bosdyn_msgs__msg__StaircaseStep * value =
    (bosdyn_msgs__msg__StaircaseStep *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__assign_function__Staircase__steps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__StaircaseStep * item =
    ((bosdyn_msgs__msg__StaircaseStep *)
    bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__get_function__Staircase__steps(untyped_member, index));
  const bosdyn_msgs__msg__StaircaseStep * value =
    (const bosdyn_msgs__msg__StaircaseStep *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__resize_function__Staircase__steps(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__StaircaseStep__Sequence * member =
    (bosdyn_msgs__msg__StaircaseStep__Sequence *)(untyped_member);
  bosdyn_msgs__msg__StaircaseStep__Sequence__fini(member);
  return bosdyn_msgs__msg__StaircaseStep__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_message_member_array[9] = {
  {
    "knowledge_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Staircase, knowledge_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stair_tform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Staircase, stair_tform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stair_tform_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Staircase, stair_tform_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_steps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Staircase, number_of_steps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "average_rise",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Staircase, average_rise),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "average_run",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Staircase, average_run),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "average_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Staircase, average_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "average_width_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Staircase, average_width_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Staircase, steps),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__size_function__Staircase__steps,  // size() function pointer
    bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__get_const_function__Staircase__steps,  // get_const(index) function pointer
    bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__get_function__Staircase__steps,  // get(index) function pointer
    bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__fetch_function__Staircase__steps,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__assign_function__Staircase__steps,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__resize_function__Staircase__steps  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "Staircase",  // message name
  9,  // number of fields
  sizeof(bosdyn_msgs__msg__Staircase),
  bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_message_member_array,  // message members
  bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Staircase)() {
  bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StaircaseKnowledgeType)();
  bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StairTransform)();
  bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StaircaseWidth)();
  bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StaircaseStep)();
  if (!bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__Staircase__rosidl_typesupport_introspection_c__Staircase_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
