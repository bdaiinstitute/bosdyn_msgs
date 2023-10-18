// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CustomParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/custom_param_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CustomParamSpec_spec
{
public:
  Init_CustomParamSpec_spec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::CustomParamSpec spec(::bosdyn_msgs::msg::CustomParamSpec::_spec_type arg)
  {
    msg_.spec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CustomParamSpec>()
{
  return bosdyn_msgs::msg::builder::Init_CustomParamSpec_spec();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_SPEC__BUILDER_HPP_
