// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/InitializeLensResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INITIALIZE_LENS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INITIALIZE_LENS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/initialize_lens_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_InitializeLensResponse_header_is_set
{
public:
  explicit Init_InitializeLensResponse_header_is_set(::bosdyn_msgs::msg::InitializeLensResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::InitializeLensResponse header_is_set(::bosdyn_msgs::msg::InitializeLensResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::InitializeLensResponse msg_;
};

class Init_InitializeLensResponse_header
{
public:
  Init_InitializeLensResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InitializeLensResponse_header_is_set header(::bosdyn_msgs::msg::InitializeLensResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InitializeLensResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InitializeLensResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::InitializeLensResponse>()
{
  return bosdyn_msgs::msg::builder::Init_InitializeLensResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INITIALIZE_LENS_RESPONSE__BUILDER_HPP_
