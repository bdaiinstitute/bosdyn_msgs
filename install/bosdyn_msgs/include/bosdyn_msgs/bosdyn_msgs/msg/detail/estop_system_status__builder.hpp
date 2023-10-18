// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EstopSystemStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_SYSTEM_STATUS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_SYSTEM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/estop_system_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EstopSystemStatus_stop_level_details
{
public:
  explicit Init_EstopSystemStatus_stop_level_details(::bosdyn_msgs::msg::EstopSystemStatus & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EstopSystemStatus stop_level_details(::bosdyn_msgs::msg::EstopSystemStatus::_stop_level_details_type arg)
  {
    msg_.stop_level_details = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopSystemStatus msg_;
};

class Init_EstopSystemStatus_stop_level
{
public:
  explicit Init_EstopSystemStatus_stop_level(::bosdyn_msgs::msg::EstopSystemStatus & msg)
  : msg_(msg)
  {}
  Init_EstopSystemStatus_stop_level_details stop_level(::bosdyn_msgs::msg::EstopSystemStatus::_stop_level_type arg)
  {
    msg_.stop_level = std::move(arg);
    return Init_EstopSystemStatus_stop_level_details(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopSystemStatus msg_;
};

class Init_EstopSystemStatus_endpoints
{
public:
  Init_EstopSystemStatus_endpoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstopSystemStatus_stop_level endpoints(::bosdyn_msgs::msg::EstopSystemStatus::_endpoints_type arg)
  {
    msg_.endpoints = std::move(arg);
    return Init_EstopSystemStatus_stop_level(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopSystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EstopSystemStatus>()
{
  return bosdyn_msgs::msg::builder::Init_EstopSystemStatus_endpoints();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_SYSTEM_STATUS__BUILDER_HPP_
