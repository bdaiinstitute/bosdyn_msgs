// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BoolParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOOL_PARAM_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOOL_PARAM_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/bool_param_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BoolParamSpec_default_value_is_set
{
public:
  explicit Init_BoolParamSpec_default_value_is_set(::bosdyn_msgs::msg::BoolParamSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BoolParamSpec default_value_is_set(::bosdyn_msgs::msg::BoolParamSpec::_default_value_is_set_type arg)
  {
    msg_.default_value_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BoolParamSpec msg_;
};

class Init_BoolParamSpec_default_value
{
public:
  Init_BoolParamSpec_default_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoolParamSpec_default_value_is_set default_value(::bosdyn_msgs::msg::BoolParamSpec::_default_value_type arg)
  {
    msg_.default_value = std::move(arg);
    return Init_BoolParamSpec_default_value_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BoolParamSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BoolParamSpec>()
{
  return bosdyn_msgs::msg::builder::Init_BoolParamSpec_default_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOOL_PARAM_SPEC__BUILDER_HPP_
