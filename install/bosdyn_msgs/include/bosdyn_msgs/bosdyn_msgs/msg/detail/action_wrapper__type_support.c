// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ActionWrapper.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/action_wrapper__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/action_wrapper__functions.h"
#include "bosdyn_msgs/msg/detail/action_wrapper__struct.h"


// Include directives for member types
// Member `robot_body_sit`
#include "bosdyn_msgs/msg/action_wrapper_robot_body_sit.h"
// Member `robot_body_sit`
#include "bosdyn_msgs/msg/detail/action_wrapper_robot_body_sit__rosidl_typesupport_introspection_c.h"
// Member `robot_body_pose`
#include "bosdyn_msgs/msg/action_wrapper_robot_body_pose.h"
// Member `robot_body_pose`
#include "bosdyn_msgs/msg/detail/action_wrapper_robot_body_pose__rosidl_typesupport_introspection_c.h"
// Member `spot_cam_led`
#include "bosdyn_msgs/msg/action_wrapper_spot_cam_led.h"
// Member `spot_cam_led`
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_led__rosidl_typesupport_introspection_c.h"
// Member `spot_cam_ptz`
#include "bosdyn_msgs/msg/action_wrapper_spot_cam_ptz.h"
// Member `spot_cam_ptz`
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_ptz__rosidl_typesupport_introspection_c.h"
// Member `arm_sensor_pointing`
#include "bosdyn_msgs/msg/action_wrapper_arm_sensor_pointing.h"
// Member `arm_sensor_pointing`
#include "bosdyn_msgs/msg/detail/action_wrapper_arm_sensor_pointing__rosidl_typesupport_introspection_c.h"
// Member `spot_cam_alignment`
#include "bosdyn_msgs/msg/action_wrapper_spot_cam_alignment.h"
// Member `spot_cam_alignment`
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment__rosidl_typesupport_introspection_c.h"
// Member `gripper_camera_params`
#include "bosdyn_msgs/msg/action_wrapper_gripper_camera_params.h"
// Member `gripper_camera_params`
#include "bosdyn_msgs/msg/detail/action_wrapper_gripper_camera_params__rosidl_typesupport_introspection_c.h"
// Member `gripper_command`
#include "bosdyn_msgs/msg/action_wrapper_gripper_command.h"
// Member `gripper_command`
#include "bosdyn_msgs/msg/detail/action_wrapper_gripper_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ActionWrapper__init(message_memory);
}

void bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ActionWrapper__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_member_array[16] = {
  {
    "robot_body_sit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, robot_body_sit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_body_sit_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, robot_body_sit_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_body_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, robot_body_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_body_pose_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, robot_body_pose_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spot_cam_led",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, spot_cam_led),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spot_cam_led_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, spot_cam_led_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spot_cam_ptz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, spot_cam_ptz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spot_cam_ptz_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, spot_cam_ptz_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_sensor_pointing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, arm_sensor_pointing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_sensor_pointing_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, arm_sensor_pointing_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spot_cam_alignment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, spot_cam_alignment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spot_cam_alignment_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, spot_cam_alignment_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper_camera_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, gripper_camera_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper_camera_params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, gripper_camera_params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, gripper_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper_command_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapper, gripper_command_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ActionWrapper",  // message name
  16,  // number of fields
  sizeof(bosdyn_msgs__msg__ActionWrapper),
  bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_member_array,  // message members
  bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionWrapper)() {
  bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionWrapperRobotBodySit)();
  bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionWrapperRobotBodyPose)();
  bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionWrapperSpotCamLed)();
  bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionWrapperSpotCamPtz)();
  bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionWrapperArmSensorPointing)();
  bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionWrapperSpotCamAlignment)();
  bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionWrapperGripperCameraParams)();
  bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionWrapperGripperCommand)();
  if (!bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ActionWrapper__rosidl_typesupport_introspection_c__ActionWrapper_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
