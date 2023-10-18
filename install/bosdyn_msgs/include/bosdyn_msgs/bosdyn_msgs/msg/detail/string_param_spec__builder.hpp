// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StringParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STRING_PARAM_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STRING_PARAM_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/string_param_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StringParamSpec_default_value
{
public:
  explicit Init_StringParamSpec_default_value(::bosdyn_msgs::msg::StringParamSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StringParamSpec default_value(::bosdyn_msgs::msg::StringParamSpec::_default_value_type arg)
  {
    msg_.default_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StringParamSpec msg_;
};

class Init_StringParamSpec_editable
{
public:
  explicit Init_StringParamSpec_editable(::bosdyn_msgs::msg::StringParamSpec & msg)
  : msg_(msg)
  {}
  Init_StringParamSpec_default_value editable(::bosdyn_msgs::msg::StringParamSpec::_editable_type arg)
  {
    msg_.editable = std::move(arg);
    return Init_StringParamSpec_default_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::StringParamSpec msg_;
};

class Init_StringParamSpec_options
{
public:
  Init_StringParamSpec_options()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StringParamSpec_editable options(::bosdyn_msgs::msg::StringParamSpec::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_StringParamSpec_editable(msg_);
  }

private:
  ::bosdyn_msgs::msg::StringParamSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StringParamSpec>()
{
  return bosdyn_msgs::msg::builder::Init_StringParamSpec_options();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STRING_PARAM_SPEC__BUILDER_HPP_
