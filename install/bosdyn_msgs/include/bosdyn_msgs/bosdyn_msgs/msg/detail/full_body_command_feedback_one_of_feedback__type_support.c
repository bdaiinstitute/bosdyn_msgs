// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/FullBodyCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/full_body_command_feedback_one_of_feedback__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/full_body_command_feedback_one_of_feedback__functions.h"
#include "bosdyn_msgs/msg/detail/full_body_command_feedback_one_of_feedback__struct.h"


// Include directives for member types
// Member `stop_feedback`
#include "bosdyn_msgs/msg/stop_command_feedback.h"
// Member `stop_feedback`
#include "bosdyn_msgs/msg/detail/stop_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `freeze_feedback`
#include "bosdyn_msgs/msg/freeze_command_feedback.h"
// Member `freeze_feedback`
#include "bosdyn_msgs/msg/detail/freeze_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `selfright_feedback`
#include "bosdyn_msgs/msg/self_right_command_feedback.h"
// Member `selfright_feedback`
#include "bosdyn_msgs/msg/detail/self_right_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `safe_power_off_feedback`
#include "bosdyn_msgs/msg/safe_power_off_command_feedback.h"
// Member `safe_power_off_feedback`
#include "bosdyn_msgs/msg/detail/safe_power_off_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `battery_change_pose_feedback`
#include "bosdyn_msgs/msg/battery_change_pose_command_feedback.h"
// Member `battery_change_pose_feedback`
#include "bosdyn_msgs/msg/detail/battery_change_pose_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `payload_estimation_feedback`
#include "bosdyn_msgs/msg/payload_estimation_command_feedback.h"
// Member `payload_estimation_feedback`
#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `constrained_manipulation_feedback`
#include "bosdyn_msgs/msg/constrained_manipulation_command_feedback.h"
// Member `constrained_manipulation_feedback`
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_feedback__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__init(message_memory);
}

void bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_member_array[8] = {
  {
    "stop_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback, stop_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "freeze_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback, freeze_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "selfright_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback, selfright_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safe_power_off_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback, safe_power_off_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_change_pose_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback, battery_change_pose_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "payload_estimation_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback, payload_estimation_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "constrained_manipulation_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback, constrained_manipulation_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback_choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback, feedback_choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "FullBodyCommandFeedbackOneOfFeedback",  // message name
  8,  // number of fields
  sizeof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback),
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_member_array,  // message members
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FullBodyCommandFeedbackOneOfFeedback)() {
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StopCommandFeedback)();
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FreezeCommandFeedback)();
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SelfRightCommandFeedback)();
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SafePowerOffCommandFeedback)();
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, BatteryChangePoseCommandFeedback)();
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PayloadEstimationCommandFeedback)();
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ConstrainedManipulationCommandFeedback)();
  if (!bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__FullBodyCommandFeedbackOneOfFeedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
