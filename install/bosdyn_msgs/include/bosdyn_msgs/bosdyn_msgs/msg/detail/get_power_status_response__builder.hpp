// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetPowerStatusResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_POWER_STATUS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_POWER_STATUS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_power_status_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetPowerStatusResponse_status_is_set
{
public:
  explicit Init_GetPowerStatusResponse_status_is_set(::bosdyn_msgs::msg::GetPowerStatusResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetPowerStatusResponse status_is_set(::bosdyn_msgs::msg::GetPowerStatusResponse::_status_is_set_type arg)
  {
    msg_.status_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPowerStatusResponse msg_;
};

class Init_GetPowerStatusResponse_status
{
public:
  explicit Init_GetPowerStatusResponse_status(::bosdyn_msgs::msg::GetPowerStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetPowerStatusResponse_status_is_set status(::bosdyn_msgs::msg::GetPowerStatusResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetPowerStatusResponse_status_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPowerStatusResponse msg_;
};

class Init_GetPowerStatusResponse_header_is_set
{
public:
  explicit Init_GetPowerStatusResponse_header_is_set(::bosdyn_msgs::msg::GetPowerStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetPowerStatusResponse_status header_is_set(::bosdyn_msgs::msg::GetPowerStatusResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetPowerStatusResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPowerStatusResponse msg_;
};

class Init_GetPowerStatusResponse_header
{
public:
  Init_GetPowerStatusResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPowerStatusResponse_header_is_set header(::bosdyn_msgs::msg::GetPowerStatusResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetPowerStatusResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPowerStatusResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetPowerStatusResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetPowerStatusResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_POWER_STATUS_RESPONSE__BUILDER_HPP_
