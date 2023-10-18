// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ConstantValueOneOfValue.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTANT_VALUE_ONE_OF_VALUE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTANT_VALUE_ONE_OF_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/constant_value_one_of_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ConstantValueOneOfValue_value_choice
{
public:
  explicit Init_ConstantValueOneOfValue_value_choice(::bosdyn_msgs::msg::ConstantValueOneOfValue & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ConstantValueOneOfValue value_choice(::bosdyn_msgs::msg::ConstantValueOneOfValue::_value_choice_type arg)
  {
    msg_.value_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstantValueOneOfValue msg_;
};

class Init_ConstantValueOneOfValue_bool_value
{
public:
  explicit Init_ConstantValueOneOfValue_bool_value(::bosdyn_msgs::msg::ConstantValueOneOfValue & msg)
  : msg_(msg)
  {}
  Init_ConstantValueOneOfValue_value_choice bool_value(::bosdyn_msgs::msg::ConstantValueOneOfValue::_bool_value_type arg)
  {
    msg_.bool_value = std::move(arg);
    return Init_ConstantValueOneOfValue_value_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstantValueOneOfValue msg_;
};

class Init_ConstantValueOneOfValue_int_value
{
public:
  explicit Init_ConstantValueOneOfValue_int_value(::bosdyn_msgs::msg::ConstantValueOneOfValue & msg)
  : msg_(msg)
  {}
  Init_ConstantValueOneOfValue_bool_value int_value(::bosdyn_msgs::msg::ConstantValueOneOfValue::_int_value_type arg)
  {
    msg_.int_value = std::move(arg);
    return Init_ConstantValueOneOfValue_bool_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstantValueOneOfValue msg_;
};

class Init_ConstantValueOneOfValue_string_value
{
public:
  explicit Init_ConstantValueOneOfValue_string_value(::bosdyn_msgs::msg::ConstantValueOneOfValue & msg)
  : msg_(msg)
  {}
  Init_ConstantValueOneOfValue_int_value string_value(::bosdyn_msgs::msg::ConstantValueOneOfValue::_string_value_type arg)
  {
    msg_.string_value = std::move(arg);
    return Init_ConstantValueOneOfValue_int_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstantValueOneOfValue msg_;
};

class Init_ConstantValueOneOfValue_float_value
{
public:
  Init_ConstantValueOneOfValue_float_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstantValueOneOfValue_string_value float_value(::bosdyn_msgs::msg::ConstantValueOneOfValue::_float_value_type arg)
  {
    msg_.float_value = std::move(arg);
    return Init_ConstantValueOneOfValue_string_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstantValueOneOfValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ConstantValueOneOfValue>()
{
  return bosdyn_msgs::msg::builder::Init_ConstantValueOneOfValue_float_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTANT_VALUE_ONE_OF_VALUE__BUILDER_HPP_
