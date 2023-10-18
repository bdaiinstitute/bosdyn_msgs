// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/MobilityCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/mobility_command_feedback_one_of_feedback__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/mobility_command_feedback_one_of_feedback__functions.h"
#include "bosdyn_msgs/msg/detail/mobility_command_feedback_one_of_feedback__struct.h"


// Include directives for member types
// Member `se2_trajectory_feedback`
#include "bosdyn_msgs/msg/se2_trajectory_command_feedback.h"
// Member `se2_trajectory_feedback`
#include "bosdyn_msgs/msg/detail/se2_trajectory_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `se2_velocity_feedback`
#include "bosdyn_msgs/msg/se2_velocity_command_feedback.h"
// Member `se2_velocity_feedback`
#include "bosdyn_msgs/msg/detail/se2_velocity_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `sit_feedback`
#include "bosdyn_msgs/msg/sit_command_feedback.h"
// Member `sit_feedback`
#include "bosdyn_msgs/msg/detail/sit_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `stand_feedback`
#include "bosdyn_msgs/msg/stand_command_feedback.h"
// Member `stand_feedback`
#include "bosdyn_msgs/msg/detail/stand_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `stance_feedback`
#include "bosdyn_msgs/msg/stance_command_feedback.h"
// Member `stance_feedback`
#include "bosdyn_msgs/msg/detail/stance_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `stop_feedback`
#include "bosdyn_msgs/msg/stop_command_feedback.h"
// Member `stop_feedback`
#include "bosdyn_msgs/msg/detail/stop_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `follow_arm_feedback`
#include "bosdyn_msgs/msg/follow_arm_command_feedback.h"
// Member `follow_arm_feedback`
#include "bosdyn_msgs/msg/detail/follow_arm_command_feedback__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__init(message_memory);
}

void bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_member_array[8] = {
  {
    "se2_trajectory_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback, se2_trajectory_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "se2_velocity_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback, se2_velocity_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sit_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback, sit_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stand_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback, stand_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stance_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback, stance_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback, stop_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "follow_arm_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback, follow_arm_feedback),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback, feedback_choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "MobilityCommandFeedbackOneOfFeedback",  // message name
  8,  // number of fields
  sizeof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback),
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_member_array,  // message members
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, MobilityCommandFeedbackOneOfFeedback)() {
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SE2TrajectoryCommandFeedback)();
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SE2VelocityCommandFeedback)();
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SitCommandFeedback)();
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StandCommandFeedback)();
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StanceCommandFeedback)();
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StopCommandFeedback)();
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FollowArmCommandFeedback)();
  if (!bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__MobilityCommandFeedbackOneOfFeedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
