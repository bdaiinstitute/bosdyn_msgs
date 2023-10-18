// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Endpoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ENDPOINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ENDPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/endpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Endpoint_port
{
public:
  explicit Init_Endpoint_port(::bosdyn_msgs::msg::Endpoint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Endpoint port(::bosdyn_msgs::msg::Endpoint::_port_type arg)
  {
    msg_.port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Endpoint msg_;
};

class Init_Endpoint_host_ip
{
public:
  Init_Endpoint_host_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Endpoint_port host_ip(::bosdyn_msgs::msg::Endpoint::_host_ip_type arg)
  {
    msg_.host_ip = std::move(arg);
    return Init_Endpoint_port(msg_);
  }

private:
  ::bosdyn_msgs::msg::Endpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Endpoint>()
{
  return bosdyn_msgs::msg::builder::Init_Endpoint_host_ip();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ENDPOINT__BUILDER_HPP_
