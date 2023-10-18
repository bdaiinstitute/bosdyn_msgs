// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/IREnableDisableRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_ENABLE_DISABLE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IR_ENABLE_DISABLE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ir_enable_disable_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_IREnableDisableRequest_request
{
public:
  explicit Init_IREnableDisableRequest_request(::bosdyn_msgs::msg::IREnableDisableRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::IREnableDisableRequest request(::bosdyn_msgs::msg::IREnableDisableRequest::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::IREnableDisableRequest msg_;
};

class Init_IREnableDisableRequest_header_is_set
{
public:
  explicit Init_IREnableDisableRequest_header_is_set(::bosdyn_msgs::msg::IREnableDisableRequest & msg)
  : msg_(msg)
  {}
  Init_IREnableDisableRequest_request header_is_set(::bosdyn_msgs::msg::IREnableDisableRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_IREnableDisableRequest_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::IREnableDisableRequest msg_;
};

class Init_IREnableDisableRequest_header
{
public:
  Init_IREnableDisableRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IREnableDisableRequest_header_is_set header(::bosdyn_msgs::msg::IREnableDisableRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IREnableDisableRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::IREnableDisableRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::IREnableDisableRequest>()
{
  return bosdyn_msgs::msg::builder::Init_IREnableDisableRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_ENABLE_DISABLE_REQUEST__BUILDER_HPP_
