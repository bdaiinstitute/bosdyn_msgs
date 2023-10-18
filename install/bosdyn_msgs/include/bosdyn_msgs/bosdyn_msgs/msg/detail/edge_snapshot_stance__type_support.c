// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/EdgeSnapshotStance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/edge_snapshot_stance__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/edge_snapshot_stance__functions.h"
#include "bosdyn_msgs/msg/detail/edge_snapshot_stance__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `foot_states`
#include "bosdyn_msgs/msg/foot_state.h"
// Member `foot_states`
#include "bosdyn_msgs/msg/detail/foot_state__rosidl_typesupport_introspection_c.h"
// Member `ko_tform_body`
// Member `vision_tform_body`
#include "geometry_msgs/msg/pose.h"
// Member `ko_tform_body`
// Member `vision_tform_body`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__EdgeSnapshotStance__init(message_memory);
}

void bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__EdgeSnapshotStance__fini(message_memory);
}

size_t bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__size_function__EdgeSnapshotStance__foot_states(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__FootState__Sequence * member =
    (const bosdyn_msgs__msg__FootState__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__get_const_function__EdgeSnapshotStance__foot_states(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__FootState__Sequence * member =
    (const bosdyn_msgs__msg__FootState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__get_function__EdgeSnapshotStance__foot_states(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__FootState__Sequence * member =
    (bosdyn_msgs__msg__FootState__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__fetch_function__EdgeSnapshotStance__foot_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__FootState * item =
    ((const bosdyn_msgs__msg__FootState *)
    bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__get_const_function__EdgeSnapshotStance__foot_states(untyped_member, index));
  bosdyn_msgs__msg__FootState * value =
    (bosdyn_msgs__msg__FootState *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__assign_function__EdgeSnapshotStance__foot_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__FootState * item =
    ((bosdyn_msgs__msg__FootState *)
    bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__get_function__EdgeSnapshotStance__foot_states(untyped_member, index));
  const bosdyn_msgs__msg__FootState * value =
    (const bosdyn_msgs__msg__FootState *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__resize_function__EdgeSnapshotStance__foot_states(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__FootState__Sequence * member =
    (bosdyn_msgs__msg__FootState__Sequence *)(untyped_member);
  bosdyn_msgs__msg__FootState__Sequence__fini(member);
  return bosdyn_msgs__msg__FootState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_message_member_array[9] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeSnapshotStance, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeSnapshotStance, timestamp_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeSnapshotStance, foot_states),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__size_function__EdgeSnapshotStance__foot_states,  // size() function pointer
    bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__get_const_function__EdgeSnapshotStance__foot_states,  // get_const(index) function pointer
    bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__get_function__EdgeSnapshotStance__foot_states,  // get(index) function pointer
    bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__fetch_function__EdgeSnapshotStance__foot_states,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__assign_function__EdgeSnapshotStance__foot_states,  // assign(index, value) function pointer
    bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__resize_function__EdgeSnapshotStance__foot_states  // resize(index) function pointer
  },
  {
    "ko_tform_body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeSnapshotStance, ko_tform_body),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ko_tform_body_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeSnapshotStance, ko_tform_body_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vision_tform_body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeSnapshotStance, vision_tform_body),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vision_tform_body_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeSnapshotStance, vision_tform_body_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planar_ground",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeSnapshotStance, planar_ground),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planar_ground_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeSnapshotStance, planar_ground_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "EdgeSnapshotStance",  // message name
  9,  // number of fields
  sizeof(bosdyn_msgs__msg__EdgeSnapshotStance),
  bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_message_member_array,  // message members
  bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeSnapshotStance)() {
  bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FootState)();
  bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__EdgeSnapshotStance__rosidl_typesupport_introspection_c__EdgeSnapshotStance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
