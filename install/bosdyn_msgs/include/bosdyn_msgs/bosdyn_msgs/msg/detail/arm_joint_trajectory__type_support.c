// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ArmJointTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory__functions.h"
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory__struct.h"


// Include directives for member types
// Member `points`
#include "bosdyn_msgs/msg/arm_joint_trajectory_point.h"
// Member `points`
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory_point__rosidl_typesupport_introspection_c.h"
// Member `reference_time`
#include "builtin_interfaces/msg/time.h"
// Member `reference_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ArmJointTrajectory__init(message_memory);
}

void bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ArmJointTrajectory__fini(message_memory);
}

size_t bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__size_function__ArmJointTrajectory__points(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence * member =
    (const bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__get_const_function__ArmJointTrajectory__points(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence * member =
    (const bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__get_function__ArmJointTrajectory__points(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence * member =
    (bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__fetch_function__ArmJointTrajectory__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__ArmJointTrajectoryPoint * item =
    ((const bosdyn_msgs__msg__ArmJointTrajectoryPoint *)
    bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__get_const_function__ArmJointTrajectory__points(untyped_member, index));
  bosdyn_msgs__msg__ArmJointTrajectoryPoint * value =
    (bosdyn_msgs__msg__ArmJointTrajectoryPoint *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__assign_function__ArmJointTrajectory__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__ArmJointTrajectoryPoint * item =
    ((bosdyn_msgs__msg__ArmJointTrajectoryPoint *)
    bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__get_function__ArmJointTrajectory__points(untyped_member, index));
  const bosdyn_msgs__msg__ArmJointTrajectoryPoint * value =
    (const bosdyn_msgs__msg__ArmJointTrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__resize_function__ArmJointTrajectory__points(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence * member =
    (bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence *)(untyped_member);
  bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence__fini(member);
  return bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_message_member_array[7] = {
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmJointTrajectory, points),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__size_function__ArmJointTrajectory__points,  // size() function pointer
    bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__get_const_function__ArmJointTrajectory__points,  // get_const(index) function pointer
    bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__get_function__ArmJointTrajectory__points,  // get(index) function pointer
    bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__fetch_function__ArmJointTrajectory__points,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__assign_function__ArmJointTrajectory__points,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__resize_function__ArmJointTrajectory__points  // resize(index) function pointer
  },
  {
    "reference_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmJointTrajectory, reference_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_time_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmJointTrajectory, reference_time_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maximum_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmJointTrajectory, maximum_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maximum_velocity_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmJointTrajectory, maximum_velocity_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maximum_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmJointTrajectory, maximum_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maximum_acceleration_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmJointTrajectory, maximum_acceleration_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ArmJointTrajectory",  // message name
  7,  // number of fields
  sizeof(bosdyn_msgs__msg__ArmJointTrajectory),
  bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_message_member_array,  // message members
  bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmJointTrajectory)() {
  bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmJointTrajectoryPoint)();
  bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ArmJointTrajectory__rosidl_typesupport_introspection_c__ArmJointTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
