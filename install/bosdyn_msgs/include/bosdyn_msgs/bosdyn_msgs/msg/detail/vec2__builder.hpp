// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Vec2.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VEC2__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VEC2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/vec2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Vec2_y
{
public:
  explicit Init_Vec2_y(::bosdyn_msgs::msg::Vec2 & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Vec2 y(::bosdyn_msgs::msg::Vec2::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec2 msg_;
};

class Init_Vec2_x
{
public:
  Init_Vec2_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vec2_y x(::bosdyn_msgs::msg::Vec2::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vec2_y(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Vec2>()
{
  return bosdyn_msgs::msg::builder::Init_Vec2_x();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VEC2__BUILDER_HPP_
