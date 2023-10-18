// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PluginServiceError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLUGIN_SERVICE_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLUGIN_SERVICE_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/plugin_service_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PluginServiceError_message
{
public:
  explicit Init_PluginServiceError_message(::bosdyn_msgs::msg::PluginServiceError & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PluginServiceError message(::bosdyn_msgs::msg::PluginServiceError::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PluginServiceError msg_;
};

class Init_PluginServiceError_error
{
public:
  explicit Init_PluginServiceError_error(::bosdyn_msgs::msg::PluginServiceError & msg)
  : msg_(msg)
  {}
  Init_PluginServiceError_message error(::bosdyn_msgs::msg::PluginServiceError::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_PluginServiceError_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::PluginServiceError msg_;
};

class Init_PluginServiceError_service_name
{
public:
  Init_PluginServiceError_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PluginServiceError_error service_name(::bosdyn_msgs::msg::PluginServiceError::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_PluginServiceError_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::PluginServiceError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PluginServiceError>()
{
  return bosdyn_msgs::msg::builder::Init_PluginServiceError_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLUGIN_SERVICE_ERROR__BUILDER_HPP_
