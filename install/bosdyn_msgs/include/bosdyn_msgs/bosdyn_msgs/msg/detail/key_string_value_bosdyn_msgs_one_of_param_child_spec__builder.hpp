// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/KeyStringValueBosdynMsgsOneOfParamChildSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_ONE_OF_PARAM_CHILD_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_ONE_OF_PARAM_CHILD_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_one_of_param_child_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyStringValueBosdynMsgsOneOfParamChildSpec_value
{
public:
  explicit Init_KeyStringValueBosdynMsgsOneOfParamChildSpec_value(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOneOfParamChildSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOneOfParamChildSpec value(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOneOfParamChildSpec::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOneOfParamChildSpec msg_;
};

class Init_KeyStringValueBosdynMsgsOneOfParamChildSpec_key
{
public:
  Init_KeyStringValueBosdynMsgsOneOfParamChildSpec_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyStringValueBosdynMsgsOneOfParamChildSpec_value key(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOneOfParamChildSpec::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyStringValueBosdynMsgsOneOfParamChildSpec_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOneOfParamChildSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOneOfParamChildSpec>()
{
  return bosdyn_msgs::msg::builder::Init_KeyStringValueBosdynMsgsOneOfParamChildSpec_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_ONE_OF_PARAM_CHILD_SPEC__BUILDER_HPP_
