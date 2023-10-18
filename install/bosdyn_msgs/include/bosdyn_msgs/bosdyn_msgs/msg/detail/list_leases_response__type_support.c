// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ListLeasesResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/list_leases_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/list_leases_response__functions.h"
#include "bosdyn_msgs/msg/detail/list_leases_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `resources`
#include "bosdyn_msgs/msg/lease_resource.h"
// Member `resources`
#include "bosdyn_msgs/msg/detail/lease_resource__rosidl_typesupport_introspection_c.h"
// Member `resource_tree`
#include "bosdyn_msgs/msg/resource_tree.h"
// Member `resource_tree`
#include "bosdyn_msgs/msg/detail/resource_tree__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ListLeasesResponse__init(message_memory);
}

void bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ListLeasesResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__size_function__ListLeasesResponse__resources(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__LeaseResource__Sequence * member =
    (const bosdyn_msgs__msg__LeaseResource__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__get_const_function__ListLeasesResponse__resources(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__LeaseResource__Sequence * member =
    (const bosdyn_msgs__msg__LeaseResource__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__get_function__ListLeasesResponse__resources(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__LeaseResource__Sequence * member =
    (bosdyn_msgs__msg__LeaseResource__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__fetch_function__ListLeasesResponse__resources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__LeaseResource * item =
    ((const bosdyn_msgs__msg__LeaseResource *)
    bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__get_const_function__ListLeasesResponse__resources(untyped_member, index));
  bosdyn_msgs__msg__LeaseResource * value =
    (bosdyn_msgs__msg__LeaseResource *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__assign_function__ListLeasesResponse__resources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__LeaseResource * item =
    ((bosdyn_msgs__msg__LeaseResource *)
    bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__get_function__ListLeasesResponse__resources(untyped_member, index));
  const bosdyn_msgs__msg__LeaseResource * value =
    (const bosdyn_msgs__msg__LeaseResource *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__resize_function__ListLeasesResponse__resources(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__LeaseResource__Sequence * member =
    (bosdyn_msgs__msg__LeaseResource__Sequence *)(untyped_member);
  bosdyn_msgs__msg__LeaseResource__Sequence__fini(member);
  return bosdyn_msgs__msg__LeaseResource__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ListLeasesResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__ListLeasesResponse, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resources",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ListLeasesResponse, resources),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__size_function__ListLeasesResponse__resources,  // size() function pointer
    bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__get_const_function__ListLeasesResponse__resources,  // get_const(index) function pointer
    bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__get_function__ListLeasesResponse__resources,  // get(index) function pointer
    bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__fetch_function__ListLeasesResponse__resources,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__assign_function__ListLeasesResponse__resources,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__resize_function__ListLeasesResponse__resources  // resize(index) function pointer
  },
  {
    "resource_tree",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ListLeasesResponse, resource_tree),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resource_tree_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ListLeasesResponse, resource_tree_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ListLeasesResponse",  // message name
  5,  // number of fields
  sizeof(bosdyn_msgs__msg__ListLeasesResponse),
  bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_message_member_array,  // message members
  bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ListLeasesResponse)() {
  bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LeaseResource)();
  bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResourceTree)();
  if (!bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ListLeasesResponse__rosidl_typesupport_introspection_c__ListLeasesResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
