// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/StringParamSpec.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/string_param_spec__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/string_param_spec__functions.h"
#include "bosdyn_msgs/msg/detail/string_param_spec__struct.h"


// Include directives for member types
// Member `options`
// Member `default_value`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__StringParamSpec_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__StringParamSpec__init(message_memory);
}

void bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__StringParamSpec_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__StringParamSpec__fini(message_memory);
}

size_t bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__size_function__StringParamSpec__options(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__get_const_function__StringParamSpec__options(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__get_function__StringParamSpec__options(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__fetch_function__StringParamSpec__options(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__get_const_function__StringParamSpec__options(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__assign_function__StringParamSpec__options(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__get_function__StringParamSpec__options(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__resize_function__StringParamSpec__options(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__StringParamSpec_message_member_array[3] = {
  {
    "options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StringParamSpec, options),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__size_function__StringParamSpec__options,  // size() function pointer
    bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__get_const_function__StringParamSpec__options,  // get_const(index) function pointer
    bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__get_function__StringParamSpec__options,  // get(index) function pointer
    bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__fetch_function__StringParamSpec__options,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__assign_function__StringParamSpec__options,  // assign(index, value) function pointer
    bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__resize_function__StringParamSpec__options  // resize(index) function pointer
  },
  {
    "editable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StringParamSpec, editable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "default_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StringParamSpec, default_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__StringParamSpec_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "StringParamSpec",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs__msg__StringParamSpec),
  bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__StringParamSpec_message_member_array,  // message members
  bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__StringParamSpec_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__StringParamSpec_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__StringParamSpec_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__StringParamSpec_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StringParamSpec)() {
  if (!bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__StringParamSpec_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__StringParamSpec_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__StringParamSpec__rosidl_typesupport_introspection_c__StringParamSpec_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
