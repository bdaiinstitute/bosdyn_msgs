// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FanPowerCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/fan_power_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FanPowerCommandRequest_duration_is_set
{
public:
  explicit Init_FanPowerCommandRequest_duration_is_set(::bosdyn_msgs::msg::FanPowerCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FanPowerCommandRequest duration_is_set(::bosdyn_msgs::msg::FanPowerCommandRequest::_duration_is_set_type arg)
  {
    msg_.duration_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandRequest msg_;
};

class Init_FanPowerCommandRequest_duration
{
public:
  explicit Init_FanPowerCommandRequest_duration(::bosdyn_msgs::msg::FanPowerCommandRequest & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandRequest_duration_is_set duration(::bosdyn_msgs::msg::FanPowerCommandRequest::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_FanPowerCommandRequest_duration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandRequest msg_;
};

class Init_FanPowerCommandRequest_percent_power
{
public:
  explicit Init_FanPowerCommandRequest_percent_power(::bosdyn_msgs::msg::FanPowerCommandRequest & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandRequest_duration percent_power(::bosdyn_msgs::msg::FanPowerCommandRequest::_percent_power_type arg)
  {
    msg_.percent_power = std::move(arg);
    return Init_FanPowerCommandRequest_duration(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandRequest msg_;
};

class Init_FanPowerCommandRequest_lease_is_set
{
public:
  explicit Init_FanPowerCommandRequest_lease_is_set(::bosdyn_msgs::msg::FanPowerCommandRequest & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandRequest_percent_power lease_is_set(::bosdyn_msgs::msg::FanPowerCommandRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_FanPowerCommandRequest_percent_power(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandRequest msg_;
};

class Init_FanPowerCommandRequest_lease
{
public:
  explicit Init_FanPowerCommandRequest_lease(::bosdyn_msgs::msg::FanPowerCommandRequest & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandRequest_lease_is_set lease(::bosdyn_msgs::msg::FanPowerCommandRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_FanPowerCommandRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandRequest msg_;
};

class Init_FanPowerCommandRequest_header_is_set
{
public:
  explicit Init_FanPowerCommandRequest_header_is_set(::bosdyn_msgs::msg::FanPowerCommandRequest & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandRequest_lease header_is_set(::bosdyn_msgs::msg::FanPowerCommandRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_FanPowerCommandRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandRequest msg_;
};

class Init_FanPowerCommandRequest_header
{
public:
  Init_FanPowerCommandRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FanPowerCommandRequest_header_is_set header(::bosdyn_msgs::msg::FanPowerCommandRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FanPowerCommandRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FanPowerCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_FanPowerCommandRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_REQUEST__BUILDER_HPP_
