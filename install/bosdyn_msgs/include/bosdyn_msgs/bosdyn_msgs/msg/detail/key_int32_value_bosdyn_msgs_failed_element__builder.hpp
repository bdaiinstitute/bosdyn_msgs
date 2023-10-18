// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/KeyInt32ValueBosdynMsgsFailedElement.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_INT32_VALUE_BOSDYN_MSGS_FAILED_ELEMENT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_INT32_VALUE_BOSDYN_MSGS_FAILED_ELEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/key_int32_value_bosdyn_msgs_failed_element__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyInt32ValueBosdynMsgsFailedElement_value
{
public:
  explicit Init_KeyInt32ValueBosdynMsgsFailedElement_value(::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement value(::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement msg_;
};

class Init_KeyInt32ValueBosdynMsgsFailedElement_key
{
public:
  Init_KeyInt32ValueBosdynMsgsFailedElement_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyInt32ValueBosdynMsgsFailedElement_value key(::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyInt32ValueBosdynMsgsFailedElement_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement>()
{
  return bosdyn_msgs::msg::builder::Init_KeyInt32ValueBosdynMsgsFailedElement_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_INT32_VALUE_BOSDYN_MSGS_FAILED_ELEMENT__BUILDER_HPP_
