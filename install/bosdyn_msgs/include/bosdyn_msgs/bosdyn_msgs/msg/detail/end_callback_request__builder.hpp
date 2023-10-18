// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EndCallbackRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__END_CALLBACK_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__END_CALLBACK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/end_callback_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EndCallbackRequest_command_id
{
public:
  explicit Init_EndCallbackRequest_command_id(::bosdyn_msgs::msg::EndCallbackRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EndCallbackRequest command_id(::bosdyn_msgs::msg::EndCallbackRequest::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EndCallbackRequest msg_;
};

class Init_EndCallbackRequest_header_is_set
{
public:
  explicit Init_EndCallbackRequest_header_is_set(::bosdyn_msgs::msg::EndCallbackRequest & msg)
  : msg_(msg)
  {}
  Init_EndCallbackRequest_command_id header_is_set(::bosdyn_msgs::msg::EndCallbackRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_EndCallbackRequest_command_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::EndCallbackRequest msg_;
};

class Init_EndCallbackRequest_header
{
public:
  Init_EndCallbackRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EndCallbackRequest_header_is_set header(::bosdyn_msgs::msg::EndCallbackRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EndCallbackRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EndCallbackRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EndCallbackRequest>()
{
  return bosdyn_msgs::msg::builder::Init_EndCallbackRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__END_CALLBACK_REQUEST__BUILDER_HPP_
