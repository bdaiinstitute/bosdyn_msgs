// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DebugRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DEBUG_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DEBUG_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/debug_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DebugRequest_enable_system_stat
{
public:
  explicit Init_DebugRequest_enable_system_stat(::bosdyn_msgs::msg::DebugRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DebugRequest enable_system_stat(::bosdyn_msgs::msg::DebugRequest::_enable_system_stat_type arg)
  {
    msg_.enable_system_stat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DebugRequest msg_;
};

class Init_DebugRequest_enable_shock
{
public:
  explicit Init_DebugRequest_enable_shock(::bosdyn_msgs::msg::DebugRequest & msg)
  : msg_(msg)
  {}
  Init_DebugRequest_enable_system_stat enable_shock(::bosdyn_msgs::msg::DebugRequest::_enable_shock_type arg)
  {
    msg_.enable_shock = std::move(arg);
    return Init_DebugRequest_enable_system_stat(msg_);
  }

private:
  ::bosdyn_msgs::msg::DebugRequest msg_;
};

class Init_DebugRequest_enable_bit
{
public:
  explicit Init_DebugRequest_enable_bit(::bosdyn_msgs::msg::DebugRequest & msg)
  : msg_(msg)
  {}
  Init_DebugRequest_enable_shock enable_bit(::bosdyn_msgs::msg::DebugRequest::_enable_bit_type arg)
  {
    msg_.enable_bit = std::move(arg);
    return Init_DebugRequest_enable_shock(msg_);
  }

private:
  ::bosdyn_msgs::msg::DebugRequest msg_;
};

class Init_DebugRequest_enable_humidity
{
public:
  explicit Init_DebugRequest_enable_humidity(::bosdyn_msgs::msg::DebugRequest & msg)
  : msg_(msg)
  {}
  Init_DebugRequest_enable_bit enable_humidity(::bosdyn_msgs::msg::DebugRequest::_enable_humidity_type arg)
  {
    msg_.enable_humidity = std::move(arg);
    return Init_DebugRequest_enable_bit(msg_);
  }

private:
  ::bosdyn_msgs::msg::DebugRequest msg_;
};

class Init_DebugRequest_enable_temperature
{
public:
  explicit Init_DebugRequest_enable_temperature(::bosdyn_msgs::msg::DebugRequest & msg)
  : msg_(msg)
  {}
  Init_DebugRequest_enable_humidity enable_temperature(::bosdyn_msgs::msg::DebugRequest::_enable_temperature_type arg)
  {
    msg_.enable_temperature = std::move(arg);
    return Init_DebugRequest_enable_humidity(msg_);
  }

private:
  ::bosdyn_msgs::msg::DebugRequest msg_;
};

class Init_DebugRequest_header_is_set
{
public:
  explicit Init_DebugRequest_header_is_set(::bosdyn_msgs::msg::DebugRequest & msg)
  : msg_(msg)
  {}
  Init_DebugRequest_enable_temperature header_is_set(::bosdyn_msgs::msg::DebugRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DebugRequest_enable_temperature(msg_);
  }

private:
  ::bosdyn_msgs::msg::DebugRequest msg_;
};

class Init_DebugRequest_header
{
public:
  Init_DebugRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugRequest_header_is_set header(::bosdyn_msgs::msg::DebugRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DebugRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DebugRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DebugRequest>()
{
  return bosdyn_msgs::msg::builder::Init_DebugRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DEBUG_REQUEST__BUILDER_HPP_
