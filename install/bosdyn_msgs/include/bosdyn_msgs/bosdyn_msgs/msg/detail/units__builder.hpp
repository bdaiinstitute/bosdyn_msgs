// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Units.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UNITS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UNITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/units__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Units_is_relative
{
public:
  explicit Init_Units_is_relative(::bosdyn_msgs::msg::Units & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Units is_relative(::bosdyn_msgs::msg::Units::_is_relative_type arg)
  {
    msg_.is_relative = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Units msg_;
};

class Init_Units_units
{
public:
  Init_Units_units()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Units_is_relative units(::bosdyn_msgs::msg::Units::_units_type arg)
  {
    msg_.units = std::move(arg);
    return Init_Units_is_relative(msg_);
  }

private:
  ::bosdyn_msgs::msg::Units msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Units>()
{
  return bosdyn_msgs::msg::builder::Init_Units_units();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UNITS__BUILDER_HPP_
