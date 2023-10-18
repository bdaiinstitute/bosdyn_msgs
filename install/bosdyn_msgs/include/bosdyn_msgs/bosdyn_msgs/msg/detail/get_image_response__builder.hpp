// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetImageResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_IMAGE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_IMAGE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_image_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetImageResponse_image_responses
{
public:
  explicit Init_GetImageResponse_image_responses(::bosdyn_msgs::msg::GetImageResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetImageResponse image_responses(::bosdyn_msgs::msg::GetImageResponse::_image_responses_type arg)
  {
    msg_.image_responses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetImageResponse msg_;
};

class Init_GetImageResponse_header_is_set
{
public:
  explicit Init_GetImageResponse_header_is_set(::bosdyn_msgs::msg::GetImageResponse & msg)
  : msg_(msg)
  {}
  Init_GetImageResponse_image_responses header_is_set(::bosdyn_msgs::msg::GetImageResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetImageResponse_image_responses(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetImageResponse msg_;
};

class Init_GetImageResponse_header
{
public:
  Init_GetImageResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetImageResponse_header_is_set header(::bosdyn_msgs::msg::GetImageResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetImageResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetImageResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetImageResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetImageResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_IMAGE_RESPONSE__BUILDER_HPP_
