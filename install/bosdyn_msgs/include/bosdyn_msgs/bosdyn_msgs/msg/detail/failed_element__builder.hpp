// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FailedElement.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAILED_ELEMENT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAILED_ELEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/failed_element__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FailedElement_warnings
{
public:
  explicit Init_FailedElement_warnings(::bosdyn_msgs::msg::FailedElement & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FailedElement warnings(::bosdyn_msgs::msg::FailedElement::_warnings_type arg)
  {
    msg_.warnings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailedElement msg_;
};

class Init_FailedElement_errors
{
public:
  Init_FailedElement_errors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FailedElement_warnings errors(::bosdyn_msgs::msg::FailedElement::_errors_type arg)
  {
    msg_.errors = std::move(arg);
    return Init_FailedElement_warnings(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailedElement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FailedElement>()
{
  return bosdyn_msgs::msg::builder::Init_FailedElement_errors();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAILED_ELEMENT__BUILDER_HPP_
