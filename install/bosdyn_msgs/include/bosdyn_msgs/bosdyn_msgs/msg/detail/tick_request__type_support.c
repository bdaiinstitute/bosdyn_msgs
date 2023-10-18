// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/TickRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/tick_request__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/tick_request__functions.h"
#include "bosdyn_msgs/msg/detail/tick_request__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/request_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__rosidl_typesupport_introspection_c.h"
// Member `session_id`
// Member `group_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `leases`
#include "bosdyn_msgs/msg/lease.h"
// Member `leases`
#include "bosdyn_msgs/msg/detail/lease__rosidl_typesupport_introspection_c.h"
// Member `inputs`
#include "bosdyn_msgs/msg/key_value.h"
// Member `inputs`
#include "bosdyn_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"
// Member `params`
#include "bosdyn_msgs/msg/dict_param.h"
// Member `params`
#include "bosdyn_msgs/msg/detail/dict_param__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__TickRequest__init(message_memory);
}

void bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__TickRequest__fini(message_memory);
}

size_t bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__size_function__TickRequest__leases(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Lease__Sequence * member =
    (const bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__get_const_function__TickRequest__leases(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Lease__Sequence * member =
    (const bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__get_function__TickRequest__leases(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Lease__Sequence * member =
    (bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__fetch_function__TickRequest__leases(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Lease * item =
    ((const bosdyn_msgs__msg__Lease *)
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__get_const_function__TickRequest__leases(untyped_member, index));
  bosdyn_msgs__msg__Lease * value =
    (bosdyn_msgs__msg__Lease *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__assign_function__TickRequest__leases(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Lease * item =
    ((bosdyn_msgs__msg__Lease *)
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__get_function__TickRequest__leases(untyped_member, index));
  const bosdyn_msgs__msg__Lease * value =
    (const bosdyn_msgs__msg__Lease *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__resize_function__TickRequest__leases(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Lease__Sequence * member =
    (bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Lease__Sequence__fini(member);
  return bosdyn_msgs__msg__Lease__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__size_function__TickRequest__inputs(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyValue__Sequence * member =
    (const bosdyn_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__get_const_function__TickRequest__inputs(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyValue__Sequence * member =
    (const bosdyn_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__get_function__TickRequest__inputs(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyValue__Sequence * member =
    (bosdyn_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__fetch_function__TickRequest__inputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyValue * item =
    ((const bosdyn_msgs__msg__KeyValue *)
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__get_const_function__TickRequest__inputs(untyped_member, index));
  bosdyn_msgs__msg__KeyValue * value =
    (bosdyn_msgs__msg__KeyValue *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__assign_function__TickRequest__inputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyValue * item =
    ((bosdyn_msgs__msg__KeyValue *)
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__get_function__TickRequest__inputs(untyped_member, index));
  const bosdyn_msgs__msg__KeyValue * value =
    (const bosdyn_msgs__msg__KeyValue *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__resize_function__TickRequest__inputs(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyValue__Sequence * member =
    (bosdyn_msgs__msg__KeyValue__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyValue__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__TickRequest, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "header_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__TickRequest, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__TickRequest, session_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "leases",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__TickRequest, leases),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__size_function__TickRequest__leases,  // size() function pointer
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__get_const_function__TickRequest__leases,  // get_const(index) function pointer
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__get_function__TickRequest__leases,  // get(index) function pointer
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__fetch_function__TickRequest__leases,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__assign_function__TickRequest__leases,  // assign(index, value) function pointer
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__resize_function__TickRequest__leases  // resize(index) function pointer
  },
  {
    "inputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__TickRequest, inputs),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__size_function__TickRequest__inputs,  // size() function pointer
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__get_const_function__TickRequest__inputs,  // get_const(index) function pointer
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__get_function__TickRequest__inputs,  // get(index) function pointer
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__fetch_function__TickRequest__inputs,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__assign_function__TickRequest__inputs,  // assign(index, value) function pointer
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__resize_function__TickRequest__inputs  // resize(index) function pointer
  },
  {
    "params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__TickRequest, params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__TickRequest, params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__TickRequest, group_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "TickRequest",  // message name
  8,  // number of fields
  sizeof(bosdyn_msgs__msg__TickRequest),
  bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_message_member_array,  // message members
  bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, TickRequest)() {
  bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RequestHeader)();
  bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Lease)();
  bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyValue)();
  bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DictParam)();
  if (!bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__TickRequest__rosidl_typesupport_introspection_c__TickRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
