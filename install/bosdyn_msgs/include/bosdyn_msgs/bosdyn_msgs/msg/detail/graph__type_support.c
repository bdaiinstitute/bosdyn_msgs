// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/graph__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/graph__functions.h"
#include "bosdyn_msgs/msg/detail/graph__struct.h"


// Include directives for member types
// Member `waypoints`
#include "bosdyn_msgs/msg/waypoint.h"
// Member `waypoints`
#include "bosdyn_msgs/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"
// Member `edges`
#include "bosdyn_msgs/msg/edge.h"
// Member `edges`
#include "bosdyn_msgs/msg/detail/edge__rosidl_typesupport_introspection_c.h"
// Member `anchoring`
#include "bosdyn_msgs/msg/anchoring.h"
// Member `anchoring`
#include "bosdyn_msgs/msg/detail/anchoring__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__Graph__init(message_memory);
}

void bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__Graph__fini(message_memory);
}

size_t bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__size_function__Graph__waypoints(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Waypoint__Sequence * member =
    (const bosdyn_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__waypoints(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Waypoint__Sequence * member =
    (const bosdyn_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__waypoints(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Waypoint__Sequence * member =
    (bosdyn_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__fetch_function__Graph__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Waypoint * item =
    ((const bosdyn_msgs__msg__Waypoint *)
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__waypoints(untyped_member, index));
  bosdyn_msgs__msg__Waypoint * value =
    (bosdyn_msgs__msg__Waypoint *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__assign_function__Graph__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Waypoint * item =
    ((bosdyn_msgs__msg__Waypoint *)
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__waypoints(untyped_member, index));
  const bosdyn_msgs__msg__Waypoint * value =
    (const bosdyn_msgs__msg__Waypoint *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__resize_function__Graph__waypoints(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Waypoint__Sequence * member =
    (bosdyn_msgs__msg__Waypoint__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Waypoint__Sequence__fini(member);
  return bosdyn_msgs__msg__Waypoint__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__size_function__Graph__edges(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Edge__Sequence * member =
    (const bosdyn_msgs__msg__Edge__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__edges(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Edge__Sequence * member =
    (const bosdyn_msgs__msg__Edge__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__edges(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Edge__Sequence * member =
    (bosdyn_msgs__msg__Edge__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__fetch_function__Graph__edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Edge * item =
    ((const bosdyn_msgs__msg__Edge *)
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__edges(untyped_member, index));
  bosdyn_msgs__msg__Edge * value =
    (bosdyn_msgs__msg__Edge *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__assign_function__Graph__edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Edge * item =
    ((bosdyn_msgs__msg__Edge *)
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__edges(untyped_member, index));
  const bosdyn_msgs__msg__Edge * value =
    (const bosdyn_msgs__msg__Edge *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__resize_function__Graph__edges(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Edge__Sequence * member =
    (bosdyn_msgs__msg__Edge__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Edge__Sequence__fini(member);
  return bosdyn_msgs__msg__Edge__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_member_array[4] = {
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Graph, waypoints),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__size_function__Graph__waypoints,  // size() function pointer
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__waypoints,  // get_const(index) function pointer
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__waypoints,  // get(index) function pointer
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__fetch_function__Graph__waypoints,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__assign_function__Graph__waypoints,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__resize_function__Graph__waypoints  // resize(index) function pointer
  },
  {
    "edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Graph, edges),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__size_function__Graph__edges,  // size() function pointer
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__edges,  // get_const(index) function pointer
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__edges,  // get(index) function pointer
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__fetch_function__Graph__edges,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__assign_function__Graph__edges,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__resize_function__Graph__edges  // resize(index) function pointer
  },
  {
    "anchoring",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Graph, anchoring),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "anchoring_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Graph, anchoring_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "Graph",  // message name
  4,  // number of fields
  sizeof(bosdyn_msgs__msg__Graph),
  bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_member_array,  // message members
  bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Graph)() {
  bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Waypoint)();
  bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Edge)();
  bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Anchoring)();
  if (!bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
