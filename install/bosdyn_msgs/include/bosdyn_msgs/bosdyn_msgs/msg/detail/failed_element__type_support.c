// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/FailedElement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/failed_element__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/failed_element__functions.h"
#include "bosdyn_msgs/msg/detail/failed_element__struct.h"


// Include directives for member types
// Member `errors`
// Member `warnings`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__FailedElement_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__FailedElement__init(message_memory);
}

void bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__FailedElement_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__FailedElement__fini(message_memory);
}

size_t bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__size_function__FailedElement__errors(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__get_const_function__FailedElement__errors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__get_function__FailedElement__errors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__fetch_function__FailedElement__errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__get_const_function__FailedElement__errors(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__assign_function__FailedElement__errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__get_function__FailedElement__errors(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__resize_function__FailedElement__errors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__size_function__FailedElement__warnings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__get_const_function__FailedElement__warnings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__get_function__FailedElement__warnings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__fetch_function__FailedElement__warnings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__get_const_function__FailedElement__warnings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__assign_function__FailedElement__warnings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__get_function__FailedElement__warnings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__resize_function__FailedElement__warnings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__FailedElement_message_member_array[2] = {
  {
    "errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FailedElement, errors),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__size_function__FailedElement__errors,  // size() function pointer
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__get_const_function__FailedElement__errors,  // get_const(index) function pointer
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__get_function__FailedElement__errors,  // get(index) function pointer
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__fetch_function__FailedElement__errors,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__assign_function__FailedElement__errors,  // assign(index, value) function pointer
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__resize_function__FailedElement__errors  // resize(index) function pointer
  },
  {
    "warnings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FailedElement, warnings),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__size_function__FailedElement__warnings,  // size() function pointer
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__get_const_function__FailedElement__warnings,  // get_const(index) function pointer
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__get_function__FailedElement__warnings,  // get(index) function pointer
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__fetch_function__FailedElement__warnings,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__assign_function__FailedElement__warnings,  // assign(index, value) function pointer
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__resize_function__FailedElement__warnings  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__FailedElement_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "FailedElement",  // message name
  2,  // number of fields
  sizeof(bosdyn_msgs__msg__FailedElement),
  bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__FailedElement_message_member_array,  // message members
  bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__FailedElement_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__FailedElement_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__FailedElement_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__FailedElement_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FailedElement)() {
  if (!bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__FailedElement_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__FailedElement_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__FailedElement__rosidl_typesupport_introspection_c__FailedElement_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
