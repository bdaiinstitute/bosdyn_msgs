// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ConfigureRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONFIGURE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONFIGURE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/configure_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ConfigureRequest_clear_buffer
{
public:
  explicit Init_ConfigureRequest_clear_buffer(::bosdyn_msgs::msg::ConfigureRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ConfigureRequest clear_buffer(::bosdyn_msgs::msg::ConfigureRequest::_clear_buffer_type arg)
  {
    msg_.clear_buffer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigureRequest msg_;
};

class Init_ConfigureRequest_params_is_set
{
public:
  explicit Init_ConfigureRequest_params_is_set(::bosdyn_msgs::msg::ConfigureRequest & msg)
  : msg_(msg)
  {}
  Init_ConfigureRequest_clear_buffer params_is_set(::bosdyn_msgs::msg::ConfigureRequest::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return Init_ConfigureRequest_clear_buffer(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigureRequest msg_;
};

class Init_ConfigureRequest_params
{
public:
  explicit Init_ConfigureRequest_params(::bosdyn_msgs::msg::ConfigureRequest & msg)
  : msg_(msg)
  {}
  Init_ConfigureRequest_params_is_set params(::bosdyn_msgs::msg::ConfigureRequest::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_ConfigureRequest_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigureRequest msg_;
};

class Init_ConfigureRequest_leases
{
public:
  explicit Init_ConfigureRequest_leases(::bosdyn_msgs::msg::ConfigureRequest & msg)
  : msg_(msg)
  {}
  Init_ConfigureRequest_params leases(::bosdyn_msgs::msg::ConfigureRequest::_leases_type arg)
  {
    msg_.leases = std::move(arg);
    return Init_ConfigureRequest_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigureRequest msg_;
};

class Init_ConfigureRequest_header_is_set
{
public:
  explicit Init_ConfigureRequest_header_is_set(::bosdyn_msgs::msg::ConfigureRequest & msg)
  : msg_(msg)
  {}
  Init_ConfigureRequest_leases header_is_set(::bosdyn_msgs::msg::ConfigureRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ConfigureRequest_leases(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigureRequest msg_;
};

class Init_ConfigureRequest_header
{
public:
  Init_ConfigureRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureRequest_header_is_set header(::bosdyn_msgs::msg::ConfigureRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ConfigureRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigureRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ConfigureRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ConfigureRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONFIGURE_REQUEST__BUILDER_HPP_
