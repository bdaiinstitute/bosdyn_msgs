// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ModifyPolicyRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/modify_policy_request__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/modify_policy_request__functions.h"
#include "bosdyn_msgs/msg/detail/modify_policy_request__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/request_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__rosidl_typesupport_introspection_c.h"
// Member `to_add`
#include "bosdyn_msgs/msg/policy.h"
// Member `to_add`
#include "bosdyn_msgs/msg/detail/policy__rosidl_typesupport_introspection_c.h"
// Member `policy_ids_to_remove`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ModifyPolicyRequest__init(message_memory);
}

void bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ModifyPolicyRequest__fini(message_memory);
}

size_t bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__size_function__ModifyPolicyRequest__policy_ids_to_remove(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__get_const_function__ModifyPolicyRequest__policy_ids_to_remove(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__get_function__ModifyPolicyRequest__policy_ids_to_remove(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__fetch_function__ModifyPolicyRequest__policy_ids_to_remove(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__get_const_function__ModifyPolicyRequest__policy_ids_to_remove(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__assign_function__ModifyPolicyRequest__policy_ids_to_remove(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__get_function__ModifyPolicyRequest__policy_ids_to_remove(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__resize_function__ModifyPolicyRequest__policy_ids_to_remove(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ModifyPolicyRequest, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__ModifyPolicyRequest, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "to_add",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ModifyPolicyRequest, to_add),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "to_add_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ModifyPolicyRequest, to_add_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "policy_ids_to_remove",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ModifyPolicyRequest, policy_ids_to_remove),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__size_function__ModifyPolicyRequest__policy_ids_to_remove,  // size() function pointer
    bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__get_const_function__ModifyPolicyRequest__policy_ids_to_remove,  // get_const(index) function pointer
    bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__get_function__ModifyPolicyRequest__policy_ids_to_remove,  // get(index) function pointer
    bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__fetch_function__ModifyPolicyRequest__policy_ids_to_remove,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__assign_function__ModifyPolicyRequest__policy_ids_to_remove,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__resize_function__ModifyPolicyRequest__policy_ids_to_remove  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ModifyPolicyRequest",  // message name
  5,  // number of fields
  sizeof(bosdyn_msgs__msg__ModifyPolicyRequest),
  bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_message_member_array,  // message members
  bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ModifyPolicyRequest)() {
  bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RequestHeader)();
  bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Policy)();
  if (!bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ModifyPolicyRequest__rosidl_typesupport_introspection_c__ModifyPolicyRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
