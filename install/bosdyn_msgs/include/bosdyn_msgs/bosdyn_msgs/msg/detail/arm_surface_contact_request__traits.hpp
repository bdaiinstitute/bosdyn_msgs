// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmSurfaceContactRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_surface_contact_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'wrist_tform_tool'
// Member 'root_tform_task'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'pose_trajectory_in_task'
#include "bosdyn_msgs/msg/detail/se3_trajectory__traits.hpp"
// Member 'joint_configuration'
#include "bosdyn_msgs/msg/detail/arm_surface_contact_request_one_of_joint_configuration__traits.hpp"
// Member 'x_axis'
// Member 'y_axis'
// Member 'z_axis'
#include "bosdyn_msgs/msg/detail/arm_surface_contact_request_axis_mode__traits.hpp"
// Member 'press_force_percentage'
// Member 'bias_force_ewrt_body'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'xy_admittance'
// Member 'z_admittance'
// Member 'xy_to_z_cross_term_admittance'
#include "bosdyn_msgs/msg/detail/arm_surface_contact_request_admittance_setting__traits.hpp"
// Member 'gripper_command'
#include "bosdyn_msgs/msg/detail/claw_gripper_command_request__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmSurfaceContactRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: root_frame_name
  {
    out << "root_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.root_frame_name, out);
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

  // member: root_tform_task
  {
    out << "root_tform_task: ";
    to_flow_style_yaml(msg.root_tform_task, out);
    out << ", ";
  }

  // member: root_tform_task_is_set
  {
    out << "root_tform_task_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.root_tform_task_is_set, out);
    out << ", ";
  }

  // member: pose_trajectory_in_task
  {
    out << "pose_trajectory_in_task: ";
    to_flow_style_yaml(msg.pose_trajectory_in_task, out);
    out << ", ";
  }

  // member: pose_trajectory_in_task_is_set
  {
    out << "pose_trajectory_in_task_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_trajectory_in_task_is_set, out);
    out << ", ";
  }

  // member: maximum_acceleration
  {
    out << "maximum_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_acceleration, out);
    out << ", ";
  }

  // member: maximum_acceleration_is_set
  {
    out << "maximum_acceleration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_acceleration_is_set, out);
    out << ", ";
  }

  // member: max_linear_velocity
  {
    out << "max_linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_velocity, out);
    out << ", ";
  }

  // member: max_linear_velocity_is_set
  {
    out << "max_linear_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_velocity_is_set, out);
    out << ", ";
  }

  // member: max_angular_velocity
  {
    out << "max_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_velocity, out);
    out << ", ";
  }

  // member: max_angular_velocity_is_set
  {
    out << "max_angular_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_velocity_is_set, out);
    out << ", ";
  }

  // member: max_pos_tracking_error
  {
    out << "max_pos_tracking_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_pos_tracking_error, out);
    out << ", ";
  }

  // member: max_pos_tracking_error_is_set
  {
    out << "max_pos_tracking_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_pos_tracking_error_is_set, out);
    out << ", ";
  }

  // member: max_rot_tracking_error
  {
    out << "max_rot_tracking_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rot_tracking_error, out);
    out << ", ";
  }

  // member: max_rot_tracking_error_is_set
  {
    out << "max_rot_tracking_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rot_tracking_error_is_set, out);
    out << ", ";
  }

  // member: joint_configuration
  {
    out << "joint_configuration: ";
    to_flow_style_yaml(msg.joint_configuration, out);
    out << ", ";
  }

  // member: x_axis
  {
    out << "x_axis: ";
    to_flow_style_yaml(msg.x_axis, out);
    out << ", ";
  }

  // member: y_axis
  {
    out << "y_axis: ";
    to_flow_style_yaml(msg.y_axis, out);
    out << ", ";
  }

  // member: z_axis
  {
    out << "z_axis: ";
    to_flow_style_yaml(msg.z_axis, out);
    out << ", ";
  }

  // member: press_force_percentage
  {
    out << "press_force_percentage: ";
    to_flow_style_yaml(msg.press_force_percentage, out);
    out << ", ";
  }

  // member: press_force_percentage_is_set
  {
    out << "press_force_percentage_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.press_force_percentage_is_set, out);
    out << ", ";
  }

  // member: xy_admittance
  {
    out << "xy_admittance: ";
    to_flow_style_yaml(msg.xy_admittance, out);
    out << ", ";
  }

  // member: z_admittance
  {
    out << "z_admittance: ";
    to_flow_style_yaml(msg.z_admittance, out);
    out << ", ";
  }

  // member: xy_to_z_cross_term_admittance
  {
    out << "xy_to_z_cross_term_admittance: ";
    to_flow_style_yaml(msg.xy_to_z_cross_term_admittance, out);
    out << ", ";
  }

  // member: bias_force_ewrt_body
  {
    out << "bias_force_ewrt_body: ";
    to_flow_style_yaml(msg.bias_force_ewrt_body, out);
    out << ", ";
  }

  // member: bias_force_ewrt_body_is_set
  {
    out << "bias_force_ewrt_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.bias_force_ewrt_body_is_set, out);
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
    out << ", ";
  }

  // member: is_robot_following_hand
  {
    out << "is_robot_following_hand: ";
    rosidl_generator_traits::value_to_yaml(msg.is_robot_following_hand, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmSurfaceContactRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: root_frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.root_frame_name, out);
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

  // member: root_tform_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_tform_task:\n";
    to_block_style_yaml(msg.root_tform_task, out, indentation + 2);
  }

  // member: root_tform_task_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_tform_task_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.root_tform_task_is_set, out);
    out << "\n";
  }

  // member: pose_trajectory_in_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_trajectory_in_task:\n";
    to_block_style_yaml(msg.pose_trajectory_in_task, out, indentation + 2);
  }

  // member: pose_trajectory_in_task_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_trajectory_in_task_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_trajectory_in_task_is_set, out);
    out << "\n";
  }

  // member: maximum_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_acceleration, out);
    out << "\n";
  }

  // member: maximum_acceleration_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_acceleration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_acceleration_is_set, out);
    out << "\n";
  }

  // member: max_linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_velocity, out);
    out << "\n";
  }

  // member: max_linear_velocity_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_linear_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_velocity_is_set, out);
    out << "\n";
  }

  // member: max_angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_velocity, out);
    out << "\n";
  }

  // member: max_angular_velocity_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_angular_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_velocity_is_set, out);
    out << "\n";
  }

  // member: max_pos_tracking_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_pos_tracking_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_pos_tracking_error, out);
    out << "\n";
  }

  // member: max_pos_tracking_error_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_pos_tracking_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_pos_tracking_error_is_set, out);
    out << "\n";
  }

  // member: max_rot_tracking_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_rot_tracking_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rot_tracking_error, out);
    out << "\n";
  }

  // member: max_rot_tracking_error_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_rot_tracking_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rot_tracking_error_is_set, out);
    out << "\n";
  }

  // member: joint_configuration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_configuration:\n";
    to_block_style_yaml(msg.joint_configuration, out, indentation + 2);
  }

  // member: x_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_axis:\n";
    to_block_style_yaml(msg.x_axis, out, indentation + 2);
  }

  // member: y_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_axis:\n";
    to_block_style_yaml(msg.y_axis, out, indentation + 2);
  }

  // member: z_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_axis:\n";
    to_block_style_yaml(msg.z_axis, out, indentation + 2);
  }

  // member: press_force_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "press_force_percentage:\n";
    to_block_style_yaml(msg.press_force_percentage, out, indentation + 2);
  }

  // member: press_force_percentage_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "press_force_percentage_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.press_force_percentage_is_set, out);
    out << "\n";
  }

  // member: xy_admittance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xy_admittance:\n";
    to_block_style_yaml(msg.xy_admittance, out, indentation + 2);
  }

  // member: z_admittance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_admittance:\n";
    to_block_style_yaml(msg.z_admittance, out, indentation + 2);
  }

  // member: xy_to_z_cross_term_admittance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xy_to_z_cross_term_admittance:\n";
    to_block_style_yaml(msg.xy_to_z_cross_term_admittance, out, indentation + 2);
  }

  // member: bias_force_ewrt_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bias_force_ewrt_body:\n";
    to_block_style_yaml(msg.bias_force_ewrt_body, out, indentation + 2);
  }

  // member: bias_force_ewrt_body_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bias_force_ewrt_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.bias_force_ewrt_body_is_set, out);
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

  // member: is_robot_following_hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_robot_following_hand: ";
    rosidl_generator_traits::value_to_yaml(msg.is_robot_following_hand, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmSurfaceContactRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmSurfaceContactRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmSurfaceContactRequest>()
{
  return "bosdyn_msgs::msg::ArmSurfaceContactRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmSurfaceContactRequest>()
{
  return "bosdyn_msgs/msg/ArmSurfaceContactRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmSurfaceContactRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmSurfaceContactRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmSurfaceContactRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST__TRAITS_HPP_
