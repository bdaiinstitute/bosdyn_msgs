// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StandCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAND_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAND_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/stand_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StandCommandFeedback_standing_state
{
public:
  explicit Init_StandCommandFeedback_standing_state(::bosdyn_msgs::msg::StandCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StandCommandFeedback standing_state(::bosdyn_msgs::msg::StandCommandFeedback::_standing_state_type arg)
  {
    msg_.standing_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StandCommandFeedback msg_;
};

class Init_StandCommandFeedback_status
{
public:
  Init_StandCommandFeedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StandCommandFeedback_standing_state status(::bosdyn_msgs::msg::StandCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_StandCommandFeedback_standing_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::StandCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StandCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_StandCommandFeedback_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAND_COMMAND_FEEDBACK__BUILDER_HPP_
