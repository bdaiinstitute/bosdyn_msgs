// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MobilityCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/mobility_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MobilityCommandFeedback_status
{
public:
  explicit Init_MobilityCommandFeedback_status(::bosdyn_msgs::msg::MobilityCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MobilityCommandFeedback status(::bosdyn_msgs::msg::MobilityCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandFeedback msg_;
};

class Init_MobilityCommandFeedback_feedback
{
public:
  Init_MobilityCommandFeedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MobilityCommandFeedback_status feedback(::bosdyn_msgs::msg::MobilityCommandFeedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return Init_MobilityCommandFeedback_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MobilityCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_MobilityCommandFeedback_feedback();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK__BUILDER_HPP_
