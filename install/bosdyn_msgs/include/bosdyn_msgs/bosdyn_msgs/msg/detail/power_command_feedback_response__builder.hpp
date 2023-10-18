// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PowerCommandFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_FEEDBACK_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_FEEDBACK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/power_command_feedback_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerCommandFeedbackResponse_blocking_faults
{
public:
  explicit Init_PowerCommandFeedbackResponse_blocking_faults(::bosdyn_msgs::msg::PowerCommandFeedbackResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PowerCommandFeedbackResponse blocking_faults(::bosdyn_msgs::msg::PowerCommandFeedbackResponse::_blocking_faults_type arg)
  {
    msg_.blocking_faults = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerCommandFeedbackResponse msg_;
};

class Init_PowerCommandFeedbackResponse_status
{
public:
  explicit Init_PowerCommandFeedbackResponse_status(::bosdyn_msgs::msg::PowerCommandFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_PowerCommandFeedbackResponse_blocking_faults status(::bosdyn_msgs::msg::PowerCommandFeedbackResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PowerCommandFeedbackResponse_blocking_faults(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerCommandFeedbackResponse msg_;
};

class Init_PowerCommandFeedbackResponse_header_is_set
{
public:
  explicit Init_PowerCommandFeedbackResponse_header_is_set(::bosdyn_msgs::msg::PowerCommandFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_PowerCommandFeedbackResponse_status header_is_set(::bosdyn_msgs::msg::PowerCommandFeedbackResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_PowerCommandFeedbackResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerCommandFeedbackResponse msg_;
};

class Init_PowerCommandFeedbackResponse_header
{
public:
  Init_PowerCommandFeedbackResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerCommandFeedbackResponse_header_is_set header(::bosdyn_msgs::msg::PowerCommandFeedbackResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PowerCommandFeedbackResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerCommandFeedbackResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PowerCommandFeedbackResponse>()
{
  return bosdyn_msgs::msg::builder::Init_PowerCommandFeedbackResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_FEEDBACK_RESPONSE__BUILDER_HPP_
