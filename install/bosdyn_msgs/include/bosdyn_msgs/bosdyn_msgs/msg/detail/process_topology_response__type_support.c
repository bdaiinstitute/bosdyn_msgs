// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ProcessTopologyResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/process_topology_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/process_topology_response__functions.h"
#include "bosdyn_msgs/msg/detail/process_topology_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/process_topology_response_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/process_topology_response_status__rosidl_typesupport_introspection_c.h"
// Member `new_subgraph`
#include "bosdyn_msgs/msg/graph.h"
// Member `new_subgraph`
#include "bosdyn_msgs/msg/detail/graph__rosidl_typesupport_introspection_c.h"
// Member `missing_snapshot_ids`
// Member `missing_waypoint_ids`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ProcessTopologyResponse__init(message_memory);
}

void bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ProcessTopologyResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__size_function__ProcessTopologyResponse__missing_snapshot_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessTopologyResponse__missing_snapshot_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__get_function__ProcessTopologyResponse__missing_snapshot_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessTopologyResponse__missing_snapshot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessTopologyResponse__missing_snapshot_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__assign_function__ProcessTopologyResponse__missing_snapshot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__get_function__ProcessTopologyResponse__missing_snapshot_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__resize_function__ProcessTopologyResponse__missing_snapshot_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__size_function__ProcessTopologyResponse__missing_waypoint_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessTopologyResponse__missing_waypoint_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__get_function__ProcessTopologyResponse__missing_waypoint_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessTopologyResponse__missing_waypoint_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessTopologyResponse__missing_waypoint_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__assign_function__ProcessTopologyResponse__missing_waypoint_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__get_function__ProcessTopologyResponse__missing_waypoint_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__resize_function__ProcessTopologyResponse__missing_waypoint_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__ProcessTopologyResponse, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyResponse, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "new_subgraph",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyResponse, new_subgraph),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "new_subgraph_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyResponse, new_subgraph_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_on_server_was_modified",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyResponse, map_on_server_was_modified),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "missing_snapshot_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyResponse, missing_snapshot_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__size_function__ProcessTopologyResponse__missing_snapshot_ids,  // size() function pointer
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessTopologyResponse__missing_snapshot_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__get_function__ProcessTopologyResponse__missing_snapshot_ids,  // get(index) function pointer
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessTopologyResponse__missing_snapshot_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__assign_function__ProcessTopologyResponse__missing_snapshot_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__resize_function__ProcessTopologyResponse__missing_snapshot_ids  // resize(index) function pointer
  },
  {
    "missing_waypoint_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyResponse, missing_waypoint_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__size_function__ProcessTopologyResponse__missing_waypoint_ids,  // size() function pointer
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessTopologyResponse__missing_waypoint_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__get_function__ProcessTopologyResponse__missing_waypoint_ids,  // get(index) function pointer
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessTopologyResponse__missing_waypoint_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__assign_function__ProcessTopologyResponse__missing_waypoint_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__resize_function__ProcessTopologyResponse__missing_waypoint_ids  // resize(index) function pointer
  },
  {
    "timed_out",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyResponse, timed_out),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ProcessTopologyResponse",  // message name
  9,  // number of fields
  sizeof(bosdyn_msgs__msg__ProcessTopologyResponse),
  bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_message_member_array,  // message members
  bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessTopologyResponse)() {
  bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessTopologyResponseStatus)();
  bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Graph)();
  if (!bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ProcessTopologyResponse__rosidl_typesupport_introspection_c__ProcessTopologyResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
