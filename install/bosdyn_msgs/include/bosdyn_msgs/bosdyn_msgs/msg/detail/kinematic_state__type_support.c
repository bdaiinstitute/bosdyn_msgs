// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/kinematic_state__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/kinematic_state__functions.h"
#include "bosdyn_msgs/msg/detail/kinematic_state__struct.h"


// Include directives for member types
// Member `joint_states`
#include "bosdyn_msgs/msg/joint_state.h"
// Member `joint_states`
#include "bosdyn_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"
// Member `acquisition_timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `acquisition_timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `transforms_snapshot`
#include "bosdyn_msgs/msg/frame_tree_snapshot.h"
// Member `transforms_snapshot`
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__rosidl_typesupport_introspection_c.h"
// Member `velocity_of_body_in_vision`
// Member `velocity_of_body_in_odom`
#include "geometry_msgs/msg/twist.h"
// Member `velocity_of_body_in_vision`
// Member `velocity_of_body_in_odom`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__KinematicState__init(message_memory);
}

void bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__KinematicState__fini(message_memory);
}

size_t bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__size_function__KinematicState__joint_states(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__JointState__Sequence * member =
    (const bosdyn_msgs__msg__JointState__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__get_const_function__KinematicState__joint_states(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__JointState__Sequence * member =
    (const bosdyn_msgs__msg__JointState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__get_function__KinematicState__joint_states(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__JointState__Sequence * member =
    (bosdyn_msgs__msg__JointState__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__fetch_function__KinematicState__joint_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__JointState * item =
    ((const bosdyn_msgs__msg__JointState *)
    bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__get_const_function__KinematicState__joint_states(untyped_member, index));
  bosdyn_msgs__msg__JointState * value =
    (bosdyn_msgs__msg__JointState *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__assign_function__KinematicState__joint_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__JointState * item =
    ((bosdyn_msgs__msg__JointState *)
    bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__get_function__KinematicState__joint_states(untyped_member, index));
  const bosdyn_msgs__msg__JointState * value =
    (const bosdyn_msgs__msg__JointState *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__resize_function__KinematicState__joint_states(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__JointState__Sequence * member =
    (bosdyn_msgs__msg__JointState__Sequence *)(untyped_member);
  bosdyn_msgs__msg__JointState__Sequence__fini(member);
  return bosdyn_msgs__msg__JointState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_member_array[9] = {
  {
    "joint_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__KinematicState, joint_states),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__size_function__KinematicState__joint_states,  // size() function pointer
    bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__get_const_function__KinematicState__joint_states,  // get_const(index) function pointer
    bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__get_function__KinematicState__joint_states,  // get(index) function pointer
    bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__fetch_function__KinematicState__joint_states,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__assign_function__KinematicState__joint_states,  // assign(index, value) function pointer
    bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__resize_function__KinematicState__joint_states  // resize(index) function pointer
  },
  {
    "acquisition_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__KinematicState, acquisition_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acquisition_timestamp_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__KinematicState, acquisition_timestamp_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transforms_snapshot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__KinematicState, transforms_snapshot),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__KinematicState, transforms_snapshot_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_of_body_in_vision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__KinematicState, velocity_of_body_in_vision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_of_body_in_vision_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__KinematicState, velocity_of_body_in_vision_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_of_body_in_odom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__KinematicState, velocity_of_body_in_odom),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_of_body_in_odom_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__KinematicState, velocity_of_body_in_odom_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "KinematicState",  // message name
  9,  // number of fields
  sizeof(bosdyn_msgs__msg__KinematicState),
  bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_member_array,  // message members
  bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KinematicState)() {
  bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, JointState)();
  bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FrameTreeSnapshot)();
  bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
