// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BeginCallbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/begin_callback_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BeginCallbackResponse_custom_param_error_is_set
{
public:
  explicit Init_BeginCallbackResponse_custom_param_error_is_set(::bosdyn_msgs::msg::BeginCallbackResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BeginCallbackResponse custom_param_error_is_set(::bosdyn_msgs::msg::BeginCallbackResponse::_custom_param_error_is_set_type arg)
  {
    msg_.custom_param_error_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackResponse msg_;
};

class Init_BeginCallbackResponse_custom_param_error
{
public:
  explicit Init_BeginCallbackResponse_custom_param_error(::bosdyn_msgs::msg::BeginCallbackResponse & msg)
  : msg_(msg)
  {}
  Init_BeginCallbackResponse_custom_param_error_is_set custom_param_error(::bosdyn_msgs::msg::BeginCallbackResponse::_custom_param_error_type arg)
  {
    msg_.custom_param_error = std::move(arg);
    return Init_BeginCallbackResponse_custom_param_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackResponse msg_;
};

class Init_BeginCallbackResponse_command_id
{
public:
  explicit Init_BeginCallbackResponse_command_id(::bosdyn_msgs::msg::BeginCallbackResponse & msg)
  : msg_(msg)
  {}
  Init_BeginCallbackResponse_custom_param_error command_id(::bosdyn_msgs::msg::BeginCallbackResponse::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return Init_BeginCallbackResponse_custom_param_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackResponse msg_;
};

class Init_BeginCallbackResponse_status
{
public:
  explicit Init_BeginCallbackResponse_status(::bosdyn_msgs::msg::BeginCallbackResponse & msg)
  : msg_(msg)
  {}
  Init_BeginCallbackResponse_command_id status(::bosdyn_msgs::msg::BeginCallbackResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_BeginCallbackResponse_command_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackResponse msg_;
};

class Init_BeginCallbackResponse_header_is_set
{
public:
  explicit Init_BeginCallbackResponse_header_is_set(::bosdyn_msgs::msg::BeginCallbackResponse & msg)
  : msg_(msg)
  {}
  Init_BeginCallbackResponse_status header_is_set(::bosdyn_msgs::msg::BeginCallbackResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_BeginCallbackResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackResponse msg_;
};

class Init_BeginCallbackResponse_header
{
public:
  Init_BeginCallbackResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BeginCallbackResponse_header_is_set header(::bosdyn_msgs::msg::BeginCallbackResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BeginCallbackResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BeginCallbackResponse>()
{
  return bosdyn_msgs::msg::builder::Init_BeginCallbackResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_RESPONSE__BUILDER_HPP_
