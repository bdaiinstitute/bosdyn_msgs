// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ValueOneOfSource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VALUE_ONE_OF_SOURCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VALUE_ONE_OF_SOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/value_one_of_source__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ValueOneOfSource_source_choice
{
public:
  explicit Init_ValueOneOfSource_source_choice(::bosdyn_msgs::msg::ValueOneOfSource & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ValueOneOfSource source_choice(::bosdyn_msgs::msg::ValueOneOfSource::_source_choice_type arg)
  {
    msg_.source_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ValueOneOfSource msg_;
};

class Init_ValueOneOfSource_parameter
{
public:
  explicit Init_ValueOneOfSource_parameter(::bosdyn_msgs::msg::ValueOneOfSource & msg)
  : msg_(msg)
  {}
  Init_ValueOneOfSource_source_choice parameter(::bosdyn_msgs::msg::ValueOneOfSource::_parameter_type arg)
  {
    msg_.parameter = std::move(arg);
    return Init_ValueOneOfSource_source_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ValueOneOfSource msg_;
};

class Init_ValueOneOfSource_runtime_var
{
public:
  explicit Init_ValueOneOfSource_runtime_var(::bosdyn_msgs::msg::ValueOneOfSource & msg)
  : msg_(msg)
  {}
  Init_ValueOneOfSource_parameter runtime_var(::bosdyn_msgs::msg::ValueOneOfSource::_runtime_var_type arg)
  {
    msg_.runtime_var = std::move(arg);
    return Init_ValueOneOfSource_parameter(msg_);
  }

private:
  ::bosdyn_msgs::msg::ValueOneOfSource msg_;
};

class Init_ValueOneOfSource_constant
{
public:
  Init_ValueOneOfSource_constant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ValueOneOfSource_runtime_var constant(::bosdyn_msgs::msg::ValueOneOfSource::_constant_type arg)
  {
    msg_.constant = std::move(arg);
    return Init_ValueOneOfSource_runtime_var(msg_);
  }

private:
  ::bosdyn_msgs::msg::ValueOneOfSource msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ValueOneOfSource>()
{
  return bosdyn_msgs::msg::builder::Init_ValueOneOfSource_constant();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VALUE_ONE_OF_SOURCE__BUILDER_HPP_
