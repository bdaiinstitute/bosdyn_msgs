// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetBITStatusResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_BIT_STATUS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_BIT_STATUS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_bit_status_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetBITStatusResponse_degradations
{
public:
  explicit Init_GetBITStatusResponse_degradations(::bosdyn_msgs::msg::GetBITStatusResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetBITStatusResponse degradations(::bosdyn_msgs::msg::GetBITStatusResponse::_degradations_type arg)
  {
    msg_.degradations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetBITStatusResponse msg_;
};

class Init_GetBITStatusResponse_events
{
public:
  explicit Init_GetBITStatusResponse_events(::bosdyn_msgs::msg::GetBITStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetBITStatusResponse_degradations events(::bosdyn_msgs::msg::GetBITStatusResponse::_events_type arg)
  {
    msg_.events = std::move(arg);
    return Init_GetBITStatusResponse_degradations(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetBITStatusResponse msg_;
};

class Init_GetBITStatusResponse_header_is_set
{
public:
  explicit Init_GetBITStatusResponse_header_is_set(::bosdyn_msgs::msg::GetBITStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetBITStatusResponse_events header_is_set(::bosdyn_msgs::msg::GetBITStatusResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetBITStatusResponse_events(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetBITStatusResponse msg_;
};

class Init_GetBITStatusResponse_header
{
public:
  Init_GetBITStatusResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBITStatusResponse_header_is_set header(::bosdyn_msgs::msg::GetBITStatusResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetBITStatusResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetBITStatusResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetBITStatusResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetBITStatusResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_BIT_STATUS_RESPONSE__BUILDER_HPP_
