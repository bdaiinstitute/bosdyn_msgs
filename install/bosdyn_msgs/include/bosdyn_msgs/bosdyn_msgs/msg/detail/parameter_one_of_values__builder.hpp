// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ParameterOneOfValues.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PARAMETER_ONE_OF_VALUES__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PARAMETER_ONE_OF_VALUES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/parameter_one_of_values__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ParameterOneOfValues_values_choice
{
public:
  explicit Init_ParameterOneOfValues_values_choice(::bosdyn_msgs::msg::ParameterOneOfValues & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ParameterOneOfValues values_choice(::bosdyn_msgs::msg::ParameterOneOfValues::_values_choice_type arg)
  {
    msg_.values_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ParameterOneOfValues msg_;
};

class Init_ParameterOneOfValues_uint_value
{
public:
  explicit Init_ParameterOneOfValues_uint_value(::bosdyn_msgs::msg::ParameterOneOfValues & msg)
  : msg_(msg)
  {}
  Init_ParameterOneOfValues_values_choice uint_value(::bosdyn_msgs::msg::ParameterOneOfValues::_uint_value_type arg)
  {
    msg_.uint_value = std::move(arg);
    return Init_ParameterOneOfValues_values_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ParameterOneOfValues msg_;
};

class Init_ParameterOneOfValues_bool_value
{
public:
  explicit Init_ParameterOneOfValues_bool_value(::bosdyn_msgs::msg::ParameterOneOfValues & msg)
  : msg_(msg)
  {}
  Init_ParameterOneOfValues_uint_value bool_value(::bosdyn_msgs::msg::ParameterOneOfValues::_bool_value_type arg)
  {
    msg_.bool_value = std::move(arg);
    return Init_ParameterOneOfValues_uint_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::ParameterOneOfValues msg_;
};

class Init_ParameterOneOfValues_string_value
{
public:
  explicit Init_ParameterOneOfValues_string_value(::bosdyn_msgs::msg::ParameterOneOfValues & msg)
  : msg_(msg)
  {}
  Init_ParameterOneOfValues_bool_value string_value(::bosdyn_msgs::msg::ParameterOneOfValues::_string_value_type arg)
  {
    msg_.string_value = std::move(arg);
    return Init_ParameterOneOfValues_bool_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::ParameterOneOfValues msg_;
};

class Init_ParameterOneOfValues_duration
{
public:
  explicit Init_ParameterOneOfValues_duration(::bosdyn_msgs::msg::ParameterOneOfValues & msg)
  : msg_(msg)
  {}
  Init_ParameterOneOfValues_string_value duration(::bosdyn_msgs::msg::ParameterOneOfValues::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_ParameterOneOfValues_string_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::ParameterOneOfValues msg_;
};

class Init_ParameterOneOfValues_timestamp
{
public:
  explicit Init_ParameterOneOfValues_timestamp(::bosdyn_msgs::msg::ParameterOneOfValues & msg)
  : msg_(msg)
  {}
  Init_ParameterOneOfValues_duration timestamp(::bosdyn_msgs::msg::ParameterOneOfValues::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ParameterOneOfValues_duration(msg_);
  }

private:
  ::bosdyn_msgs::msg::ParameterOneOfValues msg_;
};

class Init_ParameterOneOfValues_float_value
{
public:
  explicit Init_ParameterOneOfValues_float_value(::bosdyn_msgs::msg::ParameterOneOfValues & msg)
  : msg_(msg)
  {}
  Init_ParameterOneOfValues_timestamp float_value(::bosdyn_msgs::msg::ParameterOneOfValues::_float_value_type arg)
  {
    msg_.float_value = std::move(arg);
    return Init_ParameterOneOfValues_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::ParameterOneOfValues msg_;
};

class Init_ParameterOneOfValues_int_value
{
public:
  Init_ParameterOneOfValues_int_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParameterOneOfValues_float_value int_value(::bosdyn_msgs::msg::ParameterOneOfValues::_int_value_type arg)
  {
    msg_.int_value = std::move(arg);
    return Init_ParameterOneOfValues_float_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::ParameterOneOfValues msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ParameterOneOfValues>()
{
  return bosdyn_msgs::msg::builder::Init_ParameterOneOfValues_int_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PARAMETER_ONE_OF_VALUES__BUILDER_HPP_
