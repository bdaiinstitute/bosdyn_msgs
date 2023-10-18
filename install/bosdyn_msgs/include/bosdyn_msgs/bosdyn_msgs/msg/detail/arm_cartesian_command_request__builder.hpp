// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmCartesianCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmCartesianCommandRequest_wrench_trajectory_in_task_is_set
{
public:
  explicit Init_ArmCartesianCommandRequest_wrench_trajectory_in_task_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest wrench_trajectory_in_task_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_wrench_trajectory_in_task_is_set_type arg)
  {
    msg_.wrench_trajectory_in_task_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_wrench_trajectory_in_task
{
public:
  explicit Init_ArmCartesianCommandRequest_wrench_trajectory_in_task(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_wrench_trajectory_in_task_is_set wrench_trajectory_in_task(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_wrench_trajectory_in_task_type arg)
  {
    msg_.wrench_trajectory_in_task = std::move(arg);
    return Init_ArmCartesianCommandRequest_wrench_trajectory_in_task_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_rz_axis
{
public:
  explicit Init_ArmCartesianCommandRequest_rz_axis(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_wrench_trajectory_in_task rz_axis(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_rz_axis_type arg)
  {
    msg_.rz_axis = std::move(arg);
    return Init_ArmCartesianCommandRequest_wrench_trajectory_in_task(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_ry_axis
{
public:
  explicit Init_ArmCartesianCommandRequest_ry_axis(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_rz_axis ry_axis(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_ry_axis_type arg)
  {
    msg_.ry_axis = std::move(arg);
    return Init_ArmCartesianCommandRequest_rz_axis(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_rx_axis
{
public:
  explicit Init_ArmCartesianCommandRequest_rx_axis(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_ry_axis rx_axis(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_rx_axis_type arg)
  {
    msg_.rx_axis = std::move(arg);
    return Init_ArmCartesianCommandRequest_ry_axis(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_z_axis
{
public:
  explicit Init_ArmCartesianCommandRequest_z_axis(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_rx_axis z_axis(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_z_axis_type arg)
  {
    msg_.z_axis = std::move(arg);
    return Init_ArmCartesianCommandRequest_rx_axis(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_y_axis
{
public:
  explicit Init_ArmCartesianCommandRequest_y_axis(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_z_axis y_axis(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_y_axis_type arg)
  {
    msg_.y_axis = std::move(arg);
    return Init_ArmCartesianCommandRequest_z_axis(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_x_axis
{
public:
  explicit Init_ArmCartesianCommandRequest_x_axis(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_y_axis x_axis(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_x_axis_type arg)
  {
    msg_.x_axis = std::move(arg);
    return Init_ArmCartesianCommandRequest_y_axis(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_joint_configuration
{
public:
  explicit Init_ArmCartesianCommandRequest_joint_configuration(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_x_axis joint_configuration(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_joint_configuration_type arg)
  {
    msg_.joint_configuration = std::move(arg);
    return Init_ArmCartesianCommandRequest_x_axis(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_max_rot_tracking_error_is_set
{
public:
  explicit Init_ArmCartesianCommandRequest_max_rot_tracking_error_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_joint_configuration max_rot_tracking_error_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_max_rot_tracking_error_is_set_type arg)
  {
    msg_.max_rot_tracking_error_is_set = std::move(arg);
    return Init_ArmCartesianCommandRequest_joint_configuration(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_max_rot_tracking_error
{
public:
  explicit Init_ArmCartesianCommandRequest_max_rot_tracking_error(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_max_rot_tracking_error_is_set max_rot_tracking_error(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_max_rot_tracking_error_type arg)
  {
    msg_.max_rot_tracking_error = std::move(arg);
    return Init_ArmCartesianCommandRequest_max_rot_tracking_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_max_pos_tracking_error_is_set
{
public:
  explicit Init_ArmCartesianCommandRequest_max_pos_tracking_error_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_max_rot_tracking_error max_pos_tracking_error_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_max_pos_tracking_error_is_set_type arg)
  {
    msg_.max_pos_tracking_error_is_set = std::move(arg);
    return Init_ArmCartesianCommandRequest_max_rot_tracking_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_max_pos_tracking_error
{
public:
  explicit Init_ArmCartesianCommandRequest_max_pos_tracking_error(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_max_pos_tracking_error_is_set max_pos_tracking_error(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_max_pos_tracking_error_type arg)
  {
    msg_.max_pos_tracking_error = std::move(arg);
    return Init_ArmCartesianCommandRequest_max_pos_tracking_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_max_angular_velocity_is_set
{
public:
  explicit Init_ArmCartesianCommandRequest_max_angular_velocity_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_max_pos_tracking_error max_angular_velocity_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_max_angular_velocity_is_set_type arg)
  {
    msg_.max_angular_velocity_is_set = std::move(arg);
    return Init_ArmCartesianCommandRequest_max_pos_tracking_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_max_angular_velocity
{
public:
  explicit Init_ArmCartesianCommandRequest_max_angular_velocity(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_max_angular_velocity_is_set max_angular_velocity(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_max_angular_velocity_type arg)
  {
    msg_.max_angular_velocity = std::move(arg);
    return Init_ArmCartesianCommandRequest_max_angular_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_max_linear_velocity_is_set
{
public:
  explicit Init_ArmCartesianCommandRequest_max_linear_velocity_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_max_angular_velocity max_linear_velocity_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_max_linear_velocity_is_set_type arg)
  {
    msg_.max_linear_velocity_is_set = std::move(arg);
    return Init_ArmCartesianCommandRequest_max_angular_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_max_linear_velocity
{
public:
  explicit Init_ArmCartesianCommandRequest_max_linear_velocity(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_max_linear_velocity_is_set max_linear_velocity(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_max_linear_velocity_type arg)
  {
    msg_.max_linear_velocity = std::move(arg);
    return Init_ArmCartesianCommandRequest_max_linear_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_maximum_acceleration_is_set
{
public:
  explicit Init_ArmCartesianCommandRequest_maximum_acceleration_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_max_linear_velocity maximum_acceleration_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_maximum_acceleration_is_set_type arg)
  {
    msg_.maximum_acceleration_is_set = std::move(arg);
    return Init_ArmCartesianCommandRequest_max_linear_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_maximum_acceleration
{
public:
  explicit Init_ArmCartesianCommandRequest_maximum_acceleration(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_maximum_acceleration_is_set maximum_acceleration(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_maximum_acceleration_type arg)
  {
    msg_.maximum_acceleration = std::move(arg);
    return Init_ArmCartesianCommandRequest_maximum_acceleration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_pose_trajectory_in_task_is_set
{
public:
  explicit Init_ArmCartesianCommandRequest_pose_trajectory_in_task_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_maximum_acceleration pose_trajectory_in_task_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_pose_trajectory_in_task_is_set_type arg)
  {
    msg_.pose_trajectory_in_task_is_set = std::move(arg);
    return Init_ArmCartesianCommandRequest_maximum_acceleration(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_pose_trajectory_in_task
{
public:
  explicit Init_ArmCartesianCommandRequest_pose_trajectory_in_task(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_pose_trajectory_in_task_is_set pose_trajectory_in_task(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_pose_trajectory_in_task_type arg)
  {
    msg_.pose_trajectory_in_task = std::move(arg);
    return Init_ArmCartesianCommandRequest_pose_trajectory_in_task_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_root_tform_task_is_set
{
public:
  explicit Init_ArmCartesianCommandRequest_root_tform_task_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_pose_trajectory_in_task root_tform_task_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_root_tform_task_is_set_type arg)
  {
    msg_.root_tform_task_is_set = std::move(arg);
    return Init_ArmCartesianCommandRequest_pose_trajectory_in_task(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_root_tform_task
{
public:
  explicit Init_ArmCartesianCommandRequest_root_tform_task(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_root_tform_task_is_set root_tform_task(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_root_tform_task_type arg)
  {
    msg_.root_tform_task = std::move(arg);
    return Init_ArmCartesianCommandRequest_root_tform_task_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_wrist_tform_tool_is_set
{
public:
  explicit Init_ArmCartesianCommandRequest_wrist_tform_tool_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_root_tform_task wrist_tform_tool_is_set(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_wrist_tform_tool_is_set_type arg)
  {
    msg_.wrist_tform_tool_is_set = std::move(arg);
    return Init_ArmCartesianCommandRequest_root_tform_task(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_wrist_tform_tool
{
public:
  explicit Init_ArmCartesianCommandRequest_wrist_tform_tool(::bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequest_wrist_tform_tool_is_set wrist_tform_tool(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_wrist_tform_tool_type arg)
  {
    msg_.wrist_tform_tool = std::move(arg);
    return Init_ArmCartesianCommandRequest_wrist_tform_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

class Init_ArmCartesianCommandRequest_root_frame_name
{
public:
  Init_ArmCartesianCommandRequest_root_frame_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmCartesianCommandRequest_wrist_tform_tool root_frame_name(::bosdyn_msgs::msg::ArmCartesianCommandRequest::_root_frame_name_type arg)
  {
    msg_.root_frame_name = std::move(arg);
    return Init_ArmCartesianCommandRequest_wrist_tform_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmCartesianCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ArmCartesianCommandRequest_root_frame_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST__BUILDER_HPP_
