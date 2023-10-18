// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListScreensResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_SCREENS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_SCREENS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_screens_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListScreensResponse_screens
{
public:
  explicit Init_ListScreensResponse_screens(::bosdyn_msgs::msg::ListScreensResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListScreensResponse screens(::bosdyn_msgs::msg::ListScreensResponse::_screens_type arg)
  {
    msg_.screens = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListScreensResponse msg_;
};

class Init_ListScreensResponse_header_is_set
{
public:
  explicit Init_ListScreensResponse_header_is_set(::bosdyn_msgs::msg::ListScreensResponse & msg)
  : msg_(msg)
  {}
  Init_ListScreensResponse_screens header_is_set(::bosdyn_msgs::msg::ListScreensResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListScreensResponse_screens(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListScreensResponse msg_;
};

class Init_ListScreensResponse_header
{
public:
  Init_ListScreensResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListScreensResponse_header_is_set header(::bosdyn_msgs::msg::ListScreensResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListScreensResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListScreensResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListScreensResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ListScreensResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_SCREENS_RESPONSE__BUILDER_HPP_
