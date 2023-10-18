// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BosdynPowerRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_POWER_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_POWER_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/bosdyn_power_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BosdynPowerRequest_request
{
public:
  explicit Init_BosdynPowerRequest_request(::bosdyn_msgs::msg::BosdynPowerRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BosdynPowerRequest request(::bosdyn_msgs::msg::BosdynPowerRequest::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynPowerRequest msg_;
};

class Init_BosdynPowerRequest_host
{
public:
  explicit Init_BosdynPowerRequest_host(::bosdyn_msgs::msg::BosdynPowerRequest & msg)
  : msg_(msg)
  {}
  Init_BosdynPowerRequest_request host(::bosdyn_msgs::msg::BosdynPowerRequest::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_BosdynPowerRequest_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynPowerRequest msg_;
};

class Init_BosdynPowerRequest_service_name
{
public:
  Init_BosdynPowerRequest_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BosdynPowerRequest_host service_name(::bosdyn_msgs::msg::BosdynPowerRequest::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_BosdynPowerRequest_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynPowerRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BosdynPowerRequest>()
{
  return bosdyn_msgs::msg::builder::Init_BosdynPowerRequest_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_POWER_REQUEST__BUILDER_HPP_
