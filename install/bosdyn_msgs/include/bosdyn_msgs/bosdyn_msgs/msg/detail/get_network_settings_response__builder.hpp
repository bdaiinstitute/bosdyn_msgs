// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetNetworkSettingsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_NETWORK_SETTINGS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_NETWORK_SETTINGS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_network_settings_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetNetworkSettingsResponse_settings_is_set
{
public:
  explicit Init_GetNetworkSettingsResponse_settings_is_set(::bosdyn_msgs::msg::GetNetworkSettingsResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetNetworkSettingsResponse settings_is_set(::bosdyn_msgs::msg::GetNetworkSettingsResponse::_settings_is_set_type arg)
  {
    msg_.settings_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetNetworkSettingsResponse msg_;
};

class Init_GetNetworkSettingsResponse_settings
{
public:
  explicit Init_GetNetworkSettingsResponse_settings(::bosdyn_msgs::msg::GetNetworkSettingsResponse & msg)
  : msg_(msg)
  {}
  Init_GetNetworkSettingsResponse_settings_is_set settings(::bosdyn_msgs::msg::GetNetworkSettingsResponse::_settings_type arg)
  {
    msg_.settings = std::move(arg);
    return Init_GetNetworkSettingsResponse_settings_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetNetworkSettingsResponse msg_;
};

class Init_GetNetworkSettingsResponse_header_is_set
{
public:
  explicit Init_GetNetworkSettingsResponse_header_is_set(::bosdyn_msgs::msg::GetNetworkSettingsResponse & msg)
  : msg_(msg)
  {}
  Init_GetNetworkSettingsResponse_settings header_is_set(::bosdyn_msgs::msg::GetNetworkSettingsResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetNetworkSettingsResponse_settings(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetNetworkSettingsResponse msg_;
};

class Init_GetNetworkSettingsResponse_header
{
public:
  Init_GetNetworkSettingsResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetNetworkSettingsResponse_header_is_set header(::bosdyn_msgs::msg::GetNetworkSettingsResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetNetworkSettingsResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetNetworkSettingsResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetNetworkSettingsResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetNetworkSettingsResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_NETWORK_SETTINGS_RESPONSE__BUILDER_HPP_
