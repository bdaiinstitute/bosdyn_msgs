// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetScreenRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_SCREEN_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_SCREEN_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_screen_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetScreenRequest_name
{
public:
  explicit Init_SetScreenRequest_name(::bosdyn_msgs::msg::SetScreenRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetScreenRequest name(::bosdyn_msgs::msg::SetScreenRequest::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetScreenRequest msg_;
};

class Init_SetScreenRequest_header_is_set
{
public:
  explicit Init_SetScreenRequest_header_is_set(::bosdyn_msgs::msg::SetScreenRequest & msg)
  : msg_(msg)
  {}
  Init_SetScreenRequest_name header_is_set(::bosdyn_msgs::msg::SetScreenRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetScreenRequest_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetScreenRequest msg_;
};

class Init_SetScreenRequest_header
{
public:
  Init_SetScreenRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetScreenRequest_header_is_set header(::bosdyn_msgs::msg::SetScreenRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetScreenRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetScreenRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetScreenRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SetScreenRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_SCREEN_REQUEST__BUILDER_HPP_
