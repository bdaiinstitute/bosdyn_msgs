// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ConstrainedManipulationCommandFeedback_estimation_activated_is_set
{
public:
  explicit Init_ConstrainedManipulationCommandFeedback_estimation_activated_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback estimation_activated_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback::_estimation_activated_is_set_type arg)
  {
    msg_.estimation_activated_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback msg_;
};

class Init_ConstrainedManipulationCommandFeedback_estimation_activated
{
public:
  explicit Init_ConstrainedManipulationCommandFeedback_estimation_activated(::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandFeedback_estimation_activated_is_set estimation_activated(::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback::_estimation_activated_type arg)
  {
    msg_.estimation_activated = std::move(arg);
    return Init_ConstrainedManipulationCommandFeedback_estimation_activated_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback msg_;
};

class Init_ConstrainedManipulationCommandFeedback_desired_wrench_odom_frame_is_set
{
public:
  explicit Init_ConstrainedManipulationCommandFeedback_desired_wrench_odom_frame_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandFeedback_estimation_activated desired_wrench_odom_frame_is_set(::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback::_desired_wrench_odom_frame_is_set_type arg)
  {
    msg_.desired_wrench_odom_frame_is_set = std::move(arg);
    return Init_ConstrainedManipulationCommandFeedback_estimation_activated(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback msg_;
};

class Init_ConstrainedManipulationCommandFeedback_desired_wrench_odom_frame
{
public:
  explicit Init_ConstrainedManipulationCommandFeedback_desired_wrench_odom_frame(::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandFeedback_desired_wrench_odom_frame_is_set desired_wrench_odom_frame(::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback::_desired_wrench_odom_frame_type arg)
  {
    msg_.desired_wrench_odom_frame = std::move(arg);
    return Init_ConstrainedManipulationCommandFeedback_desired_wrench_odom_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback msg_;
};

class Init_ConstrainedManipulationCommandFeedback_status
{
public:
  Init_ConstrainedManipulationCommandFeedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstrainedManipulationCommandFeedback_desired_wrench_odom_frame status(::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ConstrainedManipulationCommandFeedback_desired_wrench_odom_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_ConstrainedManipulationCommandFeedback_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_FEEDBACK__BUILDER_HPP_
