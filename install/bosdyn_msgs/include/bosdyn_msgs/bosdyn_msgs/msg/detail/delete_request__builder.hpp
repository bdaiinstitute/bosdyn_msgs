// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DeleteRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DELETE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DELETE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/delete_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DeleteRequest_point_is_set
{
public:
  explicit Init_DeleteRequest_point_is_set(::bosdyn_msgs::msg::DeleteRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DeleteRequest point_is_set(::bosdyn_msgs::msg::DeleteRequest::_point_is_set_type arg)
  {
    msg_.point_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteRequest msg_;
};

class Init_DeleteRequest_point
{
public:
  explicit Init_DeleteRequest_point(::bosdyn_msgs::msg::DeleteRequest & msg)
  : msg_(msg)
  {}
  Init_DeleteRequest_point_is_set point(::bosdyn_msgs::msg::DeleteRequest::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_DeleteRequest_point_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteRequest msg_;
};

class Init_DeleteRequest_header_is_set
{
public:
  explicit Init_DeleteRequest_header_is_set(::bosdyn_msgs::msg::DeleteRequest & msg)
  : msg_(msg)
  {}
  Init_DeleteRequest_point header_is_set(::bosdyn_msgs::msg::DeleteRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DeleteRequest_point(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteRequest msg_;
};

class Init_DeleteRequest_header
{
public:
  Init_DeleteRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeleteRequest_header_is_set header(::bosdyn_msgs::msg::DeleteRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DeleteRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DeleteRequest>()
{
  return bosdyn_msgs::msg::builder::Init_DeleteRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DELETE_REQUEST__BUILDER_HPP_
