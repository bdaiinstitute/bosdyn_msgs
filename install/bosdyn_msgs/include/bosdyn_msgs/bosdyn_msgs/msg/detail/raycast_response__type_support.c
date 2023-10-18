// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/RaycastResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/raycast_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/raycast_response__functions.h"
#include "bosdyn_msgs/msg/detail/raycast_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/raycast_response_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/raycast_response_status__rosidl_typesupport_introspection_c.h"
// Member `message`
// Member `hit_frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `hits`
#include "bosdyn_msgs/msg/ray_intersection.h"
// Member `hits`
#include "bosdyn_msgs/msg/detail/ray_intersection__rosidl_typesupport_introspection_c.h"
// Member `transforms_snapshot`
#include "bosdyn_msgs/msg/frame_tree_snapshot.h"
// Member `transforms_snapshot`
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__RaycastResponse__init(message_memory);
}

void bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__RaycastResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__size_function__RaycastResponse__hits(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__RayIntersection__Sequence * member =
    (const bosdyn_msgs__msg__RayIntersection__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__get_const_function__RaycastResponse__hits(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__RayIntersection__Sequence * member =
    (const bosdyn_msgs__msg__RayIntersection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__get_function__RaycastResponse__hits(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__RayIntersection__Sequence * member =
    (bosdyn_msgs__msg__RayIntersection__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__fetch_function__RaycastResponse__hits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__RayIntersection * item =
    ((const bosdyn_msgs__msg__RayIntersection *)
    bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__get_const_function__RaycastResponse__hits(untyped_member, index));
  bosdyn_msgs__msg__RayIntersection * value =
    (bosdyn_msgs__msg__RayIntersection *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__assign_function__RaycastResponse__hits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__RayIntersection * item =
    ((bosdyn_msgs__msg__RayIntersection *)
    bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__get_function__RaycastResponse__hits(untyped_member, index));
  const bosdyn_msgs__msg__RayIntersection * value =
    (const bosdyn_msgs__msg__RayIntersection *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__resize_function__RaycastResponse__hits(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__RayIntersection__Sequence * member =
    (bosdyn_msgs__msg__RayIntersection__Sequence *)(untyped_member);
  bosdyn_msgs__msg__RayIntersection__Sequence__fini(member);
  return bosdyn_msgs__msg__RayIntersection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RaycastResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__RaycastResponse, header_is_set),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__RaycastResponse, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RaycastResponse, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hit_frame_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RaycastResponse, hit_frame_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RaycastResponse, hits),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__size_function__RaycastResponse__hits,  // size() function pointer
    bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__get_const_function__RaycastResponse__hits,  // get_const(index) function pointer
    bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__get_function__RaycastResponse__hits,  // get(index) function pointer
    bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__fetch_function__RaycastResponse__hits,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__assign_function__RaycastResponse__hits,  // assign(index, value) function pointer
    bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__resize_function__RaycastResponse__hits  // resize(index) function pointer
  },
  {
    "transforms_snapshot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RaycastResponse, transforms_snapshot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transforms_snapshot_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RaycastResponse, transforms_snapshot_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "RaycastResponse",  // message name
  8,  // number of fields
  sizeof(bosdyn_msgs__msg__RaycastResponse),
  bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_message_member_array,  // message members
  bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RaycastResponse)() {
  bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RaycastResponseStatus)();
  bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RayIntersection)();
  bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FrameTreeSnapshot)();
  if (!bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__RaycastResponse__rosidl_typesupport_introspection_c__RaycastResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
