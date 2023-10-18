// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/UploadGraphResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/upload_graph_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/upload_graph_response__functions.h"
#include "bosdyn_msgs/msg/detail/upload_graph_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/upload_graph_response_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/upload_graph_response_status__rosidl_typesupport_introspection_c.h"
// Member `lease_use_result`
#include "bosdyn_msgs/msg/lease_use_result.h"
// Member `lease_use_result`
#include "bosdyn_msgs/msg/detail/lease_use_result__rosidl_typesupport_introspection_c.h"
// Member `loaded_waypoint_snapshot_ids`
// Member `unknown_waypoint_snapshot_ids`
// Member `loaded_edge_snapshot_ids`
// Member `unknown_edge_snapshot_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `license_status`
#include "bosdyn_msgs/msg/license_info_status.h"
// Member `license_status`
#include "bosdyn_msgs/msg/detail/license_info_status__rosidl_typesupport_introspection_c.h"
// Member `sensor_status`
#include "bosdyn_msgs/msg/sensor_compatibility_status.h"
// Member `sensor_status`
#include "bosdyn_msgs/msg/detail/sensor_compatibility_status__rosidl_typesupport_introspection_c.h"
// Member `area_callback_error`
#include "bosdyn_msgs/msg/area_callback_service_error.h"
// Member `area_callback_error`
#include "bosdyn_msgs/msg/detail/area_callback_service_error__rosidl_typesupport_introspection_c.h"
// Member `map_stats`
#include "bosdyn_msgs/msg/map_stats.h"
// Member `map_stats`
#include "bosdyn_msgs/msg/detail/map_stats__rosidl_typesupport_introspection_c.h"
// Member `validation_status`
#include "bosdyn_msgs/msg/upload_graph_response_validation_status.h"
// Member `validation_status`
#include "bosdyn_msgs/msg/detail/upload_graph_response_validation_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__UploadGraphResponse__init(message_memory);
}

void bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__UploadGraphResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__size_function__UploadGraphResponse__loaded_waypoint_snapshot_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponse__loaded_waypoint_snapshot_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_function__UploadGraphResponse__loaded_waypoint_snapshot_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponse__loaded_waypoint_snapshot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponse__loaded_waypoint_snapshot_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponse__loaded_waypoint_snapshot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_function__UploadGraphResponse__loaded_waypoint_snapshot_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponse__loaded_waypoint_snapshot_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__size_function__UploadGraphResponse__unknown_waypoint_snapshot_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponse__unknown_waypoint_snapshot_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_function__UploadGraphResponse__unknown_waypoint_snapshot_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponse__unknown_waypoint_snapshot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponse__unknown_waypoint_snapshot_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponse__unknown_waypoint_snapshot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_function__UploadGraphResponse__unknown_waypoint_snapshot_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponse__unknown_waypoint_snapshot_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__size_function__UploadGraphResponse__loaded_edge_snapshot_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponse__loaded_edge_snapshot_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_function__UploadGraphResponse__loaded_edge_snapshot_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponse__loaded_edge_snapshot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponse__loaded_edge_snapshot_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponse__loaded_edge_snapshot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_function__UploadGraphResponse__loaded_edge_snapshot_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponse__loaded_edge_snapshot_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__size_function__UploadGraphResponse__unknown_edge_snapshot_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponse__unknown_edge_snapshot_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_function__UploadGraphResponse__unknown_edge_snapshot_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponse__unknown_edge_snapshot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponse__unknown_edge_snapshot_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponse__unknown_edge_snapshot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_function__UploadGraphResponse__unknown_edge_snapshot_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponse__unknown_edge_snapshot_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_member_array[18] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, header_is_set),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease_use_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, lease_use_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease_use_result_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, lease_use_result_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loaded_waypoint_snapshot_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, loaded_waypoint_snapshot_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__size_function__UploadGraphResponse__loaded_waypoint_snapshot_ids,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponse__loaded_waypoint_snapshot_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_function__UploadGraphResponse__loaded_waypoint_snapshot_ids,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponse__loaded_waypoint_snapshot_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponse__loaded_waypoint_snapshot_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponse__loaded_waypoint_snapshot_ids  // resize(index) function pointer
  },
  {
    "unknown_waypoint_snapshot_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, unknown_waypoint_snapshot_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__size_function__UploadGraphResponse__unknown_waypoint_snapshot_ids,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponse__unknown_waypoint_snapshot_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_function__UploadGraphResponse__unknown_waypoint_snapshot_ids,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponse__unknown_waypoint_snapshot_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponse__unknown_waypoint_snapshot_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponse__unknown_waypoint_snapshot_ids  // resize(index) function pointer
  },
  {
    "loaded_edge_snapshot_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, loaded_edge_snapshot_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__size_function__UploadGraphResponse__loaded_edge_snapshot_ids,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponse__loaded_edge_snapshot_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_function__UploadGraphResponse__loaded_edge_snapshot_ids,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponse__loaded_edge_snapshot_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponse__loaded_edge_snapshot_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponse__loaded_edge_snapshot_ids  // resize(index) function pointer
  },
  {
    "unknown_edge_snapshot_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, unknown_edge_snapshot_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__size_function__UploadGraphResponse__unknown_edge_snapshot_ids,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponse__unknown_edge_snapshot_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__get_function__UploadGraphResponse__unknown_edge_snapshot_ids,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponse__unknown_edge_snapshot_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponse__unknown_edge_snapshot_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponse__unknown_edge_snapshot_ids  // resize(index) function pointer
  },
  {
    "license_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, license_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, sensor_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_status_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, sensor_status_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area_callback_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, area_callback_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area_callback_error_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, area_callback_error_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_stats",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, map_stats),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_stats_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, map_stats_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "validation_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, validation_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "validation_status_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponse, validation_status_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "UploadGraphResponse",  // message name
  18,  // number of fields
  sizeof(bosdyn_msgs__msg__UploadGraphResponse),
  bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_member_array,  // message members
  bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, UploadGraphResponse)() {
  bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, UploadGraphResponseStatus)();
  bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LeaseUseResult)();
  bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LicenseInfoStatus)();
  bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SensorCompatibilityStatus)();
  bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, AreaCallbackServiceError)();
  bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, MapStats)();
  bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, UploadGraphResponseValidationStatus)();
  if (!bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__UploadGraphResponse__rosidl_typesupport_introspection_c__UploadGraphResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
