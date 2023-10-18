// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UnitsOneOfUnits.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UNITS_ONE_OF_UNITS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UNITS_ONE_OF_UNITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/units_one_of_units__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UnitsOneOfUnits_units_choice
{
public:
  explicit Init_UnitsOneOfUnits_units_choice(::bosdyn_msgs::msg::UnitsOneOfUnits & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UnitsOneOfUnits units_choice(::bosdyn_msgs::msg::UnitsOneOfUnits::_units_choice_type arg)
  {
    msg_.units_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UnitsOneOfUnits msg_;
};

class Init_UnitsOneOfUnits_press
{
public:
  explicit Init_UnitsOneOfUnits_press(::bosdyn_msgs::msg::UnitsOneOfUnits & msg)
  : msg_(msg)
  {}
  Init_UnitsOneOfUnits_units_choice press(::bosdyn_msgs::msg::UnitsOneOfUnits::_press_type arg)
  {
    msg_.press = std::move(arg);
    return Init_UnitsOneOfUnits_units_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::UnitsOneOfUnits msg_;
};

class Init_UnitsOneOfUnits_temp
{
public:
  explicit Init_UnitsOneOfUnits_temp(::bosdyn_msgs::msg::UnitsOneOfUnits & msg)
  : msg_(msg)
  {}
  Init_UnitsOneOfUnits_press temp(::bosdyn_msgs::msg::UnitsOneOfUnits::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_UnitsOneOfUnits_press(msg_);
  }

private:
  ::bosdyn_msgs::msg::UnitsOneOfUnits msg_;
};

class Init_UnitsOneOfUnits_name
{
public:
  Init_UnitsOneOfUnits_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnitsOneOfUnits_temp name(::bosdyn_msgs::msg::UnitsOneOfUnits::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_UnitsOneOfUnits_temp(msg_);
  }

private:
  ::bosdyn_msgs::msg::UnitsOneOfUnits msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UnitsOneOfUnits>()
{
  return bosdyn_msgs::msg::builder::Init_UnitsOneOfUnits_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UNITS_ONE_OF_UNITS__BUILDER_HPP_
