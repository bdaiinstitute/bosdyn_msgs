// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetConfigurationResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_CONFIGURATION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_CONFIGURATION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_configuration_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetConfigurationResponse_request_is_set
{
public:
  explicit Init_GetConfigurationResponse_request_is_set(::bosdyn_msgs::msg::GetConfigurationResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetConfigurationResponse request_is_set(::bosdyn_msgs::msg::GetConfigurationResponse::_request_is_set_type arg)
  {
    msg_.request_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetConfigurationResponse msg_;
};

class Init_GetConfigurationResponse_request
{
public:
  explicit Init_GetConfigurationResponse_request(::bosdyn_msgs::msg::GetConfigurationResponse & msg)
  : msg_(msg)
  {}
  Init_GetConfigurationResponse_request_is_set request(::bosdyn_msgs::msg::GetConfigurationResponse::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetConfigurationResponse_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetConfigurationResponse msg_;
};

class Init_GetConfigurationResponse_enabled
{
public:
  explicit Init_GetConfigurationResponse_enabled(::bosdyn_msgs::msg::GetConfigurationResponse & msg)
  : msg_(msg)
  {}
  Init_GetConfigurationResponse_request enabled(::bosdyn_msgs::msg::GetConfigurationResponse::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_GetConfigurationResponse_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetConfigurationResponse msg_;
};

class Init_GetConfigurationResponse_header_is_set
{
public:
  explicit Init_GetConfigurationResponse_header_is_set(::bosdyn_msgs::msg::GetConfigurationResponse & msg)
  : msg_(msg)
  {}
  Init_GetConfigurationResponse_enabled header_is_set(::bosdyn_msgs::msg::GetConfigurationResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetConfigurationResponse_enabled(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetConfigurationResponse msg_;
};

class Init_GetConfigurationResponse_header
{
public:
  Init_GetConfigurationResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetConfigurationResponse_header_is_set header(::bosdyn_msgs::msg::GetConfigurationResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetConfigurationResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetConfigurationResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetConfigurationResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetConfigurationResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_CONFIGURATION_RESPONSE__BUILDER_HPP_
