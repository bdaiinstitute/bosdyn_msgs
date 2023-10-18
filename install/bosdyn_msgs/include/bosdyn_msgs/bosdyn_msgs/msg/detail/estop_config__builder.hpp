// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EstopConfig.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_CONFIG__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/estop_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EstopConfig_unique_id
{
public:
  explicit Init_EstopConfig_unique_id(::bosdyn_msgs::msg::EstopConfig & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EstopConfig unique_id(::bosdyn_msgs::msg::EstopConfig::_unique_id_type arg)
  {
    msg_.unique_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopConfig msg_;
};

class Init_EstopConfig_endpoints
{
public:
  Init_EstopConfig_endpoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstopConfig_unique_id endpoints(::bosdyn_msgs::msg::EstopConfig::_endpoints_type arg)
  {
    msg_.endpoints = std::move(arg);
    return Init_EstopConfig_unique_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EstopConfig>()
{
  return bosdyn_msgs::msg::builder::Init_EstopConfig_endpoints();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_CONFIG__BUILDER_HPP_
