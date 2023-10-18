// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FullBodyCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/full_body_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FullBodyCommandFeedback_status
{
public:
  explicit Init_FullBodyCommandFeedback_status(::bosdyn_msgs::msg::FullBodyCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FullBodyCommandFeedback status(::bosdyn_msgs::msg::FullBodyCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandFeedback msg_;
};

class Init_FullBodyCommandFeedback_feedback
{
public:
  Init_FullBodyCommandFeedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullBodyCommandFeedback_status feedback(::bosdyn_msgs::msg::FullBodyCommandFeedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return Init_FullBodyCommandFeedback_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FullBodyCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_FullBodyCommandFeedback_feedback();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK__BUILDER_HPP_
