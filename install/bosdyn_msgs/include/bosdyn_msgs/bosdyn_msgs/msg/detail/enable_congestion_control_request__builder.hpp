// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EnableCongestionControlRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ENABLE_CONGESTION_CONTROL_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ENABLE_CONGESTION_CONTROL_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/enable_congestion_control_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EnableCongestionControlRequest_enable_congestion_control
{
public:
  explicit Init_EnableCongestionControlRequest_enable_congestion_control(::bosdyn_msgs::msg::EnableCongestionControlRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EnableCongestionControlRequest enable_congestion_control(::bosdyn_msgs::msg::EnableCongestionControlRequest::_enable_congestion_control_type arg)
  {
    msg_.enable_congestion_control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EnableCongestionControlRequest msg_;
};

class Init_EnableCongestionControlRequest_header_is_set
{
public:
  explicit Init_EnableCongestionControlRequest_header_is_set(::bosdyn_msgs::msg::EnableCongestionControlRequest & msg)
  : msg_(msg)
  {}
  Init_EnableCongestionControlRequest_enable_congestion_control header_is_set(::bosdyn_msgs::msg::EnableCongestionControlRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_EnableCongestionControlRequest_enable_congestion_control(msg_);
  }

private:
  ::bosdyn_msgs::msg::EnableCongestionControlRequest msg_;
};

class Init_EnableCongestionControlRequest_header
{
public:
  Init_EnableCongestionControlRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnableCongestionControlRequest_header_is_set header(::bosdyn_msgs::msg::EnableCongestionControlRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EnableCongestionControlRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EnableCongestionControlRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EnableCongestionControlRequest>()
{
  return bosdyn_msgs::msg::builder::Init_EnableCongestionControlRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ENABLE_CONGESTION_CONTROL_REQUEST__BUILDER_HPP_
