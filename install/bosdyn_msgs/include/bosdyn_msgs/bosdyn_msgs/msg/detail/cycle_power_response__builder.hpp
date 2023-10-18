// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CyclePowerResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CYCLE_POWER_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CYCLE_POWER_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/cycle_power_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CyclePowerResponse_status_is_set
{
public:
  explicit Init_CyclePowerResponse_status_is_set(::bosdyn_msgs::msg::CyclePowerResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CyclePowerResponse status_is_set(::bosdyn_msgs::msg::CyclePowerResponse::_status_is_set_type arg)
  {
    msg_.status_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CyclePowerResponse msg_;
};

class Init_CyclePowerResponse_status
{
public:
  explicit Init_CyclePowerResponse_status(::bosdyn_msgs::msg::CyclePowerResponse & msg)
  : msg_(msg)
  {}
  Init_CyclePowerResponse_status_is_set status(::bosdyn_msgs::msg::CyclePowerResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CyclePowerResponse_status_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CyclePowerResponse msg_;
};

class Init_CyclePowerResponse_header_is_set
{
public:
  explicit Init_CyclePowerResponse_header_is_set(::bosdyn_msgs::msg::CyclePowerResponse & msg)
  : msg_(msg)
  {}
  Init_CyclePowerResponse_status header_is_set(::bosdyn_msgs::msg::CyclePowerResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_CyclePowerResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::CyclePowerResponse msg_;
};

class Init_CyclePowerResponse_header
{
public:
  Init_CyclePowerResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CyclePowerResponse_header_is_set header(::bosdyn_msgs::msg::CyclePowerResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CyclePowerResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CyclePowerResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CyclePowerResponse>()
{
  return bosdyn_msgs::msg::builder::Init_CyclePowerResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CYCLE_POWER_RESPONSE__BUILDER_HPP_
