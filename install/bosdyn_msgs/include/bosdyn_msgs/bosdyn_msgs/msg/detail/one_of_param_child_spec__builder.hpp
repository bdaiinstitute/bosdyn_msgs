// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/OneOfParamChildSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ONE_OF_PARAM_CHILD_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ONE_OF_PARAM_CHILD_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/one_of_param_child_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_OneOfParamChildSpec_ui_info_is_set
{
public:
  explicit Init_OneOfParamChildSpec_ui_info_is_set(::bosdyn_msgs::msg::OneOfParamChildSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::OneOfParamChildSpec ui_info_is_set(::bosdyn_msgs::msg::OneOfParamChildSpec::_ui_info_is_set_type arg)
  {
    msg_.ui_info_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::OneOfParamChildSpec msg_;
};

class Init_OneOfParamChildSpec_ui_info
{
public:
  explicit Init_OneOfParamChildSpec_ui_info(::bosdyn_msgs::msg::OneOfParamChildSpec & msg)
  : msg_(msg)
  {}
  Init_OneOfParamChildSpec_ui_info_is_set ui_info(::bosdyn_msgs::msg::OneOfParamChildSpec::_ui_info_type arg)
  {
    msg_.ui_info = std::move(arg);
    return Init_OneOfParamChildSpec_ui_info_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::OneOfParamChildSpec msg_;
};

class Init_OneOfParamChildSpec_spec_is_set
{
public:
  explicit Init_OneOfParamChildSpec_spec_is_set(::bosdyn_msgs::msg::OneOfParamChildSpec & msg)
  : msg_(msg)
  {}
  Init_OneOfParamChildSpec_ui_info spec_is_set(::bosdyn_msgs::msg::OneOfParamChildSpec::_spec_is_set_type arg)
  {
    msg_.spec_is_set = std::move(arg);
    return Init_OneOfParamChildSpec_ui_info(msg_);
  }

private:
  ::bosdyn_msgs::msg::OneOfParamChildSpec msg_;
};

class Init_OneOfParamChildSpec_spec
{
public:
  Init_OneOfParamChildSpec_spec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OneOfParamChildSpec_spec_is_set spec(::bosdyn_msgs::msg::OneOfParamChildSpec::_spec_type arg)
  {
    msg_.spec = std::move(arg);
    return Init_OneOfParamChildSpec_spec_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::OneOfParamChildSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::OneOfParamChildSpec>()
{
  return bosdyn_msgs::msg::builder::Init_OneOfParamChildSpec_spec();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ONE_OF_PARAM_CHILD_SPEC__BUILDER_HPP_
