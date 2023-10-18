// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapper.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/action_wrapper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'robot_body_sit'
#include "bosdyn_msgs/msg/detail/action_wrapper_robot_body_sit__traits.hpp"
// Member 'robot_body_pose'
#include "bosdyn_msgs/msg/detail/action_wrapper_robot_body_pose__traits.hpp"
// Member 'spot_cam_led'
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_led__traits.hpp"
// Member 'spot_cam_ptz'
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_ptz__traits.hpp"
// Member 'arm_sensor_pointing'
#include "bosdyn_msgs/msg/detail/action_wrapper_arm_sensor_pointing__traits.hpp"
// Member 'spot_cam_alignment'
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment__traits.hpp"
// Member 'gripper_camera_params'
#include "bosdyn_msgs/msg/detail/action_wrapper_gripper_camera_params__traits.hpp"
// Member 'gripper_command'
#include "bosdyn_msgs/msg/detail/action_wrapper_gripper_command__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionWrapper & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_body_sit
  {
    out << "robot_body_sit: ";
    to_flow_style_yaml(msg.robot_body_sit, out);
    out << ", ";
  }

  // member: robot_body_sit_is_set
  {
    out << "robot_body_sit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_body_sit_is_set, out);
    out << ", ";
  }

  // member: robot_body_pose
  {
    out << "robot_body_pose: ";
    to_flow_style_yaml(msg.robot_body_pose, out);
    out << ", ";
  }

  // member: robot_body_pose_is_set
  {
    out << "robot_body_pose_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_body_pose_is_set, out);
    out << ", ";
  }

  // member: spot_cam_led
  {
    out << "spot_cam_led: ";
    to_flow_style_yaml(msg.spot_cam_led, out);
    out << ", ";
  }

  // member: spot_cam_led_is_set
  {
    out << "spot_cam_led_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.spot_cam_led_is_set, out);
    out << ", ";
  }

  // member: spot_cam_ptz
  {
    out << "spot_cam_ptz: ";
    to_flow_style_yaml(msg.spot_cam_ptz, out);
    out << ", ";
  }

  // member: spot_cam_ptz_is_set
  {
    out << "spot_cam_ptz_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.spot_cam_ptz_is_set, out);
    out << ", ";
  }

  // member: arm_sensor_pointing
  {
    out << "arm_sensor_pointing: ";
    to_flow_style_yaml(msg.arm_sensor_pointing, out);
    out << ", ";
  }

  // member: arm_sensor_pointing_is_set
  {
    out << "arm_sensor_pointing_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_sensor_pointing_is_set, out);
    out << ", ";
  }

  // member: spot_cam_alignment
  {
    out << "spot_cam_alignment: ";
    to_flow_style_yaml(msg.spot_cam_alignment, out);
    out << ", ";
  }

  // member: spot_cam_alignment_is_set
  {
    out << "spot_cam_alignment_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.spot_cam_alignment_is_set, out);
    out << ", ";
  }

  // member: gripper_camera_params
  {
    out << "gripper_camera_params: ";
    to_flow_style_yaml(msg.gripper_camera_params, out);
    out << ", ";
  }

  // member: gripper_camera_params_is_set
  {
    out << "gripper_camera_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_camera_params_is_set, out);
    out << ", ";
  }

  // member: gripper_command
  {
    out << "gripper_command: ";
    to_flow_style_yaml(msg.gripper_command, out);
    out << ", ";
  }

  // member: gripper_command_is_set
  {
    out << "gripper_command_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_command_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionWrapper & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_body_sit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_body_sit:\n";
    to_block_style_yaml(msg.robot_body_sit, out, indentation + 2);
  }

  // member: robot_body_sit_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_body_sit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_body_sit_is_set, out);
    out << "\n";
  }

  // member: robot_body_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_body_pose:\n";
    to_block_style_yaml(msg.robot_body_pose, out, indentation + 2);
  }

  // member: robot_body_pose_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_body_pose_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_body_pose_is_set, out);
    out << "\n";
  }

  // member: spot_cam_led
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spot_cam_led:\n";
    to_block_style_yaml(msg.spot_cam_led, out, indentation + 2);
  }

  // member: spot_cam_led_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spot_cam_led_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.spot_cam_led_is_set, out);
    out << "\n";
  }

  // member: spot_cam_ptz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spot_cam_ptz:\n";
    to_block_style_yaml(msg.spot_cam_ptz, out, indentation + 2);
  }

  // member: spot_cam_ptz_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spot_cam_ptz_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.spot_cam_ptz_is_set, out);
    out << "\n";
  }

  // member: arm_sensor_pointing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_sensor_pointing:\n";
    to_block_style_yaml(msg.arm_sensor_pointing, out, indentation + 2);
  }

  // member: arm_sensor_pointing_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_sensor_pointing_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_sensor_pointing_is_set, out);
    out << "\n";
  }

  // member: spot_cam_alignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spot_cam_alignment:\n";
    to_block_style_yaml(msg.spot_cam_alignment, out, indentation + 2);
  }

  // member: spot_cam_alignment_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spot_cam_alignment_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.spot_cam_alignment_is_set, out);
    out << "\n";
  }

  // member: gripper_camera_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_camera_params:\n";
    to_block_style_yaml(msg.gripper_camera_params, out, indentation + 2);
  }

  // member: gripper_camera_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_camera_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_camera_params_is_set, out);
    out << "\n";
  }

  // member: gripper_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_command:\n";
    to_block_style_yaml(msg.gripper_command, out, indentation + 2);
  }

  // member: gripper_command_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_command_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_command_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionWrapper & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace bosdyn_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bosdyn_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bosdyn_msgs::msg::ActionWrapper & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ActionWrapper & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ActionWrapper>()
{
  return "bosdyn_msgs::msg::ActionWrapper";
}

template<>
inline const char * name<bosdyn_msgs::msg::ActionWrapper>()
{
  return "bosdyn_msgs/msg/ActionWrapper";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ActionWrapper>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ActionWrapperArmSensorPointing>::value && has_fixed_size<bosdyn_msgs::msg::ActionWrapperGripperCameraParams>::value && has_fixed_size<bosdyn_msgs::msg::ActionWrapperGripperCommand>::value && has_fixed_size<bosdyn_msgs::msg::ActionWrapperRobotBodyPose>::value && has_fixed_size<bosdyn_msgs::msg::ActionWrapperRobotBodySit>::value && has_fixed_size<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment>::value && has_fixed_size<bosdyn_msgs::msg::ActionWrapperSpotCamLed>::value && has_fixed_size<bosdyn_msgs::msg::ActionWrapperSpotCamPtz>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ActionWrapper>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ActionWrapperArmSensorPointing>::value && has_bounded_size<bosdyn_msgs::msg::ActionWrapperGripperCameraParams>::value && has_bounded_size<bosdyn_msgs::msg::ActionWrapperGripperCommand>::value && has_bounded_size<bosdyn_msgs::msg::ActionWrapperRobotBodyPose>::value && has_bounded_size<bosdyn_msgs::msg::ActionWrapperRobotBodySit>::value && has_bounded_size<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment>::value && has_bounded_size<bosdyn_msgs::msg::ActionWrapperSpotCamLed>::value && has_bounded_size<bosdyn_msgs::msg::ActionWrapperSpotCamPtz>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ActionWrapper>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER__TRAITS_HPP_
