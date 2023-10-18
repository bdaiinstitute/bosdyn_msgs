// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperArmSensorPointing.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ARM_SENSOR_POINTING__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ARM_SENSOR_POINTING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/action_wrapper_arm_sensor_pointing__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_trajectory'
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory__traits.hpp"
// Member 'wrist_tform_tool'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'pose_trajectory_rt_target'
#include "bosdyn_msgs/msg/detail/se3_trajectory__traits.hpp"
// Member 'target_tform_measured_offset'
#include "bosdyn_msgs/msg/detail/se2_pose__traits.hpp"
// Member 'body_assist_params'
#include "bosdyn_msgs/msg/detail/body_control_params_body_assist_for_manipulation__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionWrapperArmSensorPointing & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_trajectory
  {
    out << "joint_trajectory: ";
    to_flow_style_yaml(msg.joint_trajectory, out);
    out << ", ";
  }

  // member: joint_trajectory_is_set
  {
    out << "joint_trajectory_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_trajectory_is_set, out);
    out << ", ";
  }

  // member: wrist_tform_tool
  {
    out << "wrist_tform_tool: ";
    to_flow_style_yaml(msg.wrist_tform_tool, out);
    out << ", ";
  }

  // member: wrist_tform_tool_is_set
  {
    out << "wrist_tform_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_tform_tool_is_set, out);
    out << ", ";
  }

  // member: pose_trajectory_rt_target
  {
    out << "pose_trajectory_rt_target: ";
    to_flow_style_yaml(msg.pose_trajectory_rt_target, out);
    out << ", ";
  }

  // member: pose_trajectory_rt_target_is_set
  {
    out << "pose_trajectory_rt_target_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_trajectory_rt_target_is_set, out);
    out << ", ";
  }

  // member: target_tform_measured_offset
  {
    out << "target_tform_measured_offset: ";
    to_flow_style_yaml(msg.target_tform_measured_offset, out);
    out << ", ";
  }

  // member: target_tform_measured_offset_is_set
  {
    out << "target_tform_measured_offset_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_tform_measured_offset_is_set, out);
    out << ", ";
  }

  // member: body_assist_params
  {
    out << "body_assist_params: ";
    to_flow_style_yaml(msg.body_assist_params, out);
    out << ", ";
  }

  // member: body_assist_params_is_set
  {
    out << "body_assist_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.body_assist_params_is_set, out);
    out << ", ";
  }

  // member: force_stow_override
  {
    out << "force_stow_override: ";
    rosidl_generator_traits::value_to_yaml(msg.force_stow_override, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionWrapperArmSensorPointing & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_trajectory:\n";
    to_block_style_yaml(msg.joint_trajectory, out, indentation + 2);
  }

  // member: joint_trajectory_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_trajectory_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_trajectory_is_set, out);
    out << "\n";
  }

  // member: wrist_tform_tool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_tform_tool:\n";
    to_block_style_yaml(msg.wrist_tform_tool, out, indentation + 2);
  }

  // member: wrist_tform_tool_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_tform_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_tform_tool_is_set, out);
    out << "\n";
  }

  // member: pose_trajectory_rt_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_trajectory_rt_target:\n";
    to_block_style_yaml(msg.pose_trajectory_rt_target, out, indentation + 2);
  }

  // member: pose_trajectory_rt_target_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_trajectory_rt_target_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_trajectory_rt_target_is_set, out);
    out << "\n";
  }

  // member: target_tform_measured_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_tform_measured_offset:\n";
    to_block_style_yaml(msg.target_tform_measured_offset, out, indentation + 2);
  }

  // member: target_tform_measured_offset_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_tform_measured_offset_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_tform_measured_offset_is_set, out);
    out << "\n";
  }

  // member: body_assist_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_assist_params:\n";
    to_block_style_yaml(msg.body_assist_params, out, indentation + 2);
  }

  // member: body_assist_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_assist_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.body_assist_params_is_set, out);
    out << "\n";
  }

  // member: force_stow_override
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_stow_override: ";
    rosidl_generator_traits::value_to_yaml(msg.force_stow_override, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionWrapperArmSensorPointing & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ActionWrapperArmSensorPointing & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ActionWrapperArmSensorPointing & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ActionWrapperArmSensorPointing>()
{
  return "bosdyn_msgs::msg::ActionWrapperArmSensorPointing";
}

template<>
inline const char * name<bosdyn_msgs::msg::ActionWrapperArmSensorPointing>()
{
  return "bosdyn_msgs/msg/ActionWrapperArmSensorPointing";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ActionWrapperArmSensorPointing>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ArmJointTrajectory>::value && has_fixed_size<bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation>::value && has_fixed_size<bosdyn_msgs::msg::SE2Pose>::value && has_fixed_size<bosdyn_msgs::msg::SE3Trajectory>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ActionWrapperArmSensorPointing>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ArmJointTrajectory>::value && has_bounded_size<bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation>::value && has_bounded_size<bosdyn_msgs::msg::SE2Pose>::value && has_bounded_size<bosdyn_msgs::msg::SE3Trajectory>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ActionWrapperArmSensorPointing>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ARM_SENSOR_POINTING__TRAITS_HPP_
