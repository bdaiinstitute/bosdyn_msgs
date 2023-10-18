// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/Policy.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/policy__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/policy__functions.h"
#include "bosdyn_msgs/msg/detail/policy__struct.h"


// Include directives for member types
// Member `name`
// Member `user_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `actions`
#include "bosdyn_msgs/msg/action_after.h"
// Member `actions`
#include "bosdyn_msgs/msg/detail/action_after__rosidl_typesupport_introspection_c.h"
// Member `associated_leases`
#include "bosdyn_msgs/msg/lease.h"
// Member `associated_leases`
#include "bosdyn_msgs/msg/detail/lease__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__Policy__init(message_memory);
}

void bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__Policy__fini(message_memory);
}

size_t bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__size_function__Policy__actions(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__ActionAfter__Sequence * member =
    (const bosdyn_msgs__msg__ActionAfter__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__get_const_function__Policy__actions(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__ActionAfter__Sequence * member =
    (const bosdyn_msgs__msg__ActionAfter__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__get_function__Policy__actions(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__ActionAfter__Sequence * member =
    (bosdyn_msgs__msg__ActionAfter__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__fetch_function__Policy__actions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__ActionAfter * item =
    ((const bosdyn_msgs__msg__ActionAfter *)
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__get_const_function__Policy__actions(untyped_member, index));
  bosdyn_msgs__msg__ActionAfter * value =
    (bosdyn_msgs__msg__ActionAfter *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__assign_function__Policy__actions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__ActionAfter * item =
    ((bosdyn_msgs__msg__ActionAfter *)
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__get_function__Policy__actions(untyped_member, index));
  const bosdyn_msgs__msg__ActionAfter * value =
    (const bosdyn_msgs__msg__ActionAfter *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__resize_function__Policy__actions(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__ActionAfter__Sequence * member =
    (bosdyn_msgs__msg__ActionAfter__Sequence *)(untyped_member);
  bosdyn_msgs__msg__ActionAfter__Sequence__fini(member);
  return bosdyn_msgs__msg__ActionAfter__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__size_function__Policy__associated_leases(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Lease__Sequence * member =
    (const bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__get_const_function__Policy__associated_leases(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Lease__Sequence * member =
    (const bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__get_function__Policy__associated_leases(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Lease__Sequence * member =
    (bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__fetch_function__Policy__associated_leases(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Lease * item =
    ((const bosdyn_msgs__msg__Lease *)
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__get_const_function__Policy__associated_leases(untyped_member, index));
  bosdyn_msgs__msg__Lease * value =
    (bosdyn_msgs__msg__Lease *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__assign_function__Policy__associated_leases(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Lease * item =
    ((bosdyn_msgs__msg__Lease *)
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__get_function__Policy__associated_leases(untyped_member, index));
  const bosdyn_msgs__msg__Lease * value =
    (const bosdyn_msgs__msg__Lease *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__resize_function__Policy__associated_leases(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Lease__Sequence * member =
    (bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Lease__Sequence__fini(member);
  return bosdyn_msgs__msg__Lease__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Policy, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Policy, actions),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__size_function__Policy__actions,  // size() function pointer
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__get_const_function__Policy__actions,  // get_const(index) function pointer
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__get_function__Policy__actions,  // get(index) function pointer
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__fetch_function__Policy__actions,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__assign_function__Policy__actions,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__resize_function__Policy__actions  // resize(index) function pointer
  },
  {
    "associated_leases",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Policy, associated_leases),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__size_function__Policy__associated_leases,  // size() function pointer
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__get_const_function__Policy__associated_leases,  // get_const(index) function pointer
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__get_function__Policy__associated_leases,  // get(index) function pointer
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__fetch_function__Policy__associated_leases,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__assign_function__Policy__associated_leases,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__resize_function__Policy__associated_leases  // resize(index) function pointer
  },
  {
    "user_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Policy, user_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "Policy",  // message name
  4,  // number of fields
  sizeof(bosdyn_msgs__msg__Policy),
  bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_message_member_array,  // message members
  bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Policy)() {
  bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionAfter)();
  bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Lease)();
  if (!bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__Policy__rosidl_typesupport_introspection_c__Policy_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
