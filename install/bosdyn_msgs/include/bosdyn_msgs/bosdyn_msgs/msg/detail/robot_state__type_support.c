// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/robot_state__functions.h"
#include "bosdyn_msgs/msg/detail/robot_state__struct.h"


// Include directives for member types
// Member `power_state`
#include "bosdyn_msgs/msg/power_state.h"
// Member `power_state`
#include "bosdyn_msgs/msg/detail/power_state__rosidl_typesupport_introspection_c.h"
// Member `battery_states`
#include "bosdyn_msgs/msg/battery_state.h"
// Member `battery_states`
#include "bosdyn_msgs/msg/detail/battery_state__rosidl_typesupport_introspection_c.h"
// Member `comms_states`
#include "bosdyn_msgs/msg/comms_state.h"
// Member `comms_states`
#include "bosdyn_msgs/msg/detail/comms_state__rosidl_typesupport_introspection_c.h"
// Member `system_fault_state`
#include "bosdyn_msgs/msg/system_fault_state.h"
// Member `system_fault_state`
#include "bosdyn_msgs/msg/detail/system_fault_state__rosidl_typesupport_introspection_c.h"
// Member `estop_states`
#include "bosdyn_msgs/msg/e_stop_state.h"
// Member `estop_states`
#include "bosdyn_msgs/msg/detail/e_stop_state__rosidl_typesupport_introspection_c.h"
// Member `kinematic_state`
#include "bosdyn_msgs/msg/kinematic_state.h"
// Member `kinematic_state`
#include "bosdyn_msgs/msg/detail/kinematic_state__rosidl_typesupport_introspection_c.h"
// Member `behavior_fault_state`
#include "bosdyn_msgs/msg/behavior_fault_state.h"
// Member `behavior_fault_state`
#include "bosdyn_msgs/msg/detail/behavior_fault_state__rosidl_typesupport_introspection_c.h"
// Member `foot_state`
#include "bosdyn_msgs/msg/foot_state.h"
// Member `foot_state`
#include "bosdyn_msgs/msg/detail/foot_state__rosidl_typesupport_introspection_c.h"
// Member `manipulator_state`
#include "bosdyn_msgs/msg/manipulator_state.h"
// Member `manipulator_state`
#include "bosdyn_msgs/msg/detail/manipulator_state__rosidl_typesupport_introspection_c.h"
// Member `service_fault_state`
#include "bosdyn_msgs/msg/service_fault_state.h"
// Member `service_fault_state`
#include "bosdyn_msgs/msg/detail/service_fault_state__rosidl_typesupport_introspection_c.h"
// Member `terrain_state`
#include "bosdyn_msgs/msg/terrain_state.h"
// Member `terrain_state`
#include "bosdyn_msgs/msg/detail/terrain_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__RobotState__init(message_memory);
}

void bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__RobotState__fini(message_memory);
}

size_t bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__battery_states(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__BatteryState__Sequence * member =
    (const bosdyn_msgs__msg__BatteryState__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__battery_states(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__BatteryState__Sequence * member =
    (const bosdyn_msgs__msg__BatteryState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__battery_states(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__BatteryState__Sequence * member =
    (bosdyn_msgs__msg__BatteryState__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__battery_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__BatteryState * item =
    ((const bosdyn_msgs__msg__BatteryState *)
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__battery_states(untyped_member, index));
  bosdyn_msgs__msg__BatteryState * value =
    (bosdyn_msgs__msg__BatteryState *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__battery_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__BatteryState * item =
    ((bosdyn_msgs__msg__BatteryState *)
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__battery_states(untyped_member, index));
  const bosdyn_msgs__msg__BatteryState * value =
    (const bosdyn_msgs__msg__BatteryState *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__battery_states(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__BatteryState__Sequence * member =
    (bosdyn_msgs__msg__BatteryState__Sequence *)(untyped_member);
  bosdyn_msgs__msg__BatteryState__Sequence__fini(member);
  return bosdyn_msgs__msg__BatteryState__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__comms_states(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__CommsState__Sequence * member =
    (const bosdyn_msgs__msg__CommsState__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__comms_states(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__CommsState__Sequence * member =
    (const bosdyn_msgs__msg__CommsState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__comms_states(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__CommsState__Sequence * member =
    (bosdyn_msgs__msg__CommsState__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__comms_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__CommsState * item =
    ((const bosdyn_msgs__msg__CommsState *)
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__comms_states(untyped_member, index));
  bosdyn_msgs__msg__CommsState * value =
    (bosdyn_msgs__msg__CommsState *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__comms_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__CommsState * item =
    ((bosdyn_msgs__msg__CommsState *)
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__comms_states(untyped_member, index));
  const bosdyn_msgs__msg__CommsState * value =
    (const bosdyn_msgs__msg__CommsState *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__comms_states(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__CommsState__Sequence * member =
    (bosdyn_msgs__msg__CommsState__Sequence *)(untyped_member);
  bosdyn_msgs__msg__CommsState__Sequence__fini(member);
  return bosdyn_msgs__msg__CommsState__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__estop_states(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__EStopState__Sequence * member =
    (const bosdyn_msgs__msg__EStopState__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__estop_states(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__EStopState__Sequence * member =
    (const bosdyn_msgs__msg__EStopState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__estop_states(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__EStopState__Sequence * member =
    (bosdyn_msgs__msg__EStopState__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__estop_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__EStopState * item =
    ((const bosdyn_msgs__msg__EStopState *)
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__estop_states(untyped_member, index));
  bosdyn_msgs__msg__EStopState * value =
    (bosdyn_msgs__msg__EStopState *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__estop_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__EStopState * item =
    ((bosdyn_msgs__msg__EStopState *)
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__estop_states(untyped_member, index));
  const bosdyn_msgs__msg__EStopState * value =
    (const bosdyn_msgs__msg__EStopState *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__estop_states(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__EStopState__Sequence * member =
    (bosdyn_msgs__msg__EStopState__Sequence *)(untyped_member);
  bosdyn_msgs__msg__EStopState__Sequence__fini(member);
  return bosdyn_msgs__msg__EStopState__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__foot_state(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__FootState__Sequence * member =
    (const bosdyn_msgs__msg__FootState__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__foot_state(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__FootState__Sequence * member =
    (const bosdyn_msgs__msg__FootState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__foot_state(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__FootState__Sequence * member =
    (bosdyn_msgs__msg__FootState__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__foot_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__FootState * item =
    ((const bosdyn_msgs__msg__FootState *)
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__foot_state(untyped_member, index));
  bosdyn_msgs__msg__FootState * value =
    (bosdyn_msgs__msg__FootState *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__foot_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__FootState * item =
    ((bosdyn_msgs__msg__FootState *)
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__foot_state(untyped_member, index));
  const bosdyn_msgs__msg__FootState * value =
    (const bosdyn_msgs__msg__FootState *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__foot_state(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__FootState__Sequence * member =
    (bosdyn_msgs__msg__FootState__Sequence *)(untyped_member);
  bosdyn_msgs__msg__FootState__Sequence__fini(member);
  return bosdyn_msgs__msg__FootState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[18] = {
  {
    "power_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, power_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "power_state_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, power_state_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, battery_states),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__battery_states,  // size() function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__battery_states,  // get_const(index) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__battery_states,  // get(index) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__battery_states,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__battery_states,  // assign(index, value) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__battery_states  // resize(index) function pointer
  },
  {
    "comms_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, comms_states),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__comms_states,  // size() function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__comms_states,  // get_const(index) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__comms_states,  // get(index) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__comms_states,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__comms_states,  // assign(index, value) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__comms_states  // resize(index) function pointer
  },
  {
    "system_fault_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, system_fault_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "system_fault_state_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, system_fault_state_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estop_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, estop_states),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__estop_states,  // size() function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__estop_states,  // get_const(index) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__estop_states,  // get(index) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__estop_states,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__estop_states,  // assign(index, value) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__estop_states  // resize(index) function pointer
  },
  {
    "kinematic_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, kinematic_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kinematic_state_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, kinematic_state_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "behavior_fault_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, behavior_fault_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "behavior_fault_state_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, behavior_fault_state_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, foot_state),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__foot_state,  // size() function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__foot_state,  // get_const(index) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__foot_state,  // get(index) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__foot_state,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__foot_state,  // assign(index, value) function pointer
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__foot_state  // resize(index) function pointer
  },
  {
    "manipulator_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, manipulator_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "manipulator_state_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, manipulator_state_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "service_fault_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, service_fault_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "service_fault_state_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, service_fault_state_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "terrain_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, terrain_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "terrain_state_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotState, terrain_state_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "RobotState",  // message name
  18,  // number of fields
  sizeof(bosdyn_msgs__msg__RobotState),
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array,  // message members
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RobotState)() {
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PowerState)();
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, BatteryState)();
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, CommsState)();
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SystemFaultState)();
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EStopState)();
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KinematicState)();
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, BehaviorFaultState)();
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FootState)();
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ManipulatorState)();
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ServiceFaultState)();
  bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, TerrainState)();
  if (!bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
