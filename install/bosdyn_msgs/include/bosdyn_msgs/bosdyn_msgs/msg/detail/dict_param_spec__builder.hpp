// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DictParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DICT_PARAM_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DICT_PARAM_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/dict_param_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DictParamSpec_is_hidden_by_default
{
public:
  explicit Init_DictParamSpec_is_hidden_by_default(::bosdyn_msgs::msg::DictParamSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DictParamSpec is_hidden_by_default(::bosdyn_msgs::msg::DictParamSpec::_is_hidden_by_default_type arg)
  {
    msg_.is_hidden_by_default = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DictParamSpec msg_;
};

class Init_DictParamSpec_specs
{
public:
  Init_DictParamSpec_specs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DictParamSpec_is_hidden_by_default specs(::bosdyn_msgs::msg::DictParamSpec::_specs_type arg)
  {
    msg_.specs = std::move(arg);
    return Init_DictParamSpec_is_hidden_by_default(msg_);
  }

private:
  ::bosdyn_msgs::msg::DictParamSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DictParamSpec>()
{
  return bosdyn_msgs::msg::builder::Init_DictParamSpec_specs();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DICT_PARAM_SPEC__BUILDER_HPP_
