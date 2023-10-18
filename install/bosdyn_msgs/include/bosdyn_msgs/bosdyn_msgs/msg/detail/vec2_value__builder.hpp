// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Vec2Value.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VEC2_VALUE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VEC2_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/vec2_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Vec2Value_y_is_set
{
public:
  explicit Init_Vec2Value_y_is_set(::bosdyn_msgs::msg::Vec2Value & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Vec2Value y_is_set(::bosdyn_msgs::msg::Vec2Value::_y_is_set_type arg)
  {
    msg_.y_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec2Value msg_;
};

class Init_Vec2Value_y
{
public:
  explicit Init_Vec2Value_y(::bosdyn_msgs::msg::Vec2Value & msg)
  : msg_(msg)
  {}
  Init_Vec2Value_y_is_set y(::bosdyn_msgs::msg::Vec2Value::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Vec2Value_y_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec2Value msg_;
};

class Init_Vec2Value_x_is_set
{
public:
  explicit Init_Vec2Value_x_is_set(::bosdyn_msgs::msg::Vec2Value & msg)
  : msg_(msg)
  {}
  Init_Vec2Value_y x_is_set(::bosdyn_msgs::msg::Vec2Value::_x_is_set_type arg)
  {
    msg_.x_is_set = std::move(arg);
    return Init_Vec2Value_y(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec2Value msg_;
};

class Init_Vec2Value_x
{
public:
  Init_Vec2Value_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vec2Value_x_is_set x(::bosdyn_msgs::msg::Vec2Value::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vec2Value_x_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec2Value msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Vec2Value>()
{
  return bosdyn_msgs::msg::builder::Init_Vec2Value_x();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VEC2_VALUE__BUILDER_HPP_
