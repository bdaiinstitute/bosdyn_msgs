// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StaircaseWidth.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_WIDTH__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_WIDTH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/staircase_width__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StaircaseWidth_bounded_width
{
public:
  explicit Init_StaircaseWidth_bounded_width(::bosdyn_msgs::msg::StaircaseWidth & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StaircaseWidth bounded_width(::bosdyn_msgs::msg::StaircaseWidth::_bounded_width_type arg)
  {
    msg_.bounded_width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseWidth msg_;
};

class Init_StaircaseWidth_width
{
public:
  Init_StaircaseWidth_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StaircaseWidth_bounded_width width(::bosdyn_msgs::msg::StaircaseWidth::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_StaircaseWidth_bounded_width(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseWidth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StaircaseWidth>()
{
  return bosdyn_msgs::msg::builder::Init_StaircaseWidth_width();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_WIDTH__BUILDER_HPP_
