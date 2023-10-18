// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CustomParamSpecOneOfSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_SPEC_ONE_OF_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_SPEC_ONE_OF_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/custom_param_spec_one_of_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CustomParamSpecOneOfSpec_spec_choice
{
public:
  explicit Init_CustomParamSpecOneOfSpec_spec_choice(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CustomParamSpecOneOfSpec spec_choice(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec::_spec_choice_type arg)
  {
    msg_.spec_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamSpecOneOfSpec msg_;
};

class Init_CustomParamSpecOneOfSpec_one_of_spec
{
public:
  explicit Init_CustomParamSpecOneOfSpec_one_of_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec & msg)
  : msg_(msg)
  {}
  Init_CustomParamSpecOneOfSpec_spec_choice one_of_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec::_one_of_spec_type arg)
  {
    msg_.one_of_spec = std::move(arg);
    return Init_CustomParamSpecOneOfSpec_spec_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamSpecOneOfSpec msg_;
};

class Init_CustomParamSpecOneOfSpec_bool_spec
{
public:
  explicit Init_CustomParamSpecOneOfSpec_bool_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec & msg)
  : msg_(msg)
  {}
  Init_CustomParamSpecOneOfSpec_one_of_spec bool_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec::_bool_spec_type arg)
  {
    msg_.bool_spec = std::move(arg);
    return Init_CustomParamSpecOneOfSpec_one_of_spec(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamSpecOneOfSpec msg_;
};

class Init_CustomParamSpecOneOfSpec_roi_spec
{
public:
  explicit Init_CustomParamSpecOneOfSpec_roi_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec & msg)
  : msg_(msg)
  {}
  Init_CustomParamSpecOneOfSpec_bool_spec roi_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec::_roi_spec_type arg)
  {
    msg_.roi_spec = std::move(arg);
    return Init_CustomParamSpecOneOfSpec_bool_spec(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamSpecOneOfSpec msg_;
};

class Init_CustomParamSpecOneOfSpec_string_spec
{
public:
  explicit Init_CustomParamSpecOneOfSpec_string_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec & msg)
  : msg_(msg)
  {}
  Init_CustomParamSpecOneOfSpec_roi_spec string_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec::_string_spec_type arg)
  {
    msg_.string_spec = std::move(arg);
    return Init_CustomParamSpecOneOfSpec_roi_spec(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamSpecOneOfSpec msg_;
};

class Init_CustomParamSpecOneOfSpec_double_spec
{
public:
  explicit Init_CustomParamSpecOneOfSpec_double_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec & msg)
  : msg_(msg)
  {}
  Init_CustomParamSpecOneOfSpec_string_spec double_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec::_double_spec_type arg)
  {
    msg_.double_spec = std::move(arg);
    return Init_CustomParamSpecOneOfSpec_string_spec(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamSpecOneOfSpec msg_;
};

class Init_CustomParamSpecOneOfSpec_int_spec
{
public:
  explicit Init_CustomParamSpecOneOfSpec_int_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec & msg)
  : msg_(msg)
  {}
  Init_CustomParamSpecOneOfSpec_double_spec int_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec::_int_spec_type arg)
  {
    msg_.int_spec = std::move(arg);
    return Init_CustomParamSpecOneOfSpec_double_spec(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamSpecOneOfSpec msg_;
};

class Init_CustomParamSpecOneOfSpec_list_spec
{
public:
  explicit Init_CustomParamSpecOneOfSpec_list_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec & msg)
  : msg_(msg)
  {}
  Init_CustomParamSpecOneOfSpec_int_spec list_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec::_list_spec_type arg)
  {
    msg_.list_spec = std::move(arg);
    return Init_CustomParamSpecOneOfSpec_int_spec(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamSpecOneOfSpec msg_;
};

class Init_CustomParamSpecOneOfSpec_dict_spec
{
public:
  Init_CustomParamSpecOneOfSpec_dict_spec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomParamSpecOneOfSpec_list_spec dict_spec(::bosdyn_msgs::msg::CustomParamSpecOneOfSpec::_dict_spec_type arg)
  {
    msg_.dict_spec = std::move(arg);
    return Init_CustomParamSpecOneOfSpec_list_spec(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamSpecOneOfSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CustomParamSpecOneOfSpec>()
{
  return bosdyn_msgs::msg::builder::Init_CustomParamSpecOneOfSpec_dict_spec();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_SPEC_ONE_OF_SPEC__BUILDER_HPP_
