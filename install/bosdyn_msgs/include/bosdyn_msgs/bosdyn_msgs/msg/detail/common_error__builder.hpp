// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CommonError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__COMMON_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__COMMON_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/common_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CommonError_message
{
public:
  explicit Init_CommonError_message(::bosdyn_msgs::msg::CommonError & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CommonError message(::bosdyn_msgs::msg::CommonError::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CommonError msg_;
};

class Init_CommonError_code
{
public:
  Init_CommonError_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommonError_message code(::bosdyn_msgs::msg::CommonError::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_CommonError_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::CommonError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CommonError>()
{
  return bosdyn_msgs::msg::builder::Init_CommonError_code();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__COMMON_ERROR__BUILDER_HPP_
