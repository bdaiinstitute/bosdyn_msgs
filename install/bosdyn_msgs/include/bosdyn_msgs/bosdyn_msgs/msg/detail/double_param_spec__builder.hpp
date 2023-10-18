// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DoubleParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOUBLE_PARAM_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOUBLE_PARAM_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/double_param_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DoubleParamSpec_max_value_is_set
{
public:
  explicit Init_DoubleParamSpec_max_value_is_set(::bosdyn_msgs::msg::DoubleParamSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DoubleParamSpec max_value_is_set(::bosdyn_msgs::msg::DoubleParamSpec::_max_value_is_set_type arg)
  {
    msg_.max_value_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoubleParamSpec msg_;
};

class Init_DoubleParamSpec_max_value
{
public:
  explicit Init_DoubleParamSpec_max_value(::bosdyn_msgs::msg::DoubleParamSpec & msg)
  : msg_(msg)
  {}
  Init_DoubleParamSpec_max_value_is_set max_value(::bosdyn_msgs::msg::DoubleParamSpec::_max_value_type arg)
  {
    msg_.max_value = std::move(arg);
    return Init_DoubleParamSpec_max_value_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoubleParamSpec msg_;
};

class Init_DoubleParamSpec_min_value_is_set
{
public:
  explicit Init_DoubleParamSpec_min_value_is_set(::bosdyn_msgs::msg::DoubleParamSpec & msg)
  : msg_(msg)
  {}
  Init_DoubleParamSpec_max_value min_value_is_set(::bosdyn_msgs::msg::DoubleParamSpec::_min_value_is_set_type arg)
  {
    msg_.min_value_is_set = std::move(arg);
    return Init_DoubleParamSpec_max_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoubleParamSpec msg_;
};

class Init_DoubleParamSpec_min_value
{
public:
  explicit Init_DoubleParamSpec_min_value(::bosdyn_msgs::msg::DoubleParamSpec & msg)
  : msg_(msg)
  {}
  Init_DoubleParamSpec_min_value_is_set min_value(::bosdyn_msgs::msg::DoubleParamSpec::_min_value_type arg)
  {
    msg_.min_value = std::move(arg);
    return Init_DoubleParamSpec_min_value_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoubleParamSpec msg_;
};

class Init_DoubleParamSpec_units_is_set
{
public:
  explicit Init_DoubleParamSpec_units_is_set(::bosdyn_msgs::msg::DoubleParamSpec & msg)
  : msg_(msg)
  {}
  Init_DoubleParamSpec_min_value units_is_set(::bosdyn_msgs::msg::DoubleParamSpec::_units_is_set_type arg)
  {
    msg_.units_is_set = std::move(arg);
    return Init_DoubleParamSpec_min_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoubleParamSpec msg_;
};

class Init_DoubleParamSpec_units
{
public:
  explicit Init_DoubleParamSpec_units(::bosdyn_msgs::msg::DoubleParamSpec & msg)
  : msg_(msg)
  {}
  Init_DoubleParamSpec_units_is_set units(::bosdyn_msgs::msg::DoubleParamSpec::_units_type arg)
  {
    msg_.units = std::move(arg);
    return Init_DoubleParamSpec_units_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoubleParamSpec msg_;
};

class Init_DoubleParamSpec_default_value_is_set
{
public:
  explicit Init_DoubleParamSpec_default_value_is_set(::bosdyn_msgs::msg::DoubleParamSpec & msg)
  : msg_(msg)
  {}
  Init_DoubleParamSpec_units default_value_is_set(::bosdyn_msgs::msg::DoubleParamSpec::_default_value_is_set_type arg)
  {
    msg_.default_value_is_set = std::move(arg);
    return Init_DoubleParamSpec_units(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoubleParamSpec msg_;
};

class Init_DoubleParamSpec_default_value
{
public:
  Init_DoubleParamSpec_default_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoubleParamSpec_default_value_is_set default_value(::bosdyn_msgs::msg::DoubleParamSpec::_default_value_type arg)
  {
    msg_.default_value = std::move(arg);
    return Init_DoubleParamSpec_default_value_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoubleParamSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DoubleParamSpec>()
{
  return bosdyn_msgs::msg::builder::Init_DoubleParamSpec_default_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOUBLE_PARAM_SPEC__BUILDER_HPP_
