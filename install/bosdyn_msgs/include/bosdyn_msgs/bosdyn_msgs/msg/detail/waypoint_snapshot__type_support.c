// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/WaypointSnapshot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/waypoint_snapshot__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/waypoint_snapshot__functions.h"
#include "bosdyn_msgs/msg/detail/waypoint_snapshot__struct.h"


// Include directives for member types
// Member `id`
// Member `version_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `images`
#include "bosdyn_msgs/msg/image_response.h"
// Member `images`
#include "bosdyn_msgs/msg/detail/image_response__rosidl_typesupport_introspection_c.h"
// Member `point_cloud`
#include "bosdyn_msgs/msg/point_cloud.h"
// Member `point_cloud`
#include "bosdyn_msgs/msg/detail/point_cloud__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "bosdyn_msgs/msg/world_object.h"
// Member `objects`
#include "bosdyn_msgs/msg/detail/world_object__rosidl_typesupport_introspection_c.h"
// Member `robot_state`
#include "bosdyn_msgs/msg/robot_state.h"
// Member `robot_state`
#include "bosdyn_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
// Member `robot_local_grids`
#include "bosdyn_msgs/msg/local_grid.h"
// Member `robot_local_grids`
#include "bosdyn_msgs/msg/detail/local_grid__rosidl_typesupport_introspection_c.h"
// Member `body_tform_remote_point_cloud_sensor`
#include "geometry_msgs/msg/pose.h"
// Member `body_tform_remote_point_cloud_sensor`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `payloads`
#include "bosdyn_msgs/msg/payload.h"
// Member `payloads`
#include "bosdyn_msgs/msg/detail/payload__rosidl_typesupport_introspection_c.h"
// Member `robot_id`
#include "bosdyn_msgs/msg/robot_id.h"
// Member `robot_id`
#include "bosdyn_msgs/msg/detail/robot_id__rosidl_typesupport_introspection_c.h"
// Member `recording_started_on`
#include "builtin_interfaces/msg/time.h"
// Member `recording_started_on`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__WaypointSnapshot__init(message_memory);
}

void bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__WaypointSnapshot__fini(message_memory);
}

size_t bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__size_function__WaypointSnapshot__images(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__ImageResponse__Sequence * member =
    (const bosdyn_msgs__msg__ImageResponse__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_const_function__WaypointSnapshot__images(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__ImageResponse__Sequence * member =
    (const bosdyn_msgs__msg__ImageResponse__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_function__WaypointSnapshot__images(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__ImageResponse__Sequence * member =
    (bosdyn_msgs__msg__ImageResponse__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__fetch_function__WaypointSnapshot__images(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__ImageResponse * item =
    ((const bosdyn_msgs__msg__ImageResponse *)
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_const_function__WaypointSnapshot__images(untyped_member, index));
  bosdyn_msgs__msg__ImageResponse * value =
    (bosdyn_msgs__msg__ImageResponse *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__assign_function__WaypointSnapshot__images(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__ImageResponse * item =
    ((bosdyn_msgs__msg__ImageResponse *)
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_function__WaypointSnapshot__images(untyped_member, index));
  const bosdyn_msgs__msg__ImageResponse * value =
    (const bosdyn_msgs__msg__ImageResponse *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__resize_function__WaypointSnapshot__images(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__ImageResponse__Sequence * member =
    (bosdyn_msgs__msg__ImageResponse__Sequence *)(untyped_member);
  bosdyn_msgs__msg__ImageResponse__Sequence__fini(member);
  return bosdyn_msgs__msg__ImageResponse__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__size_function__WaypointSnapshot__objects(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__WorldObject__Sequence * member =
    (const bosdyn_msgs__msg__WorldObject__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_const_function__WaypointSnapshot__objects(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__WorldObject__Sequence * member =
    (const bosdyn_msgs__msg__WorldObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_function__WaypointSnapshot__objects(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__WorldObject__Sequence * member =
    (bosdyn_msgs__msg__WorldObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__fetch_function__WaypointSnapshot__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__WorldObject * item =
    ((const bosdyn_msgs__msg__WorldObject *)
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_const_function__WaypointSnapshot__objects(untyped_member, index));
  bosdyn_msgs__msg__WorldObject * value =
    (bosdyn_msgs__msg__WorldObject *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__assign_function__WaypointSnapshot__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__WorldObject * item =
    ((bosdyn_msgs__msg__WorldObject *)
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_function__WaypointSnapshot__objects(untyped_member, index));
  const bosdyn_msgs__msg__WorldObject * value =
    (const bosdyn_msgs__msg__WorldObject *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__resize_function__WaypointSnapshot__objects(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__WorldObject__Sequence * member =
    (bosdyn_msgs__msg__WorldObject__Sequence *)(untyped_member);
  bosdyn_msgs__msg__WorldObject__Sequence__fini(member);
  return bosdyn_msgs__msg__WorldObject__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__size_function__WaypointSnapshot__robot_local_grids(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__LocalGrid__Sequence * member =
    (const bosdyn_msgs__msg__LocalGrid__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_const_function__WaypointSnapshot__robot_local_grids(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__LocalGrid__Sequence * member =
    (const bosdyn_msgs__msg__LocalGrid__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_function__WaypointSnapshot__robot_local_grids(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__LocalGrid__Sequence * member =
    (bosdyn_msgs__msg__LocalGrid__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__fetch_function__WaypointSnapshot__robot_local_grids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__LocalGrid * item =
    ((const bosdyn_msgs__msg__LocalGrid *)
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_const_function__WaypointSnapshot__robot_local_grids(untyped_member, index));
  bosdyn_msgs__msg__LocalGrid * value =
    (bosdyn_msgs__msg__LocalGrid *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__assign_function__WaypointSnapshot__robot_local_grids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__LocalGrid * item =
    ((bosdyn_msgs__msg__LocalGrid *)
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_function__WaypointSnapshot__robot_local_grids(untyped_member, index));
  const bosdyn_msgs__msg__LocalGrid * value =
    (const bosdyn_msgs__msg__LocalGrid *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__resize_function__WaypointSnapshot__robot_local_grids(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__LocalGrid__Sequence * member =
    (bosdyn_msgs__msg__LocalGrid__Sequence *)(untyped_member);
  bosdyn_msgs__msg__LocalGrid__Sequence__fini(member);
  return bosdyn_msgs__msg__LocalGrid__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__size_function__WaypointSnapshot__payloads(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Payload__Sequence * member =
    (const bosdyn_msgs__msg__Payload__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_const_function__WaypointSnapshot__payloads(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Payload__Sequence * member =
    (const bosdyn_msgs__msg__Payload__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_function__WaypointSnapshot__payloads(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Payload__Sequence * member =
    (bosdyn_msgs__msg__Payload__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__fetch_function__WaypointSnapshot__payloads(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Payload * item =
    ((const bosdyn_msgs__msg__Payload *)
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_const_function__WaypointSnapshot__payloads(untyped_member, index));
  bosdyn_msgs__msg__Payload * value =
    (bosdyn_msgs__msg__Payload *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__assign_function__WaypointSnapshot__payloads(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Payload * item =
    ((bosdyn_msgs__msg__Payload *)
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_function__WaypointSnapshot__payloads(untyped_member, index));
  const bosdyn_msgs__msg__Payload * value =
    (const bosdyn_msgs__msg__Payload *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__resize_function__WaypointSnapshot__payloads(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Payload__Sequence * member =
    (bosdyn_msgs__msg__Payload__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Payload__Sequence__fini(member);
  return bosdyn_msgs__msg__Payload__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_member_array[18] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, images),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__size_function__WaypointSnapshot__images,  // size() function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_const_function__WaypointSnapshot__images,  // get_const(index) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_function__WaypointSnapshot__images,  // get(index) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__fetch_function__WaypointSnapshot__images,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__assign_function__WaypointSnapshot__images,  // assign(index, value) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__resize_function__WaypointSnapshot__images  // resize(index) function pointer
  },
  {
    "point_cloud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, point_cloud),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_cloud_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, point_cloud_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, objects),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__size_function__WaypointSnapshot__objects,  // size() function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_const_function__WaypointSnapshot__objects,  // get_const(index) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_function__WaypointSnapshot__objects,  // get(index) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__fetch_function__WaypointSnapshot__objects,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__assign_function__WaypointSnapshot__objects,  // assign(index, value) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__resize_function__WaypointSnapshot__objects  // resize(index) function pointer
  },
  {
    "robot_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, robot_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_state_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, robot_state_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_local_grids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, robot_local_grids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__size_function__WaypointSnapshot__robot_local_grids,  // size() function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_const_function__WaypointSnapshot__robot_local_grids,  // get_const(index) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_function__WaypointSnapshot__robot_local_grids,  // get(index) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__fetch_function__WaypointSnapshot__robot_local_grids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__assign_function__WaypointSnapshot__robot_local_grids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__resize_function__WaypointSnapshot__robot_local_grids  // resize(index) function pointer
  },
  {
    "is_point_cloud_processed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, is_point_cloud_processed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, version_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_remote_point_cloud_sensor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, has_remote_point_cloud_sensor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "body_tform_remote_point_cloud_sensor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, body_tform_remote_point_cloud_sensor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "body_tform_remote_point_cloud_sensor_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, body_tform_remote_point_cloud_sensor_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "payloads",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, payloads),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__size_function__WaypointSnapshot__payloads,  // size() function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_const_function__WaypointSnapshot__payloads,  // get_const(index) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__get_function__WaypointSnapshot__payloads,  // get(index) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__fetch_function__WaypointSnapshot__payloads,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__assign_function__WaypointSnapshot__payloads,  // assign(index, value) function pointer
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__resize_function__WaypointSnapshot__payloads  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_id_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, robot_id_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recording_started_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, recording_started_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recording_started_on_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointSnapshot, recording_started_on_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "WaypointSnapshot",  // message name
  18,  // number of fields
  sizeof(bosdyn_msgs__msg__WaypointSnapshot),
  bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_member_array,  // message members
  bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WaypointSnapshot)() {
  bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImageResponse)();
  bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PointCloud)();
  bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WorldObject)();
  bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RobotState)();
  bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LocalGrid)();
  bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Payload)();
  bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RobotId)();
  bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__WaypointSnapshot__rosidl_typesupport_introspection_c__WaypointSnapshot_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
