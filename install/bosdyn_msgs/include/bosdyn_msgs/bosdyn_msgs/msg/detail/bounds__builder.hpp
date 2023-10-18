// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Bounds.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOUNDS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOUNDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/bounds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Bounds_upper
{
public:
  explicit Init_Bounds_upper(::bosdyn_msgs::msg::Bounds & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Bounds upper(::bosdyn_msgs::msg::Bounds::_upper_type arg)
  {
    msg_.upper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Bounds msg_;
};

class Init_Bounds_lower
{
public:
  Init_Bounds_lower()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bounds_upper lower(::bosdyn_msgs::msg::Bounds::_lower_type arg)
  {
    msg_.lower = std::move(arg);
    return Init_Bounds_upper(msg_);
  }

private:
  ::bosdyn_msgs::msg::Bounds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Bounds>()
{
  return bosdyn_msgs::msg::builder::Init_Bounds_lower();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOUNDS__BUILDER_HPP_
