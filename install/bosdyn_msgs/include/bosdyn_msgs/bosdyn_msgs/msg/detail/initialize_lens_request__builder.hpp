// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/InitializeLensRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INITIALIZE_LENS_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INITIALIZE_LENS_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/initialize_lens_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_InitializeLensRequest_header_is_set
{
public:
  explicit Init_InitializeLensRequest_header_is_set(::bosdyn_msgs::msg::InitializeLensRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::InitializeLensRequest header_is_set(::bosdyn_msgs::msg::InitializeLensRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::InitializeLensRequest msg_;
};

class Init_InitializeLensRequest_header
{
public:
  Init_InitializeLensRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InitializeLensRequest_header_is_set header(::bosdyn_msgs::msg::InitializeLensRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InitializeLensRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InitializeLensRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::InitializeLensRequest>()
{
  return bosdyn_msgs::msg::builder::Init_InitializeLensRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INITIALIZE_LENS_REQUEST__BUILDER_HPP_
