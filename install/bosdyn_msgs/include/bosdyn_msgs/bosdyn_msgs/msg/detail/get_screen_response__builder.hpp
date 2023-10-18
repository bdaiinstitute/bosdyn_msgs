// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetScreenResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_SCREEN_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_SCREEN_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_screen_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetScreenResponse_name
{
public:
  explicit Init_GetScreenResponse_name(::bosdyn_msgs::msg::GetScreenResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetScreenResponse name(::bosdyn_msgs::msg::GetScreenResponse::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetScreenResponse msg_;
};

class Init_GetScreenResponse_header_is_set
{
public:
  explicit Init_GetScreenResponse_header_is_set(::bosdyn_msgs::msg::GetScreenResponse & msg)
  : msg_(msg)
  {}
  Init_GetScreenResponse_name header_is_set(::bosdyn_msgs::msg::GetScreenResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetScreenResponse_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetScreenResponse msg_;
};

class Init_GetScreenResponse_header
{
public:
  Init_GetScreenResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetScreenResponse_header_is_set header(::bosdyn_msgs::msg::GetScreenResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetScreenResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetScreenResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetScreenResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetScreenResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_SCREEN_RESPONSE__BUILDER_HPP_
