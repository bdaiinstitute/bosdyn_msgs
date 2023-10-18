// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DictParamChildSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DICT_PARAM_CHILD_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DICT_PARAM_CHILD_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/dict_param_child_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DictParamChildSpec_ui_info_is_set
{
public:
  explicit Init_DictParamChildSpec_ui_info_is_set(::bosdyn_msgs::msg::DictParamChildSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DictParamChildSpec ui_info_is_set(::bosdyn_msgs::msg::DictParamChildSpec::_ui_info_is_set_type arg)
  {
    msg_.ui_info_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DictParamChildSpec msg_;
};

class Init_DictParamChildSpec_ui_info
{
public:
  explicit Init_DictParamChildSpec_ui_info(::bosdyn_msgs::msg::DictParamChildSpec & msg)
  : msg_(msg)
  {}
  Init_DictParamChildSpec_ui_info_is_set ui_info(::bosdyn_msgs::msg::DictParamChildSpec::_ui_info_type arg)
  {
    msg_.ui_info = std::move(arg);
    return Init_DictParamChildSpec_ui_info_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DictParamChildSpec msg_;
};

class Init_DictParamChildSpec_spec_is_set
{
public:
  explicit Init_DictParamChildSpec_spec_is_set(::bosdyn_msgs::msg::DictParamChildSpec & msg)
  : msg_(msg)
  {}
  Init_DictParamChildSpec_ui_info spec_is_set(::bosdyn_msgs::msg::DictParamChildSpec::_spec_is_set_type arg)
  {
    msg_.spec_is_set = std::move(arg);
    return Init_DictParamChildSpec_ui_info(msg_);
  }

private:
  ::bosdyn_msgs::msg::DictParamChildSpec msg_;
};

class Init_DictParamChildSpec_spec
{
public:
  Init_DictParamChildSpec_spec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DictParamChildSpec_spec_is_set spec(::bosdyn_msgs::msg::DictParamChildSpec::_spec_type arg)
  {
    msg_.spec = std::move(arg);
    return Init_DictParamChildSpec_spec_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DictParamChildSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DictParamChildSpec>()
{
  return bosdyn_msgs::msg::builder::Init_DictParamChildSpec_spec();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DICT_PARAM_CHILD_SPEC__BUILDER_HPP_
