// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ActionAfterOneOfAction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/action_after_one_of_action__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/action_after_one_of_action__functions.h"
#include "bosdyn_msgs/msg/detail/action_after_one_of_action__struct.h"


// Include directives for member types
// Member `record_event`
#include "bosdyn_msgs/msg/action_after_record_event.h"
// Member `record_event`
#include "bosdyn_msgs/msg/detail/action_after_record_event__rosidl_typesupport_introspection_c.h"
// Member `auto_return`
#include "bosdyn_msgs/msg/action_after_auto_return.h"
// Member `auto_return`
#include "bosdyn_msgs/msg/detail/action_after_auto_return__rosidl_typesupport_introspection_c.h"
// Member `controlled_motors_off`
#include "bosdyn_msgs/msg/action_after_controlled_motors_off.h"
// Member `controlled_motors_off`
#include "bosdyn_msgs/msg/detail/action_after_controlled_motors_off__rosidl_typesupport_introspection_c.h"
// Member `immediate_robot_off`
#include "bosdyn_msgs/msg/action_after_immediate_robot_off.h"
// Member `immediate_robot_off`
#include "bosdyn_msgs/msg/detail/action_after_immediate_robot_off__rosidl_typesupport_introspection_c.h"
// Member `lease_stale`
#include "bosdyn_msgs/msg/action_after_lease_stale.h"
// Member `lease_stale`
#include "bosdyn_msgs/msg/detail/action_after_lease_stale__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ActionAfterOneOfAction__init(message_memory);
}

void bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ActionAfterOneOfAction__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_message_member_array[6] = {
  {
    "record_event",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionAfterOneOfAction, record_event),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_return",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionAfterOneOfAction, auto_return),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "controlled_motors_off",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionAfterOneOfAction, controlled_motors_off),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "immediate_robot_off",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionAfterOneOfAction, immediate_robot_off),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease_stale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionAfterOneOfAction, lease_stale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action_choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionAfterOneOfAction, action_choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ActionAfterOneOfAction",  // message name
  6,  // number of fields
  sizeof(bosdyn_msgs__msg__ActionAfterOneOfAction),
  bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_message_member_array,  // message members
  bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionAfterOneOfAction)() {
  bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionAfterRecordEvent)();
  bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionAfterAutoReturn)();
  bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionAfterControlledMotorsOff)();
  bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionAfterImmediateRobotOff)();
  bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionAfterLeaseStale)();
  if (!bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ActionAfterOneOfAction__rosidl_typesupport_introspection_c__ActionAfterOneOfAction_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
