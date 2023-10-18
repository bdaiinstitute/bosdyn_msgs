// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CustomParamOneOfValue.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ONE_OF_VALUE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ONE_OF_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/custom_param_one_of_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CustomParamOneOfValue_value_choice
{
public:
  explicit Init_CustomParamOneOfValue_value_choice(::bosdyn_msgs::msg::CustomParamOneOfValue & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CustomParamOneOfValue value_choice(::bosdyn_msgs::msg::CustomParamOneOfValue::_value_choice_type arg)
  {
    msg_.value_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamOneOfValue msg_;
};

class Init_CustomParamOneOfValue_one_of_value
{
public:
  explicit Init_CustomParamOneOfValue_one_of_value(::bosdyn_msgs::msg::CustomParamOneOfValue & msg)
  : msg_(msg)
  {}
  Init_CustomParamOneOfValue_value_choice one_of_value(::bosdyn_msgs::msg::CustomParamOneOfValue::_one_of_value_type arg)
  {
    msg_.one_of_value = std::move(arg);
    return Init_CustomParamOneOfValue_value_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamOneOfValue msg_;
};

class Init_CustomParamOneOfValue_bool_value
{
public:
  explicit Init_CustomParamOneOfValue_bool_value(::bosdyn_msgs::msg::CustomParamOneOfValue & msg)
  : msg_(msg)
  {}
  Init_CustomParamOneOfValue_one_of_value bool_value(::bosdyn_msgs::msg::CustomParamOneOfValue::_bool_value_type arg)
  {
    msg_.bool_value = std::move(arg);
    return Init_CustomParamOneOfValue_one_of_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamOneOfValue msg_;
};

class Init_CustomParamOneOfValue_roi_value
{
public:
  explicit Init_CustomParamOneOfValue_roi_value(::bosdyn_msgs::msg::CustomParamOneOfValue & msg)
  : msg_(msg)
  {}
  Init_CustomParamOneOfValue_bool_value roi_value(::bosdyn_msgs::msg::CustomParamOneOfValue::_roi_value_type arg)
  {
    msg_.roi_value = std::move(arg);
    return Init_CustomParamOneOfValue_bool_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamOneOfValue msg_;
};

class Init_CustomParamOneOfValue_string_value
{
public:
  explicit Init_CustomParamOneOfValue_string_value(::bosdyn_msgs::msg::CustomParamOneOfValue & msg)
  : msg_(msg)
  {}
  Init_CustomParamOneOfValue_roi_value string_value(::bosdyn_msgs::msg::CustomParamOneOfValue::_string_value_type arg)
  {
    msg_.string_value = std::move(arg);
    return Init_CustomParamOneOfValue_roi_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamOneOfValue msg_;
};

class Init_CustomParamOneOfValue_double_value
{
public:
  explicit Init_CustomParamOneOfValue_double_value(::bosdyn_msgs::msg::CustomParamOneOfValue & msg)
  : msg_(msg)
  {}
  Init_CustomParamOneOfValue_string_value double_value(::bosdyn_msgs::msg::CustomParamOneOfValue::_double_value_type arg)
  {
    msg_.double_value = std::move(arg);
    return Init_CustomParamOneOfValue_string_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamOneOfValue msg_;
};

class Init_CustomParamOneOfValue_int_value
{
public:
  explicit Init_CustomParamOneOfValue_int_value(::bosdyn_msgs::msg::CustomParamOneOfValue & msg)
  : msg_(msg)
  {}
  Init_CustomParamOneOfValue_double_value int_value(::bosdyn_msgs::msg::CustomParamOneOfValue::_int_value_type arg)
  {
    msg_.int_value = std::move(arg);
    return Init_CustomParamOneOfValue_double_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamOneOfValue msg_;
};

class Init_CustomParamOneOfValue_list_value
{
public:
  explicit Init_CustomParamOneOfValue_list_value(::bosdyn_msgs::msg::CustomParamOneOfValue & msg)
  : msg_(msg)
  {}
  Init_CustomParamOneOfValue_int_value list_value(::bosdyn_msgs::msg::CustomParamOneOfValue::_list_value_type arg)
  {
    msg_.list_value = std::move(arg);
    return Init_CustomParamOneOfValue_int_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamOneOfValue msg_;
};

class Init_CustomParamOneOfValue_dict_value
{
public:
  Init_CustomParamOneOfValue_dict_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomParamOneOfValue_list_value dict_value(::bosdyn_msgs::msg::CustomParamOneOfValue::_dict_value_type arg)
  {
    msg_.dict_value = std::move(arg);
    return Init_CustomParamOneOfValue_list_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamOneOfValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CustomParamOneOfValue>()
{
  return bosdyn_msgs::msg::builder::Init_CustomParamOneOfValue_dict_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ONE_OF_VALUE__BUILDER_HPP_
