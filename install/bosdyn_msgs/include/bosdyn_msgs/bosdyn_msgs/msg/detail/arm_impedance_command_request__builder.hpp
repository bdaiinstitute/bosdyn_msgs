// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmImpedanceCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_impedance_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmImpedanceCommandRequest_max_torque_mag_is_set
{
public:
  explicit Init_ArmImpedanceCommandRequest_max_torque_mag_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest max_torque_mag_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_max_torque_mag_is_set_type arg)
  {
    msg_.max_torque_mag_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_max_torque_mag
{
public:
  explicit Init_ArmImpedanceCommandRequest_max_torque_mag(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_max_torque_mag_is_set max_torque_mag(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_max_torque_mag_type arg)
  {
    msg_.max_torque_mag = std::move(arg);
    return Init_ArmImpedanceCommandRequest_max_torque_mag_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_max_force_mag_is_set
{
public:
  explicit Init_ArmImpedanceCommandRequest_max_force_mag_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_max_torque_mag max_force_mag_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_max_force_mag_is_set_type arg)
  {
    msg_.max_force_mag_is_set = std::move(arg);
    return Init_ArmImpedanceCommandRequest_max_torque_mag(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_max_force_mag
{
public:
  explicit Init_ArmImpedanceCommandRequest_max_force_mag(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_max_force_mag_is_set max_force_mag(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_max_force_mag_type arg)
  {
    msg_.max_force_mag = std::move(arg);
    return Init_ArmImpedanceCommandRequest_max_force_mag_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_diagonal_damping_matrix_is_set
{
public:
  explicit Init_ArmImpedanceCommandRequest_diagonal_damping_matrix_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_max_force_mag diagonal_damping_matrix_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_diagonal_damping_matrix_is_set_type arg)
  {
    msg_.diagonal_damping_matrix_is_set = std::move(arg);
    return Init_ArmImpedanceCommandRequest_max_force_mag(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_diagonal_damping_matrix
{
public:
  explicit Init_ArmImpedanceCommandRequest_diagonal_damping_matrix(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_diagonal_damping_matrix_is_set diagonal_damping_matrix(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_diagonal_damping_matrix_type arg)
  {
    msg_.diagonal_damping_matrix = std::move(arg);
    return Init_ArmImpedanceCommandRequest_diagonal_damping_matrix_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_diagonal_stiffness_matrix_is_set
{
public:
  explicit Init_ArmImpedanceCommandRequest_diagonal_stiffness_matrix_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_diagonal_damping_matrix diagonal_stiffness_matrix_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_diagonal_stiffness_matrix_is_set_type arg)
  {
    msg_.diagonal_stiffness_matrix_is_set = std::move(arg);
    return Init_ArmImpedanceCommandRequest_diagonal_damping_matrix(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_diagonal_stiffness_matrix
{
public:
  explicit Init_ArmImpedanceCommandRequest_diagonal_stiffness_matrix(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_diagonal_stiffness_matrix_is_set diagonal_stiffness_matrix(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_diagonal_stiffness_matrix_type arg)
  {
    msg_.diagonal_stiffness_matrix = std::move(arg);
    return Init_ArmImpedanceCommandRequest_diagonal_stiffness_matrix_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_feed_forward_wrench_at_tool_in_desired_tool_is_set
{
public:
  explicit Init_ArmImpedanceCommandRequest_feed_forward_wrench_at_tool_in_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_diagonal_stiffness_matrix feed_forward_wrench_at_tool_in_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_feed_forward_wrench_at_tool_in_desired_tool_is_set_type arg)
  {
    msg_.feed_forward_wrench_at_tool_in_desired_tool_is_set = std::move(arg);
    return Init_ArmImpedanceCommandRequest_diagonal_stiffness_matrix(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_feed_forward_wrench_at_tool_in_desired_tool
{
public:
  explicit Init_ArmImpedanceCommandRequest_feed_forward_wrench_at_tool_in_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_feed_forward_wrench_at_tool_in_desired_tool_is_set feed_forward_wrench_at_tool_in_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_feed_forward_wrench_at_tool_in_desired_tool_type arg)
  {
    msg_.feed_forward_wrench_at_tool_in_desired_tool = std::move(arg);
    return Init_ArmImpedanceCommandRequest_feed_forward_wrench_at_tool_in_desired_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_task_tform_desired_tool_is_set
{
public:
  explicit Init_ArmImpedanceCommandRequest_task_tform_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_feed_forward_wrench_at_tool_in_desired_tool task_tform_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_task_tform_desired_tool_is_set_type arg)
  {
    msg_.task_tform_desired_tool_is_set = std::move(arg);
    return Init_ArmImpedanceCommandRequest_feed_forward_wrench_at_tool_in_desired_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_task_tform_desired_tool
{
public:
  explicit Init_ArmImpedanceCommandRequest_task_tform_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_task_tform_desired_tool_is_set task_tform_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_task_tform_desired_tool_type arg)
  {
    msg_.task_tform_desired_tool = std::move(arg);
    return Init_ArmImpedanceCommandRequest_task_tform_desired_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_wrist_tform_tool_is_set
{
public:
  explicit Init_ArmImpedanceCommandRequest_wrist_tform_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_task_tform_desired_tool wrist_tform_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_wrist_tform_tool_is_set_type arg)
  {
    msg_.wrist_tform_tool_is_set = std::move(arg);
    return Init_ArmImpedanceCommandRequest_task_tform_desired_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_wrist_tform_tool
{
public:
  explicit Init_ArmImpedanceCommandRequest_wrist_tform_tool(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_wrist_tform_tool_is_set wrist_tform_tool(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_wrist_tform_tool_type arg)
  {
    msg_.wrist_tform_tool = std::move(arg);
    return Init_ArmImpedanceCommandRequest_wrist_tform_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_root_tform_task_is_set
{
public:
  explicit Init_ArmImpedanceCommandRequest_root_tform_task_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_wrist_tform_tool root_tform_task_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_root_tform_task_is_set_type arg)
  {
    msg_.root_tform_task_is_set = std::move(arg);
    return Init_ArmImpedanceCommandRequest_wrist_tform_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_root_tform_task
{
public:
  explicit Init_ArmImpedanceCommandRequest_root_tform_task(::bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandRequest_root_tform_task_is_set root_tform_task(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_root_tform_task_type arg)
  {
    msg_.root_tform_task = std::move(arg);
    return Init_ArmImpedanceCommandRequest_root_tform_task_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

class Init_ArmImpedanceCommandRequest_root_frame_name
{
public:
  Init_ArmImpedanceCommandRequest_root_frame_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmImpedanceCommandRequest_root_tform_task root_frame_name(::bosdyn_msgs::msg::ArmImpedanceCommandRequest::_root_frame_name_type arg)
  {
    msg_.root_frame_name = std::move(arg);
    return Init_ArmImpedanceCommandRequest_root_tform_task(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmImpedanceCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ArmImpedanceCommandRequest_root_frame_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_REQUEST__BUILDER_HPP_
