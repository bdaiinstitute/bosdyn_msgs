// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Parameter.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PARAMETER__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Parameter_notes
{
public:
  explicit Init_Parameter_notes(::bosdyn_msgs::msg::Parameter & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Parameter notes(::bosdyn_msgs::msg::Parameter::_notes_type arg)
  {
    msg_.notes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Parameter msg_;
};

class Init_Parameter_values
{
public:
  explicit Init_Parameter_values(::bosdyn_msgs::msg::Parameter & msg)
  : msg_(msg)
  {}
  Init_Parameter_notes values(::bosdyn_msgs::msg::Parameter::_values_type arg)
  {
    msg_.values = std::move(arg);
    return Init_Parameter_notes(msg_);
  }

private:
  ::bosdyn_msgs::msg::Parameter msg_;
};

class Init_Parameter_units
{
public:
  explicit Init_Parameter_units(::bosdyn_msgs::msg::Parameter & msg)
  : msg_(msg)
  {}
  Init_Parameter_values units(::bosdyn_msgs::msg::Parameter::_units_type arg)
  {
    msg_.units = std::move(arg);
    return Init_Parameter_values(msg_);
  }

private:
  ::bosdyn_msgs::msg::Parameter msg_;
};

class Init_Parameter_label
{
public:
  Init_Parameter_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Parameter_units label(::bosdyn_msgs::msg::Parameter::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Parameter_units(msg_);
  }

private:
  ::bosdyn_msgs::msg::Parameter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Parameter>()
{
  return bosdyn_msgs::msg::builder::Init_Parameter_label();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PARAMETER__BUILDER_HPP_
