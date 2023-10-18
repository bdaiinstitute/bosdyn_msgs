// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FanPowerCommandFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_FEEDBACK_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_FEEDBACK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/fan_power_command_feedback_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FanPowerCommandFeedbackResponse_early_stop_time_is_set
{
public:
  explicit Init_FanPowerCommandFeedbackResponse_early_stop_time_is_set(::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse early_stop_time_is_set(::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse::_early_stop_time_is_set_type arg)
  {
    msg_.early_stop_time_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse msg_;
};

class Init_FanPowerCommandFeedbackResponse_early_stop_time
{
public:
  explicit Init_FanPowerCommandFeedbackResponse_early_stop_time(::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandFeedbackResponse_early_stop_time_is_set early_stop_time(::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse::_early_stop_time_type arg)
  {
    msg_.early_stop_time = std::move(arg);
    return Init_FanPowerCommandFeedbackResponse_early_stop_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse msg_;
};

class Init_FanPowerCommandFeedbackResponse_desired_end_time_is_set
{
public:
  explicit Init_FanPowerCommandFeedbackResponse_desired_end_time_is_set(::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandFeedbackResponse_early_stop_time desired_end_time_is_set(::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse::_desired_end_time_is_set_type arg)
  {
    msg_.desired_end_time_is_set = std::move(arg);
    return Init_FanPowerCommandFeedbackResponse_early_stop_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse msg_;
};

class Init_FanPowerCommandFeedbackResponse_desired_end_time
{
public:
  explicit Init_FanPowerCommandFeedbackResponse_desired_end_time(::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandFeedbackResponse_desired_end_time_is_set desired_end_time(::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse::_desired_end_time_type arg)
  {
    msg_.desired_end_time = std::move(arg);
    return Init_FanPowerCommandFeedbackResponse_desired_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse msg_;
};

class Init_FanPowerCommandFeedbackResponse_status
{
public:
  explicit Init_FanPowerCommandFeedbackResponse_status(::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandFeedbackResponse_desired_end_time status(::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FanPowerCommandFeedbackResponse_desired_end_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse msg_;
};

class Init_FanPowerCommandFeedbackResponse_header_is_set
{
public:
  explicit Init_FanPowerCommandFeedbackResponse_header_is_set(::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandFeedbackResponse_status header_is_set(::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_FanPowerCommandFeedbackResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse msg_;
};

class Init_FanPowerCommandFeedbackResponse_header
{
public:
  Init_FanPowerCommandFeedbackResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FanPowerCommandFeedbackResponse_header_is_set header(::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FanPowerCommandFeedbackResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FanPowerCommandFeedbackResponse>()
{
  return bosdyn_msgs::msg::builder::Init_FanPowerCommandFeedbackResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_FEEDBACK_RESPONSE__BUILDER_HPP_
