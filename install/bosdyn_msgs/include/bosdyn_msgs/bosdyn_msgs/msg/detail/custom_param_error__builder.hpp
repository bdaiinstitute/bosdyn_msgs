// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CustomParamError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/custom_param_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CustomParamError_error_messages
{
public:
  explicit Init_CustomParamError_error_messages(::bosdyn_msgs::msg::CustomParamError & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CustomParamError error_messages(::bosdyn_msgs::msg::CustomParamError::_error_messages_type arg)
  {
    msg_.error_messages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamError msg_;
};

class Init_CustomParamError_status
{
public:
  Init_CustomParamError_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomParamError_error_messages status(::bosdyn_msgs::msg::CustomParamError::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CustomParamError_error_messages(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CustomParamError>()
{
  return bosdyn_msgs::msg::builder::Init_CustomParamError_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ERROR__BUILDER_HPP_
