// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Int64ParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INT64_PARAM_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INT64_PARAM_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/int64_param_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Int64ParamSpec_max_value_is_set
{
public:
  explicit Init_Int64ParamSpec_max_value_is_set(::bosdyn_msgs::msg::Int64ParamSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Int64ParamSpec max_value_is_set(::bosdyn_msgs::msg::Int64ParamSpec::_max_value_is_set_type arg)
  {
    msg_.max_value_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Int64ParamSpec msg_;
};

class Init_Int64ParamSpec_max_value
{
public:
  explicit Init_Int64ParamSpec_max_value(::bosdyn_msgs::msg::Int64ParamSpec & msg)
  : msg_(msg)
  {}
  Init_Int64ParamSpec_max_value_is_set max_value(::bosdyn_msgs::msg::Int64ParamSpec::_max_value_type arg)
  {
    msg_.max_value = std::move(arg);
    return Init_Int64ParamSpec_max_value_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Int64ParamSpec msg_;
};

class Init_Int64ParamSpec_min_value_is_set
{
public:
  explicit Init_Int64ParamSpec_min_value_is_set(::bosdyn_msgs::msg::Int64ParamSpec & msg)
  : msg_(msg)
  {}
  Init_Int64ParamSpec_max_value min_value_is_set(::bosdyn_msgs::msg::Int64ParamSpec::_min_value_is_set_type arg)
  {
    msg_.min_value_is_set = std::move(arg);
    return Init_Int64ParamSpec_max_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::Int64ParamSpec msg_;
};

class Init_Int64ParamSpec_min_value
{
public:
  explicit Init_Int64ParamSpec_min_value(::bosdyn_msgs::msg::Int64ParamSpec & msg)
  : msg_(msg)
  {}
  Init_Int64ParamSpec_min_value_is_set min_value(::bosdyn_msgs::msg::Int64ParamSpec::_min_value_type arg)
  {
    msg_.min_value = std::move(arg);
    return Init_Int64ParamSpec_min_value_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Int64ParamSpec msg_;
};

class Init_Int64ParamSpec_units_is_set
{
public:
  explicit Init_Int64ParamSpec_units_is_set(::bosdyn_msgs::msg::Int64ParamSpec & msg)
  : msg_(msg)
  {}
  Init_Int64ParamSpec_min_value units_is_set(::bosdyn_msgs::msg::Int64ParamSpec::_units_is_set_type arg)
  {
    msg_.units_is_set = std::move(arg);
    return Init_Int64ParamSpec_min_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::Int64ParamSpec msg_;
};

class Init_Int64ParamSpec_units
{
public:
  explicit Init_Int64ParamSpec_units(::bosdyn_msgs::msg::Int64ParamSpec & msg)
  : msg_(msg)
  {}
  Init_Int64ParamSpec_units_is_set units(::bosdyn_msgs::msg::Int64ParamSpec::_units_type arg)
  {
    msg_.units = std::move(arg);
    return Init_Int64ParamSpec_units_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Int64ParamSpec msg_;
};

class Init_Int64ParamSpec_default_value_is_set
{
public:
  explicit Init_Int64ParamSpec_default_value_is_set(::bosdyn_msgs::msg::Int64ParamSpec & msg)
  : msg_(msg)
  {}
  Init_Int64ParamSpec_units default_value_is_set(::bosdyn_msgs::msg::Int64ParamSpec::_default_value_is_set_type arg)
  {
    msg_.default_value_is_set = std::move(arg);
    return Init_Int64ParamSpec_units(msg_);
  }

private:
  ::bosdyn_msgs::msg::Int64ParamSpec msg_;
};

class Init_Int64ParamSpec_default_value
{
public:
  Init_Int64ParamSpec_default_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Int64ParamSpec_default_value_is_set default_value(::bosdyn_msgs::msg::Int64ParamSpec::_default_value_type arg)
  {
    msg_.default_value = std::move(arg);
    return Init_Int64ParamSpec_default_value_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Int64ParamSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Int64ParamSpec>()
{
  return bosdyn_msgs::msg::builder::Init_Int64ParamSpec_default_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INT64_PARAM_SPEC__BUILDER_HPP_
