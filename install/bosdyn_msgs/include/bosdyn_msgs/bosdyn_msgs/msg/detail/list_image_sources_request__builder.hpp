// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListImageSourcesRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_IMAGE_SOURCES_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_IMAGE_SOURCES_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_image_sources_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListImageSourcesRequest_header_is_set
{
public:
  explicit Init_ListImageSourcesRequest_header_is_set(::bosdyn_msgs::msg::ListImageSourcesRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListImageSourcesRequest header_is_set(::bosdyn_msgs::msg::ListImageSourcesRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListImageSourcesRequest msg_;
};

class Init_ListImageSourcesRequest_header
{
public:
  Init_ListImageSourcesRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListImageSourcesRequest_header_is_set header(::bosdyn_msgs::msg::ListImageSourcesRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListImageSourcesRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListImageSourcesRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListImageSourcesRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ListImageSourcesRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_IMAGE_SOURCES_REQUEST__BUILDER_HPP_
