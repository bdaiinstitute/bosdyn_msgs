// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ArmCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/arm_command_request_one_of_command__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/arm_command_request_one_of_command__functions.h"
#include "bosdyn_msgs/msg/detail/arm_command_request_one_of_command__struct.h"


// Include directives for member types
// Member `arm_cartesian_command`
#include "bosdyn_msgs/msg/arm_cartesian_command_request.h"
// Member `arm_cartesian_command`
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request__rosidl_typesupport_introspection_c.h"
// Member `arm_joint_move_command`
#include "bosdyn_msgs/msg/arm_joint_move_command_request.h"
// Member `arm_joint_move_command`
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_request__rosidl_typesupport_introspection_c.h"
// Member `named_arm_position_command`
#include "bosdyn_msgs/msg/named_arm_positions_command_request.h"
// Member `named_arm_position_command`
#include "bosdyn_msgs/msg/detail/named_arm_positions_command_request__rosidl_typesupport_introspection_c.h"
// Member `arm_velocity_command`
#include "bosdyn_msgs/msg/arm_velocity_command_request.h"
// Member `arm_velocity_command`
#include "bosdyn_msgs/msg/detail/arm_velocity_command_request__rosidl_typesupport_introspection_c.h"
// Member `arm_gaze_command`
#include "bosdyn_msgs/msg/gaze_command_request.h"
// Member `arm_gaze_command`
#include "bosdyn_msgs/msg/detail/gaze_command_request__rosidl_typesupport_introspection_c.h"
// Member `arm_stop_command`
#include "bosdyn_msgs/msg/arm_stop_command_request.h"
// Member `arm_stop_command`
#include "bosdyn_msgs/msg/detail/arm_stop_command_request__rosidl_typesupport_introspection_c.h"
// Member `arm_drag_command`
#include "bosdyn_msgs/msg/arm_drag_command_request.h"
// Member `arm_drag_command`
#include "bosdyn_msgs/msg/detail/arm_drag_command_request__rosidl_typesupport_introspection_c.h"
// Member `arm_impedance_command`
#include "bosdyn_msgs/msg/arm_impedance_command_request.h"
// Member `arm_impedance_command`
#include "bosdyn_msgs/msg/detail/arm_impedance_command_request__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__init(message_memory);
}

void bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_member_array[9] = {
  {
    "arm_cartesian_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand, arm_cartesian_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_joint_move_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand, arm_joint_move_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "named_arm_position_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand, named_arm_position_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_velocity_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand, arm_velocity_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_gaze_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand, arm_gaze_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_stop_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand, arm_stop_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_drag_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand, arm_drag_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_impedance_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand, arm_impedance_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand, command_choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ArmCommandRequestOneOfCommand",  // message name
  9,  // number of fields
  sizeof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand),
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_member_array,  // message members
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmCommandRequestOneOfCommand)() {
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmCartesianCommandRequest)();
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmJointMoveCommandRequest)();
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NamedArmPositionsCommandRequest)();
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmVelocityCommandRequest)();
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, GazeCommandRequest)();
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmStopCommandRequest)();
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmDragCommandRequest)();
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ArmImpedanceCommandRequest)();
  if (!bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__rosidl_typesupport_introspection_c__ArmCommandRequestOneOfCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
