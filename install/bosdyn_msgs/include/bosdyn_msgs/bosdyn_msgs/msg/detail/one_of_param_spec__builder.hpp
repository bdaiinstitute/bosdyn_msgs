// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/OneOfParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ONE_OF_PARAM_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ONE_OF_PARAM_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/one_of_param_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_OneOfParamSpec_default_key
{
public:
  explicit Init_OneOfParamSpec_default_key(::bosdyn_msgs::msg::OneOfParamSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::OneOfParamSpec default_key(::bosdyn_msgs::msg::OneOfParamSpec::_default_key_type arg)
  {
    msg_.default_key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::OneOfParamSpec msg_;
};

class Init_OneOfParamSpec_specs
{
public:
  Init_OneOfParamSpec_specs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OneOfParamSpec_default_key specs(::bosdyn_msgs::msg::OneOfParamSpec::_specs_type arg)
  {
    msg_.specs = std::move(arg);
    return Init_OneOfParamSpec_default_key(msg_);
  }

private:
  ::bosdyn_msgs::msg::OneOfParamSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::OneOfParamSpec>()
{
  return bosdyn_msgs::msg::builder::Init_OneOfParamSpec_specs();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ONE_OF_PARAM_SPEC__BUILDER_HPP_
