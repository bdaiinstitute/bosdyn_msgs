// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListLogpointsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_LOGPOINTS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_LOGPOINTS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_logpoints_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListLogpointsResponse_logpoints
{
public:
  explicit Init_ListLogpointsResponse_logpoints(::bosdyn_msgs::msg::ListLogpointsResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListLogpointsResponse logpoints(::bosdyn_msgs::msg::ListLogpointsResponse::_logpoints_type arg)
  {
    msg_.logpoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListLogpointsResponse msg_;
};

class Init_ListLogpointsResponse_header_is_set
{
public:
  explicit Init_ListLogpointsResponse_header_is_set(::bosdyn_msgs::msg::ListLogpointsResponse & msg)
  : msg_(msg)
  {}
  Init_ListLogpointsResponse_logpoints header_is_set(::bosdyn_msgs::msg::ListLogpointsResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListLogpointsResponse_logpoints(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListLogpointsResponse msg_;
};

class Init_ListLogpointsResponse_header
{
public:
  Init_ListLogpointsResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListLogpointsResponse_header_is_set header(::bosdyn_msgs::msg::ListLogpointsResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListLogpointsResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListLogpointsResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListLogpointsResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ListLogpointsResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_LOGPOINTS_RESPONSE__BUILDER_HPP_
