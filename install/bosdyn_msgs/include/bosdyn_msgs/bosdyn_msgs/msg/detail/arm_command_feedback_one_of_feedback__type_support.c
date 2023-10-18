// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ArmCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/arm_command_feedback_one_of_feedback__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/arm_command_feedback_one_of_feedback__functions.h"
#include "bosdyn_msgs/msg/detail/arm_command_feedback_one_of_feedback__struct.h"


// Include directives for member types
// Member `arm_cartesian_feedback`
#include "bosdyn_msgs/msg/arm_cartesian_command_feedback.h"
// Member `arm_cartesian_feedback`
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `arm_joint_move_feedback`
#include "bosdyn_msgs/msg/arm_joint_move_command_feedback.h"
// Member `arm_joint_move_feedback`
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `named_arm_position_feedback`
#include "bosdyn_msgs/msg/named_arm_positions_command_feedback.h"
// Member `named_arm_position_feedback`
#include "bosdyn_msgs/msg/detail/named_arm_positions_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `arm_velocity_feedback`
#include "bosdyn_msgs/msg/arm_velocity_command_feedback.h"
// Member `arm_velocity_feedback`
#include "bosdyn_msgs/msg/detail/arm_velocity_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `arm_gaze_feedback`
#include "bosdyn_msgs/msg/gaze_command_feedback.h"
// Member `arm_gaze_feedback`
#include "bosdyn_msgs/msg/detail/gaze_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `arm_stop_feedback`
#include "bosdyn_msgs/msg/arm_stop_command_feedback.h"
// Member `arm_stop_feedback`
#include "bosdyn_msgs/msg/detail/arm_stop_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `arm_drag_feedback`
#include "bosdyn_msgs/msg/arm_drag_command_feedback.h"
// Member `arm_drag_feedback`
#include "bosdyn_msgs/msg/detail/arm_drag_command_feedback__rosidl_typesupport_introspection_c.h"
// Member `arm_impedance_feedback`
#include "bosdyn_msgs/msg/arm_impedance_command_feedback.h"
// Member `arm_impedance_feedback`
#include "bosdyn_msgs/msg/detail/arm_impedance_command_feedback__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__init(message_memory);
}

void bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_member_array[9] = {
  {
    "arm_cartesian_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback, arm_cartesian_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_joint_move_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback, arm_joint_move_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "named_arm_position_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback, named_arm_position_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_velocity_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback, arm_velocity_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_gaze_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback, arm_gaze_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_stop_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback, arm_stop_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_drag_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback, arm_drag_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_impedance_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback, arm_impedance_feedback),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback, feedback_choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ArmCommandFeedbackOneOfFeedback",  // message name
  9,  // number of fields
  sizeof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback),
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_member_array,  // message members
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmCommandFeedbackOneOfFeedback)() {
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmCartesianCommandFeedback)();
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmJointMoveCommandFeedback)();
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NamedArmPositionsCommandFeedback)();
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmVelocityCommandFeedback)();
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, GazeCommandFeedback)();
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmStopCommandFeedback)();
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmDragCommandFeedback)();
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmImpedanceCommandFeedback)();
  if (!bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__rosidl_typesupport_introspection_c__ArmCommandFeedbackOneOfFeedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
