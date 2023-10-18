// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RetainLease.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RETAIN_LEASE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RETAIN_LEASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/retain_lease__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RetainLease_host
{
public:
  explicit Init_RetainLease_host(::bosdyn_msgs::msg::RetainLease & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RetainLease host(::bosdyn_msgs::msg::RetainLease::_host_type arg)
  {
    msg_.host = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetainLease msg_;
};

class Init_RetainLease_service_name
{
public:
  Init_RetainLease_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RetainLease_host service_name(::bosdyn_msgs::msg::RetainLease::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_RetainLease_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetainLease msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RetainLease>()
{
  return bosdyn_msgs::msg::builder::Init_RetainLease_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RETAIN_LEASE__BUILDER_HPP_
