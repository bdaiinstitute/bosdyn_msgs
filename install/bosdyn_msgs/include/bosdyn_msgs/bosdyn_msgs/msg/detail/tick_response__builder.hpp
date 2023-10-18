// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TickResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TICK_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TICK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/tick_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TickResponse_custom_param_error_is_set
{
public:
  explicit Init_TickResponse_custom_param_error_is_set(::bosdyn_msgs::msg::TickResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TickResponse custom_param_error_is_set(::bosdyn_msgs::msg::TickResponse::_custom_param_error_is_set_type arg)
  {
    msg_.custom_param_error_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickResponse msg_;
};

class Init_TickResponse_custom_param_error
{
public:
  explicit Init_TickResponse_custom_param_error(::bosdyn_msgs::msg::TickResponse & msg)
  : msg_(msg)
  {}
  Init_TickResponse_custom_param_error_is_set custom_param_error(::bosdyn_msgs::msg::TickResponse::_custom_param_error_type arg)
  {
    msg_.custom_param_error = std::move(arg);
    return Init_TickResponse_custom_param_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickResponse msg_;
};

class Init_TickResponse_error_message
{
public:
  explicit Init_TickResponse_error_message(::bosdyn_msgs::msg::TickResponse & msg)
  : msg_(msg)
  {}
  Init_TickResponse_custom_param_error error_message(::bosdyn_msgs::msg::TickResponse::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_TickResponse_custom_param_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickResponse msg_;
};

class Init_TickResponse_missing_inputs
{
public:
  explicit Init_TickResponse_missing_inputs(::bosdyn_msgs::msg::TickResponse & msg)
  : msg_(msg)
  {}
  Init_TickResponse_error_message missing_inputs(::bosdyn_msgs::msg::TickResponse::_missing_inputs_type arg)
  {
    msg_.missing_inputs = std::move(arg);
    return Init_TickResponse_error_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickResponse msg_;
};

class Init_TickResponse_lease_use_results
{
public:
  explicit Init_TickResponse_lease_use_results(::bosdyn_msgs::msg::TickResponse & msg)
  : msg_(msg)
  {}
  Init_TickResponse_missing_inputs lease_use_results(::bosdyn_msgs::msg::TickResponse::_lease_use_results_type arg)
  {
    msg_.lease_use_results = std::move(arg);
    return Init_TickResponse_missing_inputs(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickResponse msg_;
};

class Init_TickResponse_missing_lease_resources
{
public:
  explicit Init_TickResponse_missing_lease_resources(::bosdyn_msgs::msg::TickResponse & msg)
  : msg_(msg)
  {}
  Init_TickResponse_lease_use_results missing_lease_resources(::bosdyn_msgs::msg::TickResponse::_missing_lease_resources_type arg)
  {
    msg_.missing_lease_resources = std::move(arg);
    return Init_TickResponse_lease_use_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickResponse msg_;
};

class Init_TickResponse_status
{
public:
  explicit Init_TickResponse_status(::bosdyn_msgs::msg::TickResponse & msg)
  : msg_(msg)
  {}
  Init_TickResponse_missing_lease_resources status(::bosdyn_msgs::msg::TickResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TickResponse_missing_lease_resources(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickResponse msg_;
};

class Init_TickResponse_header_is_set
{
public:
  explicit Init_TickResponse_header_is_set(::bosdyn_msgs::msg::TickResponse & msg)
  : msg_(msg)
  {}
  Init_TickResponse_status header_is_set(::bosdyn_msgs::msg::TickResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_TickResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickResponse msg_;
};

class Init_TickResponse_header
{
public:
  Init_TickResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TickResponse_header_is_set header(::bosdyn_msgs::msg::TickResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TickResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TickResponse>()
{
  return bosdyn_msgs::msg::builder::Init_TickResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TICK_RESPONSE__BUILDER_HPP_
