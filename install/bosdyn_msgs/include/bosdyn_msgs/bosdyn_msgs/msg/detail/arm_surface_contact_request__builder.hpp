// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmSurfaceContactRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_surface_contact_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmSurfaceContactRequest_is_robot_following_hand
{
public:
  explicit Init_ArmSurfaceContactRequest_is_robot_following_hand(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest is_robot_following_hand(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_is_robot_following_hand_type arg)
  {
    msg_.is_robot_following_hand = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_gripper_command_is_set
{
public:
  explicit Init_ArmSurfaceContactRequest_gripper_command_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_is_robot_following_hand gripper_command_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_gripper_command_is_set_type arg)
  {
    msg_.gripper_command_is_set = std::move(arg);
    return Init_ArmSurfaceContactRequest_is_robot_following_hand(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_gripper_command
{
public:
  explicit Init_ArmSurfaceContactRequest_gripper_command(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_gripper_command_is_set gripper_command(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_gripper_command_type arg)
  {
    msg_.gripper_command = std::move(arg);
    return Init_ArmSurfaceContactRequest_gripper_command_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_bias_force_ewrt_body_is_set
{
public:
  explicit Init_ArmSurfaceContactRequest_bias_force_ewrt_body_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_gripper_command bias_force_ewrt_body_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_bias_force_ewrt_body_is_set_type arg)
  {
    msg_.bias_force_ewrt_body_is_set = std::move(arg);
    return Init_ArmSurfaceContactRequest_gripper_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_bias_force_ewrt_body
{
public:
  explicit Init_ArmSurfaceContactRequest_bias_force_ewrt_body(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_bias_force_ewrt_body_is_set bias_force_ewrt_body(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_bias_force_ewrt_body_type arg)
  {
    msg_.bias_force_ewrt_body = std::move(arg);
    return Init_ArmSurfaceContactRequest_bias_force_ewrt_body_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_xy_to_z_cross_term_admittance
{
public:
  explicit Init_ArmSurfaceContactRequest_xy_to_z_cross_term_admittance(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_bias_force_ewrt_body xy_to_z_cross_term_admittance(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_xy_to_z_cross_term_admittance_type arg)
  {
    msg_.xy_to_z_cross_term_admittance = std::move(arg);
    return Init_ArmSurfaceContactRequest_bias_force_ewrt_body(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_z_admittance
{
public:
  explicit Init_ArmSurfaceContactRequest_z_admittance(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_xy_to_z_cross_term_admittance z_admittance(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_z_admittance_type arg)
  {
    msg_.z_admittance = std::move(arg);
    return Init_ArmSurfaceContactRequest_xy_to_z_cross_term_admittance(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_xy_admittance
{
public:
  explicit Init_ArmSurfaceContactRequest_xy_admittance(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_z_admittance xy_admittance(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_xy_admittance_type arg)
  {
    msg_.xy_admittance = std::move(arg);
    return Init_ArmSurfaceContactRequest_z_admittance(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_press_force_percentage_is_set
{
public:
  explicit Init_ArmSurfaceContactRequest_press_force_percentage_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_xy_admittance press_force_percentage_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_press_force_percentage_is_set_type arg)
  {
    msg_.press_force_percentage_is_set = std::move(arg);
    return Init_ArmSurfaceContactRequest_xy_admittance(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_press_force_percentage
{
public:
  explicit Init_ArmSurfaceContactRequest_press_force_percentage(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_press_force_percentage_is_set press_force_percentage(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_press_force_percentage_type arg)
  {
    msg_.press_force_percentage = std::move(arg);
    return Init_ArmSurfaceContactRequest_press_force_percentage_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_z_axis
{
public:
  explicit Init_ArmSurfaceContactRequest_z_axis(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_press_force_percentage z_axis(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_z_axis_type arg)
  {
    msg_.z_axis = std::move(arg);
    return Init_ArmSurfaceContactRequest_press_force_percentage(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_y_axis
{
public:
  explicit Init_ArmSurfaceContactRequest_y_axis(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_z_axis y_axis(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_y_axis_type arg)
  {
    msg_.y_axis = std::move(arg);
    return Init_ArmSurfaceContactRequest_z_axis(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_x_axis
{
public:
  explicit Init_ArmSurfaceContactRequest_x_axis(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_y_axis x_axis(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_x_axis_type arg)
  {
    msg_.x_axis = std::move(arg);
    return Init_ArmSurfaceContactRequest_y_axis(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_joint_configuration
{
public:
  explicit Init_ArmSurfaceContactRequest_joint_configuration(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_x_axis joint_configuration(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_joint_configuration_type arg)
  {
    msg_.joint_configuration = std::move(arg);
    return Init_ArmSurfaceContactRequest_x_axis(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_max_rot_tracking_error_is_set
{
public:
  explicit Init_ArmSurfaceContactRequest_max_rot_tracking_error_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_joint_configuration max_rot_tracking_error_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_max_rot_tracking_error_is_set_type arg)
  {
    msg_.max_rot_tracking_error_is_set = std::move(arg);
    return Init_ArmSurfaceContactRequest_joint_configuration(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_max_rot_tracking_error
{
public:
  explicit Init_ArmSurfaceContactRequest_max_rot_tracking_error(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_max_rot_tracking_error_is_set max_rot_tracking_error(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_max_rot_tracking_error_type arg)
  {
    msg_.max_rot_tracking_error = std::move(arg);
    return Init_ArmSurfaceContactRequest_max_rot_tracking_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_max_pos_tracking_error_is_set
{
public:
  explicit Init_ArmSurfaceContactRequest_max_pos_tracking_error_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_max_rot_tracking_error max_pos_tracking_error_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_max_pos_tracking_error_is_set_type arg)
  {
    msg_.max_pos_tracking_error_is_set = std::move(arg);
    return Init_ArmSurfaceContactRequest_max_rot_tracking_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_max_pos_tracking_error
{
public:
  explicit Init_ArmSurfaceContactRequest_max_pos_tracking_error(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_max_pos_tracking_error_is_set max_pos_tracking_error(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_max_pos_tracking_error_type arg)
  {
    msg_.max_pos_tracking_error = std::move(arg);
    return Init_ArmSurfaceContactRequest_max_pos_tracking_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_max_angular_velocity_is_set
{
public:
  explicit Init_ArmSurfaceContactRequest_max_angular_velocity_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_max_pos_tracking_error max_angular_velocity_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_max_angular_velocity_is_set_type arg)
  {
    msg_.max_angular_velocity_is_set = std::move(arg);
    return Init_ArmSurfaceContactRequest_max_pos_tracking_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_max_angular_velocity
{
public:
  explicit Init_ArmSurfaceContactRequest_max_angular_velocity(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_max_angular_velocity_is_set max_angular_velocity(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_max_angular_velocity_type arg)
  {
    msg_.max_angular_velocity = std::move(arg);
    return Init_ArmSurfaceContactRequest_max_angular_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_max_linear_velocity_is_set
{
public:
  explicit Init_ArmSurfaceContactRequest_max_linear_velocity_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_max_angular_velocity max_linear_velocity_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_max_linear_velocity_is_set_type arg)
  {
    msg_.max_linear_velocity_is_set = std::move(arg);
    return Init_ArmSurfaceContactRequest_max_angular_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_max_linear_velocity
{
public:
  explicit Init_ArmSurfaceContactRequest_max_linear_velocity(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_max_linear_velocity_is_set max_linear_velocity(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_max_linear_velocity_type arg)
  {
    msg_.max_linear_velocity = std::move(arg);
    return Init_ArmSurfaceContactRequest_max_linear_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_maximum_acceleration_is_set
{
public:
  explicit Init_ArmSurfaceContactRequest_maximum_acceleration_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_max_linear_velocity maximum_acceleration_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_maximum_acceleration_is_set_type arg)
  {
    msg_.maximum_acceleration_is_set = std::move(arg);
    return Init_ArmSurfaceContactRequest_max_linear_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_maximum_acceleration
{
public:
  explicit Init_ArmSurfaceContactRequest_maximum_acceleration(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_maximum_acceleration_is_set maximum_acceleration(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_maximum_acceleration_type arg)
  {
    msg_.maximum_acceleration = std::move(arg);
    return Init_ArmSurfaceContactRequest_maximum_acceleration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_pose_trajectory_in_task_is_set
{
public:
  explicit Init_ArmSurfaceContactRequest_pose_trajectory_in_task_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_maximum_acceleration pose_trajectory_in_task_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_pose_trajectory_in_task_is_set_type arg)
  {
    msg_.pose_trajectory_in_task_is_set = std::move(arg);
    return Init_ArmSurfaceContactRequest_maximum_acceleration(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_pose_trajectory_in_task
{
public:
  explicit Init_ArmSurfaceContactRequest_pose_trajectory_in_task(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_pose_trajectory_in_task_is_set pose_trajectory_in_task(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_pose_trajectory_in_task_type arg)
  {
    msg_.pose_trajectory_in_task = std::move(arg);
    return Init_ArmSurfaceContactRequest_pose_trajectory_in_task_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_root_tform_task_is_set
{
public:
  explicit Init_ArmSurfaceContactRequest_root_tform_task_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_pose_trajectory_in_task root_tform_task_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_root_tform_task_is_set_type arg)
  {
    msg_.root_tform_task_is_set = std::move(arg);
    return Init_ArmSurfaceContactRequest_pose_trajectory_in_task(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_root_tform_task
{
public:
  explicit Init_ArmSurfaceContactRequest_root_tform_task(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_root_tform_task_is_set root_tform_task(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_root_tform_task_type arg)
  {
    msg_.root_tform_task = std::move(arg);
    return Init_ArmSurfaceContactRequest_root_tform_task_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_wrist_tform_tool_is_set
{
public:
  explicit Init_ArmSurfaceContactRequest_wrist_tform_tool_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_root_tform_task wrist_tform_tool_is_set(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_wrist_tform_tool_is_set_type arg)
  {
    msg_.wrist_tform_tool_is_set = std::move(arg);
    return Init_ArmSurfaceContactRequest_root_tform_task(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_wrist_tform_tool
{
public:
  explicit Init_ArmSurfaceContactRequest_wrist_tform_tool(::bosdyn_msgs::msg::ArmSurfaceContactRequest & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequest_wrist_tform_tool_is_set wrist_tform_tool(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_wrist_tform_tool_type arg)
  {
    msg_.wrist_tform_tool = std::move(arg);
    return Init_ArmSurfaceContactRequest_wrist_tform_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

class Init_ArmSurfaceContactRequest_root_frame_name
{
public:
  Init_ArmSurfaceContactRequest_root_frame_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmSurfaceContactRequest_wrist_tform_tool root_frame_name(::bosdyn_msgs::msg::ArmSurfaceContactRequest::_root_frame_name_type arg)
  {
    msg_.root_frame_name = std::move(arg);
    return Init_ArmSurfaceContactRequest_wrist_tform_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmSurfaceContactRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ArmSurfaceContactRequest_root_frame_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST__BUILDER_HPP_
