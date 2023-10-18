// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/LoadMissionResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/load_mission_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/load_mission_response__functions.h"
#include "bosdyn_msgs/msg/detail/load_mission_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/load_mission_response_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/load_mission_response_status__rosidl_typesupport_introspection_c.h"
// Member `lease_use_results`
#include "bosdyn_msgs/msg/lease_use_result.h"
// Member `lease_use_results`
#include "bosdyn_msgs/msg/detail/lease_use_result__rosidl_typesupport_introspection_c.h"
// Member `mission_info`
#include "bosdyn_msgs/msg/mission_info.h"
// Member `mission_info`
#include "bosdyn_msgs/msg/detail/mission_info__rosidl_typesupport_introspection_c.h"
// Member `failed_nodes`
#include "bosdyn_msgs/msg/failed_node.h"
// Member `failed_nodes`
#include "bosdyn_msgs/msg/detail/failed_node__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__LoadMissionResponse__init(message_memory);
}

void bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__LoadMissionResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__size_function__LoadMissionResponse__lease_use_results(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__LeaseUseResult__Sequence * member =
    (const bosdyn_msgs__msg__LeaseUseResult__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__get_const_function__LoadMissionResponse__lease_use_results(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__LeaseUseResult__Sequence * member =
    (const bosdyn_msgs__msg__LeaseUseResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__get_function__LoadMissionResponse__lease_use_results(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__LeaseUseResult__Sequence * member =
    (bosdyn_msgs__msg__LeaseUseResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__fetch_function__LoadMissionResponse__lease_use_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__LeaseUseResult * item =
    ((const bosdyn_msgs__msg__LeaseUseResult *)
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__get_const_function__LoadMissionResponse__lease_use_results(untyped_member, index));
  bosdyn_msgs__msg__LeaseUseResult * value =
    (bosdyn_msgs__msg__LeaseUseResult *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__assign_function__LoadMissionResponse__lease_use_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__LeaseUseResult * item =
    ((bosdyn_msgs__msg__LeaseUseResult *)
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__get_function__LoadMissionResponse__lease_use_results(untyped_member, index));
  const bosdyn_msgs__msg__LeaseUseResult * value =
    (const bosdyn_msgs__msg__LeaseUseResult *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__resize_function__LoadMissionResponse__lease_use_results(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__LeaseUseResult__Sequence * member =
    (bosdyn_msgs__msg__LeaseUseResult__Sequence *)(untyped_member);
  bosdyn_msgs__msg__LeaseUseResult__Sequence__fini(member);
  return bosdyn_msgs__msg__LeaseUseResult__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__size_function__LoadMissionResponse__failed_nodes(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__FailedNode__Sequence * member =
    (const bosdyn_msgs__msg__FailedNode__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__get_const_function__LoadMissionResponse__failed_nodes(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__FailedNode__Sequence * member =
    (const bosdyn_msgs__msg__FailedNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__get_function__LoadMissionResponse__failed_nodes(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__FailedNode__Sequence * member =
    (bosdyn_msgs__msg__FailedNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__fetch_function__LoadMissionResponse__failed_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__FailedNode * item =
    ((const bosdyn_msgs__msg__FailedNode *)
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__get_const_function__LoadMissionResponse__failed_nodes(untyped_member, index));
  bosdyn_msgs__msg__FailedNode * value =
    (bosdyn_msgs__msg__FailedNode *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__assign_function__LoadMissionResponse__failed_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__FailedNode * item =
    ((bosdyn_msgs__msg__FailedNode *)
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__get_function__LoadMissionResponse__failed_nodes(untyped_member, index));
  const bosdyn_msgs__msg__FailedNode * value =
    (const bosdyn_msgs__msg__FailedNode *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__resize_function__LoadMissionResponse__failed_nodes(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__FailedNode__Sequence * member =
    (bosdyn_msgs__msg__FailedNode__Sequence *)(untyped_member);
  bosdyn_msgs__msg__FailedNode__Sequence__fini(member);
  return bosdyn_msgs__msg__FailedNode__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LoadMissionResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__LoadMissionResponse, header_is_set),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__LoadMissionResponse, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease_use_results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LoadMissionResponse, lease_use_results),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__size_function__LoadMissionResponse__lease_use_results,  // size() function pointer
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__get_const_function__LoadMissionResponse__lease_use_results,  // get_const(index) function pointer
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__get_function__LoadMissionResponse__lease_use_results,  // get(index) function pointer
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__fetch_function__LoadMissionResponse__lease_use_results,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__assign_function__LoadMissionResponse__lease_use_results,  // assign(index, value) function pointer
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__resize_function__LoadMissionResponse__lease_use_results  // resize(index) function pointer
  },
  {
    "mission_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LoadMissionResponse, mission_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission_info_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LoadMissionResponse, mission_info_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "failed_nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LoadMissionResponse, failed_nodes),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__size_function__LoadMissionResponse__failed_nodes,  // size() function pointer
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__get_const_function__LoadMissionResponse__failed_nodes,  // get_const(index) function pointer
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__get_function__LoadMissionResponse__failed_nodes,  // get(index) function pointer
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__fetch_function__LoadMissionResponse__failed_nodes,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__assign_function__LoadMissionResponse__failed_nodes,  // assign(index, value) function pointer
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__resize_function__LoadMissionResponse__failed_nodes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "LoadMissionResponse",  // message name
  7,  // number of fields
  sizeof(bosdyn_msgs__msg__LoadMissionResponse),
  bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_message_member_array,  // message members
  bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LoadMissionResponse)() {
  bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LoadMissionResponseStatus)();
  bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LeaseUseResult)();
  bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, MissionInfo)();
  bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FailedNode)();
  if (!bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__LoadMissionResponse__rosidl_typesupport_introspection_c__LoadMissionResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
