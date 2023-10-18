// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetPowerStatusResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_POWER_STATUS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_POWER_STATUS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_power_status_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetPowerStatusResponse_status_is_set
{
public:
  explicit Init_SetPowerStatusResponse_status_is_set(::bosdyn_msgs::msg::SetPowerStatusResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetPowerStatusResponse status_is_set(::bosdyn_msgs::msg::SetPowerStatusResponse::_status_is_set_type arg)
  {
    msg_.status_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPowerStatusResponse msg_;
};

class Init_SetPowerStatusResponse_status
{
public:
  explicit Init_SetPowerStatusResponse_status(::bosdyn_msgs::msg::SetPowerStatusResponse & msg)
  : msg_(msg)
  {}
  Init_SetPowerStatusResponse_status_is_set status(::bosdyn_msgs::msg::SetPowerStatusResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SetPowerStatusResponse_status_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPowerStatusResponse msg_;
};

class Init_SetPowerStatusResponse_header_is_set
{
public:
  explicit Init_SetPowerStatusResponse_header_is_set(::bosdyn_msgs::msg::SetPowerStatusResponse & msg)
  : msg_(msg)
  {}
  Init_SetPowerStatusResponse_status header_is_set(::bosdyn_msgs::msg::SetPowerStatusResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetPowerStatusResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPowerStatusResponse msg_;
};

class Init_SetPowerStatusResponse_header
{
public:
  Init_SetPowerStatusResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPowerStatusResponse_header_is_set header(::bosdyn_msgs::msg::SetPowerStatusResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetPowerStatusResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPowerStatusResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetPowerStatusResponse>()
{
  return bosdyn_msgs::msg::builder::Init_SetPowerStatusResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_POWER_STATUS_RESPONSE__BUILDER_HPP_
