// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/FailureBehaviorOneOfDefaultBehavior.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/failure_behavior_one_of_default_behavior__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/failure_behavior_one_of_default_behavior__functions.h"
#include "bosdyn_msgs/msg/detail/failure_behavior_one_of_default_behavior__struct.h"


// Include directives for member types
// Member `safe_power_off`
#include "bosdyn_msgs/msg/failure_behavior_safe_power_off.h"
// Member `safe_power_off`
#include "bosdyn_msgs/msg/detail/failure_behavior_safe_power_off__rosidl_typesupport_introspection_c.h"
// Member `proceed_if_able`
#include "bosdyn_msgs/msg/failure_behavior_proceed_if_able.h"
// Member `proceed_if_able`
#include "bosdyn_msgs/msg/detail/failure_behavior_proceed_if_able__rosidl_typesupport_introspection_c.h"
// Member `return_to_start_and_try_again_later`
#include "bosdyn_msgs/msg/failure_behavior_return_to_start_and_try_again_later.h"
// Member `return_to_start_and_try_again_later`
#include "bosdyn_msgs/msg/detail/failure_behavior_return_to_start_and_try_again_later__rosidl_typesupport_introspection_c.h"
// Member `return_to_start_and_terminate`
#include "bosdyn_msgs/msg/failure_behavior_return_to_start_and_terminate.h"
// Member `return_to_start_and_terminate`
#include "bosdyn_msgs/msg/detail/failure_behavior_return_to_start_and_terminate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__init(message_memory);
}

void bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_message_member_array[5] = {
  {
    "safe_power_off",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior, safe_power_off),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "proceed_if_able",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior, proceed_if_able),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "return_to_start_and_try_again_later",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior, return_to_start_and_try_again_later),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "return_to_start_and_terminate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior, return_to_start_and_terminate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "default_behavior_choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior, default_behavior_choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "FailureBehaviorOneOfDefaultBehavior",  // message name
  5,  // number of fields
  sizeof(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior),
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_message_member_array,  // message members
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FailureBehaviorOneOfDefaultBehavior)() {
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FailureBehaviorSafePowerOff)();
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FailureBehaviorProceedIfAble)();
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FailureBehaviorReturnToStartAndTryAgainLater)();
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FailureBehaviorReturnToStartAndTerminate)();
  if (!bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__rosidl_typesupport_introspection_c__FailureBehaviorOneOfDefaultBehavior_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
