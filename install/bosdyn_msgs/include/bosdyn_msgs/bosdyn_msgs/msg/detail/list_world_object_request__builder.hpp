// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListWorldObjectRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_WORLD_OBJECT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_WORLD_OBJECT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_world_object_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListWorldObjectRequest_timestamp_filter_is_set
{
public:
  explicit Init_ListWorldObjectRequest_timestamp_filter_is_set(::bosdyn_msgs::msg::ListWorldObjectRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListWorldObjectRequest timestamp_filter_is_set(::bosdyn_msgs::msg::ListWorldObjectRequest::_timestamp_filter_is_set_type arg)
  {
    msg_.timestamp_filter_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListWorldObjectRequest msg_;
};

class Init_ListWorldObjectRequest_timestamp_filter
{
public:
  explicit Init_ListWorldObjectRequest_timestamp_filter(::bosdyn_msgs::msg::ListWorldObjectRequest & msg)
  : msg_(msg)
  {}
  Init_ListWorldObjectRequest_timestamp_filter_is_set timestamp_filter(::bosdyn_msgs::msg::ListWorldObjectRequest::_timestamp_filter_type arg)
  {
    msg_.timestamp_filter = std::move(arg);
    return Init_ListWorldObjectRequest_timestamp_filter_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListWorldObjectRequest msg_;
};

class Init_ListWorldObjectRequest_object_type
{
public:
  explicit Init_ListWorldObjectRequest_object_type(::bosdyn_msgs::msg::ListWorldObjectRequest & msg)
  : msg_(msg)
  {}
  Init_ListWorldObjectRequest_timestamp_filter object_type(::bosdyn_msgs::msg::ListWorldObjectRequest::_object_type_type arg)
  {
    msg_.object_type = std::move(arg);
    return Init_ListWorldObjectRequest_timestamp_filter(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListWorldObjectRequest msg_;
};

class Init_ListWorldObjectRequest_header_is_set
{
public:
  explicit Init_ListWorldObjectRequest_header_is_set(::bosdyn_msgs::msg::ListWorldObjectRequest & msg)
  : msg_(msg)
  {}
  Init_ListWorldObjectRequest_object_type header_is_set(::bosdyn_msgs::msg::ListWorldObjectRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListWorldObjectRequest_object_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListWorldObjectRequest msg_;
};

class Init_ListWorldObjectRequest_header
{
public:
  Init_ListWorldObjectRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListWorldObjectRequest_header_is_set header(::bosdyn_msgs::msg::ListWorldObjectRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListWorldObjectRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListWorldObjectRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListWorldObjectRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ListWorldObjectRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_WORLD_OBJECT_REQUEST__BUILDER_HPP_
