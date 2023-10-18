// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/node__functions.h"
#include "bosdyn_msgs/msg/detail/node__struct.h"


// Include directives for member types
// Member `name`
// Member `reference_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `user_data`
#include "bosdyn_msgs/msg/user_data.h"
// Member `user_data`
#include "bosdyn_msgs/msg/detail/user_data__rosidl_typesupport_introspection_c.h"
// Member `type`
#include "bosdyn_msgs/msg/node_one_of_type.h"
// Member `type`
#include "bosdyn_msgs/msg/detail/node_one_of_type__rosidl_typesupport_introspection_c.h"
// Member `parameter_values`
// Member `overrides`
#include "bosdyn_msgs/msg/key_value.h"
// Member `parameter_values`
// Member `overrides`
#include "bosdyn_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"
// Member `parameters`
#include "bosdyn_msgs/msg/variable_declaration.h"
// Member `parameters`
#include "bosdyn_msgs/msg/detail/variable_declaration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__Node__init(message_memory);
}

void bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__Node__fini(message_memory);
}

size_t bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__parameter_values(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyValue__Sequence * member =
    (const bosdyn_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__parameter_values(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyValue__Sequence * member =
    (const bosdyn_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__parameter_values(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyValue__Sequence * member =
    (bosdyn_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__parameter_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyValue * item =
    ((const bosdyn_msgs__msg__KeyValue *)
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__parameter_values(untyped_member, index));
  bosdyn_msgs__msg__KeyValue * value =
    (bosdyn_msgs__msg__KeyValue *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__parameter_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyValue * item =
    ((bosdyn_msgs__msg__KeyValue *)
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__parameter_values(untyped_member, index));
  const bosdyn_msgs__msg__KeyValue * value =
    (const bosdyn_msgs__msg__KeyValue *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__parameter_values(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyValue__Sequence * member =
    (bosdyn_msgs__msg__KeyValue__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyValue__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyValue__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__overrides(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyValue__Sequence * member =
    (const bosdyn_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__overrides(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyValue__Sequence * member =
    (const bosdyn_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__overrides(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyValue__Sequence * member =
    (bosdyn_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__overrides(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyValue * item =
    ((const bosdyn_msgs__msg__KeyValue *)
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__overrides(untyped_member, index));
  bosdyn_msgs__msg__KeyValue * value =
    (bosdyn_msgs__msg__KeyValue *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__overrides(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyValue * item =
    ((bosdyn_msgs__msg__KeyValue *)
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__overrides(untyped_member, index));
  const bosdyn_msgs__msg__KeyValue * value =
    (const bosdyn_msgs__msg__KeyValue *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__overrides(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyValue__Sequence * member =
    (bosdyn_msgs__msg__KeyValue__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyValue__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyValue__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__parameters(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__VariableDeclaration__Sequence * member =
    (const bosdyn_msgs__msg__VariableDeclaration__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__parameters(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__VariableDeclaration__Sequence * member =
    (const bosdyn_msgs__msg__VariableDeclaration__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__parameters(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__VariableDeclaration__Sequence * member =
    (bosdyn_msgs__msg__VariableDeclaration__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__VariableDeclaration * item =
    ((const bosdyn_msgs__msg__VariableDeclaration *)
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__parameters(untyped_member, index));
  bosdyn_msgs__msg__VariableDeclaration * value =
    (bosdyn_msgs__msg__VariableDeclaration *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__VariableDeclaration * item =
    ((bosdyn_msgs__msg__VariableDeclaration *)
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__parameters(untyped_member, index));
  const bosdyn_msgs__msg__VariableDeclaration * value =
    (const bosdyn_msgs__msg__VariableDeclaration *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__parameters(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__VariableDeclaration__Sequence * member =
    (bosdyn_msgs__msg__VariableDeclaration__Sequence *)(untyped_member);
  bosdyn_msgs__msg__VariableDeclaration__Sequence__fini(member);
  return bosdyn_msgs__msg__VariableDeclaration__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[8] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Node, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "user_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Node, user_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "user_data_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Node, user_data_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Node, reference_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Node, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameter_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Node, parameter_values),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__parameter_values,  // size() function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__parameter_values,  // get_const(index) function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__parameter_values,  // get(index) function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__parameter_values,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__parameter_values,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__parameter_values  // resize(index) function pointer
  },
  {
    "overrides",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Node, overrides),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__overrides,  // size() function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__overrides,  // get_const(index) function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__overrides,  // get(index) function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__overrides,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__overrides,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__overrides  // resize(index) function pointer
  },
  {
    "parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Node, parameters),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__parameters,  // size() function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__parameters,  // get_const(index) function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__parameters,  // get(index) function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__parameters,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__parameters,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__parameters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "Node",  // message name
  8,  // number of fields
  sizeof(bosdyn_msgs__msg__Node),
  bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array,  // message members
  bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Node)() {
  bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, UserData)();
  bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NodeOneOfType)();
  bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyValue)();
  bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyValue)();
  bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, VariableDeclaration)();
  if (!bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
