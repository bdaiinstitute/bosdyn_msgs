// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmCommandFeedback_status
{
public:
  explicit Init_ArmCommandFeedback_status(::bosdyn_msgs::msg::ArmCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmCommandFeedback status(::bosdyn_msgs::msg::ArmCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandFeedback msg_;
};

class Init_ArmCommandFeedback_feedback
{
public:
  Init_ArmCommandFeedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmCommandFeedback_status feedback(::bosdyn_msgs::msg::ArmCommandFeedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return Init_ArmCommandFeedback_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_ArmCommandFeedback_feedback();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK__BUILDER_HPP_
