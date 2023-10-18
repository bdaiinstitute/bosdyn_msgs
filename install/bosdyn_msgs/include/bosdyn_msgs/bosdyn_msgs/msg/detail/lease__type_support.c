// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/Lease.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/lease__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/lease__functions.h"
#include "bosdyn_msgs/msg/detail/lease__struct.h"


// Include directives for member types
// Member `resource`
// Member `epoch`
// Member `client_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__Lease_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__Lease__init(message_memory);
}

void bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__Lease_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__Lease__fini(message_memory);
}

size_t bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__size_function__Lease__sequence(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__get_const_function__Lease__sequence(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__get_function__Lease__sequence(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__fetch_function__Lease__sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__get_const_function__Lease__sequence(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__assign_function__Lease__sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__get_function__Lease__sequence(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__resize_function__Lease__sequence(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__size_function__Lease__client_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__get_const_function__Lease__client_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__get_function__Lease__client_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__fetch_function__Lease__client_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__get_const_function__Lease__client_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__assign_function__Lease__client_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__get_function__Lease__client_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__resize_function__Lease__client_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__Lease_message_member_array[4] = {
  {
    "resource",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Lease, resource),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "epoch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Lease, epoch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Lease, sequence),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__size_function__Lease__sequence,  // size() function pointer
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__get_const_function__Lease__sequence,  // get_const(index) function pointer
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__get_function__Lease__sequence,  // get(index) function pointer
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__fetch_function__Lease__sequence,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__assign_function__Lease__sequence,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__resize_function__Lease__sequence  // resize(index) function pointer
  },
  {
    "client_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Lease, client_names),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__size_function__Lease__client_names,  // size() function pointer
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__get_const_function__Lease__client_names,  // get_const(index) function pointer
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__get_function__Lease__client_names,  // get(index) function pointer
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__fetch_function__Lease__client_names,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__assign_function__Lease__client_names,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__resize_function__Lease__client_names  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__Lease_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "Lease",  // message name
  4,  // number of fields
  sizeof(bosdyn_msgs__msg__Lease),
  bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__Lease_message_member_array,  // message members
  bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__Lease_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__Lease_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__Lease_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__Lease_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Lease)() {
  if (!bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__Lease_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__Lease_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__Lease__rosidl_typesupport_introspection_c__Lease_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
