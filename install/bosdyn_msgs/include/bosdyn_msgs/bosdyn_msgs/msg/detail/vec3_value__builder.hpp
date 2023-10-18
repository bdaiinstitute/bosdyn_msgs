// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Vec3Value.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VEC3_VALUE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VEC3_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/vec3_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Vec3Value_z_is_set
{
public:
  explicit Init_Vec3Value_z_is_set(::bosdyn_msgs::msg::Vec3Value & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Vec3Value z_is_set(::bosdyn_msgs::msg::Vec3Value::_z_is_set_type arg)
  {
    msg_.z_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Value msg_;
};

class Init_Vec3Value_z
{
public:
  explicit Init_Vec3Value_z(::bosdyn_msgs::msg::Vec3Value & msg)
  : msg_(msg)
  {}
  Init_Vec3Value_z_is_set z(::bosdyn_msgs::msg::Vec3Value::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Vec3Value_z_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Value msg_;
};

class Init_Vec3Value_y_is_set
{
public:
  explicit Init_Vec3Value_y_is_set(::bosdyn_msgs::msg::Vec3Value & msg)
  : msg_(msg)
  {}
  Init_Vec3Value_z y_is_set(::bosdyn_msgs::msg::Vec3Value::_y_is_set_type arg)
  {
    msg_.y_is_set = std::move(arg);
    return Init_Vec3Value_z(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Value msg_;
};

class Init_Vec3Value_y
{
public:
  explicit Init_Vec3Value_y(::bosdyn_msgs::msg::Vec3Value & msg)
  : msg_(msg)
  {}
  Init_Vec3Value_y_is_set y(::bosdyn_msgs::msg::Vec3Value::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Vec3Value_y_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Value msg_;
};

class Init_Vec3Value_x_is_set
{
public:
  explicit Init_Vec3Value_x_is_set(::bosdyn_msgs::msg::Vec3Value & msg)
  : msg_(msg)
  {}
  Init_Vec3Value_y x_is_set(::bosdyn_msgs::msg::Vec3Value::_x_is_set_type arg)
  {
    msg_.x_is_set = std::move(arg);
    return Init_Vec3Value_y(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Value msg_;
};

class Init_Vec3Value_x
{
public:
  Init_Vec3Value_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vec3Value_x_is_set x(::bosdyn_msgs::msg::Vec3Value::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vec3Value_x_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Value msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Vec3Value>()
{
  return bosdyn_msgs::msg::builder::Init_Vec3Value_x();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VEC3_VALUE__BUILDER_HPP_
