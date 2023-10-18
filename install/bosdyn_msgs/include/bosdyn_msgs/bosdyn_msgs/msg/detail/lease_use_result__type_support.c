// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/LeaseUseResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/lease_use_result__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/lease_use_result__functions.h"
#include "bosdyn_msgs/msg/detail/lease_use_result__struct.h"


// Include directives for member types
// Member `status`
#include "bosdyn_msgs/msg/lease_use_result_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/lease_use_result_status__rosidl_typesupport_introspection_c.h"
// Member `owner`
#include "bosdyn_msgs/msg/lease_owner.h"
// Member `owner`
#include "bosdyn_msgs/msg/detail/lease_owner__rosidl_typesupport_introspection_c.h"
// Member `attempted_lease`
// Member `previous_lease`
// Member `latest_known_lease`
// Member `latest_resources`
#include "bosdyn_msgs/msg/lease.h"
// Member `attempted_lease`
// Member `previous_lease`
// Member `latest_known_lease`
// Member `latest_resources`
#include "bosdyn_msgs/msg/detail/lease__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__LeaseUseResult__init(message_memory);
}

void bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__LeaseUseResult__fini(message_memory);
}

size_t bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__size_function__LeaseUseResult__latest_resources(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Lease__Sequence * member =
    (const bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__get_const_function__LeaseUseResult__latest_resources(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Lease__Sequence * member =
    (const bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__get_function__LeaseUseResult__latest_resources(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Lease__Sequence * member =
    (bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__fetch_function__LeaseUseResult__latest_resources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Lease * item =
    ((const bosdyn_msgs__msg__Lease *)
    bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__get_const_function__LeaseUseResult__latest_resources(untyped_member, index));
  bosdyn_msgs__msg__Lease * value =
    (bosdyn_msgs__msg__Lease *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__assign_function__LeaseUseResult__latest_resources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Lease * item =
    ((bosdyn_msgs__msg__Lease *)
    bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__get_function__LeaseUseResult__latest_resources(untyped_member, index));
  const bosdyn_msgs__msg__Lease * value =
    (const bosdyn_msgs__msg__Lease *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__resize_function__LeaseUseResult__latest_resources(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Lease__Sequence * member =
    (bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Lease__Sequence__fini(member);
  return bosdyn_msgs__msg__Lease__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_member_array[10] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LeaseUseResult, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "owner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LeaseUseResult, owner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "owner_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LeaseUseResult, owner_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attempted_lease",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LeaseUseResult, attempted_lease),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attempted_lease_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LeaseUseResult, attempted_lease_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "previous_lease",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LeaseUseResult, previous_lease),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "previous_lease_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LeaseUseResult, previous_lease_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latest_known_lease",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LeaseUseResult, latest_known_lease),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latest_known_lease_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LeaseUseResult, latest_known_lease_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latest_resources",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LeaseUseResult, latest_resources),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__size_function__LeaseUseResult__latest_resources,  // size() function pointer
    bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__get_const_function__LeaseUseResult__latest_resources,  // get_const(index) function pointer
    bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__get_function__LeaseUseResult__latest_resources,  // get(index) function pointer
    bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__fetch_function__LeaseUseResult__latest_resources,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__assign_function__LeaseUseResult__latest_resources,  // assign(index, value) function pointer
    bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__resize_function__LeaseUseResult__latest_resources  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "LeaseUseResult",  // message name
  10,  // number of fields
  sizeof(bosdyn_msgs__msg__LeaseUseResult),
  bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_member_array,  // message members
  bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LeaseUseResult)() {
  bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LeaseUseResultStatus)();
  bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LeaseOwner)();
  bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Lease)();
  bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Lease)();
  bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Lease)();
  bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Lease)();
  if (!bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__LeaseUseResult__rosidl_typesupport_introspection_c__LeaseUseResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
