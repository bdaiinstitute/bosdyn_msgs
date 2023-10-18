// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ConstrainedManipulationCommandRequest_reset_estimator_is_set
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_reset_estimator_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest reset_estimator_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_reset_estimator_is_set_type arg)
  {
    msg_.reset_estimator_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_reset_estimator
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_reset_estimator(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_reset_estimator_is_set reset_estimator(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_reset_estimator_type arg)
  {
    msg_.reset_estimator = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_reset_estimator_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_accel_limit_is_set
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_accel_limit_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_reset_estimator accel_limit_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_accel_limit_is_set_type arg)
  {
    msg_.accel_limit_is_set = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_reset_estimator(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_accel_limit
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_accel_limit(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_accel_limit_is_set accel_limit(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_accel_limit_type arg)
  {
    msg_.accel_limit = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_accel_limit_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_task_target_position
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_task_target_position(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_accel_limit task_target_position(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_task_target_position_type arg)
  {
    msg_.task_target_position = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_accel_limit(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_control_mode
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_control_mode(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_task_target_position control_mode(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_task_target_position(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_enable_robot_locomotion_is_set
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_enable_robot_locomotion_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_control_mode enable_robot_locomotion_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_enable_robot_locomotion_is_set_type arg)
  {
    msg_.enable_robot_locomotion_is_set = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_control_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_enable_robot_locomotion
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_enable_robot_locomotion(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_enable_robot_locomotion_is_set enable_robot_locomotion(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_enable_robot_locomotion_type arg)
  {
    msg_.enable_robot_locomotion = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_enable_robot_locomotion_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_end_time_is_set
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_end_time_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_enable_robot_locomotion end_time_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_end_time_is_set_type arg)
  {
    msg_.end_time_is_set = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_enable_robot_locomotion(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_end_time
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_end_time(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_end_time_is_set end_time(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_task_type
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_task_type(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_end_time task_type(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_task_type_type arg)
  {
    msg_.task_type = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_end_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_torque_limit_is_set
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_torque_limit_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_task_type torque_limit_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_torque_limit_is_set_type arg)
  {
    msg_.torque_limit_is_set = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_task_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_torque_limit
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_torque_limit(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_torque_limit_is_set torque_limit(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_torque_limit_type arg)
  {
    msg_.torque_limit = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_torque_limit_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_force_limit_is_set
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_force_limit_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_torque_limit force_limit_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_force_limit_is_set_type arg)
  {
    msg_.force_limit_is_set = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_torque_limit(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_force_limit
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_force_limit(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_force_limit_is_set force_limit(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_force_limit_type arg)
  {
    msg_.force_limit = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_force_limit_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_task_speed
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_task_speed(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_force_limit task_speed(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_task_speed_type arg)
  {
    msg_.task_speed = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_force_limit(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_init_wrench_direction_in_frame_name_is_set
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_init_wrench_direction_in_frame_name_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_task_speed init_wrench_direction_in_frame_name_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_init_wrench_direction_in_frame_name_is_set_type arg)
  {
    msg_.init_wrench_direction_in_frame_name_is_set = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_task_speed(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_init_wrench_direction_in_frame_name
{
public:
  explicit Init_ConstrainedManipulationCommandRequest_init_wrench_direction_in_frame_name(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequest_init_wrench_direction_in_frame_name_is_set init_wrench_direction_in_frame_name(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_init_wrench_direction_in_frame_name_type arg)
  {
    msg_.init_wrench_direction_in_frame_name = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_init_wrench_direction_in_frame_name_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

class Init_ConstrainedManipulationCommandRequest_frame_name
{
public:
  Init_ConstrainedManipulationCommandRequest_frame_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstrainedManipulationCommandRequest_init_wrench_direction_in_frame_name frame_name(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest::_frame_name_type arg)
  {
    msg_.frame_name = std::move(arg);
    return Init_ConstrainedManipulationCommandRequest_init_wrench_direction_in_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ConstrainedManipulationCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ConstrainedManipulationCommandRequest_frame_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST__BUILDER_HPP_
