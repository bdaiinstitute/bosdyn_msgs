// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetDockingConfigResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_DOCKING_CONFIG_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_DOCKING_CONFIG_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_docking_config_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetDockingConfigResponse_dock_configs
{
public:
  explicit Init_GetDockingConfigResponse_dock_configs(::bosdyn_msgs::msg::GetDockingConfigResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetDockingConfigResponse dock_configs(::bosdyn_msgs::msg::GetDockingConfigResponse::_dock_configs_type arg)
  {
    msg_.dock_configs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDockingConfigResponse msg_;
};

class Init_GetDockingConfigResponse_header_is_set
{
public:
  explicit Init_GetDockingConfigResponse_header_is_set(::bosdyn_msgs::msg::GetDockingConfigResponse & msg)
  : msg_(msg)
  {}
  Init_GetDockingConfigResponse_dock_configs header_is_set(::bosdyn_msgs::msg::GetDockingConfigResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetDockingConfigResponse_dock_configs(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDockingConfigResponse msg_;
};

class Init_GetDockingConfigResponse_header
{
public:
  Init_GetDockingConfigResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDockingConfigResponse_header_is_set header(::bosdyn_msgs::msg::GetDockingConfigResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetDockingConfigResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDockingConfigResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetDockingConfigResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetDockingConfigResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_DOCKING_CONFIG_RESPONSE__BUILDER_HPP_
