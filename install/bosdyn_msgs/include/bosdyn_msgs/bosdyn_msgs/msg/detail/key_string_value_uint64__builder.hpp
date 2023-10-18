// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/KeyStringValueUint64.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_UINT64__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_UINT64__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/key_string_value_uint64__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyStringValueUint64_value
{
public:
  explicit Init_KeyStringValueUint64_value(::bosdyn_msgs::msg::KeyStringValueUint64 & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::KeyStringValueUint64 value(::bosdyn_msgs::msg::KeyStringValueUint64::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueUint64 msg_;
};

class Init_KeyStringValueUint64_key
{
public:
  Init_KeyStringValueUint64_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyStringValueUint64_value key(::bosdyn_msgs::msg::KeyStringValueUint64::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyStringValueUint64_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueUint64 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::KeyStringValueUint64>()
{
  return bosdyn_msgs::msg::builder::Init_KeyStringValueUint64_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_UINT64__BUILDER_HPP_
