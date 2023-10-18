// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/KeyStringValueBool.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOOL__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/key_string_value_bool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyStringValueBool_value
{
public:
  explicit Init_KeyStringValueBool_value(::bosdyn_msgs::msg::KeyStringValueBool & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::KeyStringValueBool value(::bosdyn_msgs::msg::KeyStringValueBool::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueBool msg_;
};

class Init_KeyStringValueBool_key
{
public:
  Init_KeyStringValueBool_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyStringValueBool_value key(::bosdyn_msgs::msg::KeyStringValueBool::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyStringValueBool_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueBool msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::KeyStringValueBool>()
{
  return bosdyn_msgs::msg::builder::Init_KeyStringValueBool_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOOL__BUILDER_HPP_
