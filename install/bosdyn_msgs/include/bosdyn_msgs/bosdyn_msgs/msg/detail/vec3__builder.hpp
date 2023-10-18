// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Vec3.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VEC3__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VEC3__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/vec3__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Vec3_z
{
public:
  explicit Init_Vec3_z(::bosdyn_msgs::msg::Vec3 & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Vec3 z(::bosdyn_msgs::msg::Vec3::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3 msg_;
};

class Init_Vec3_y
{
public:
  explicit Init_Vec3_y(::bosdyn_msgs::msg::Vec3 & msg)
  : msg_(msg)
  {}
  Init_Vec3_z y(::bosdyn_msgs::msg::Vec3::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Vec3_z(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3 msg_;
};

class Init_Vec3_x
{
public:
  Init_Vec3_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vec3_y x(::bosdyn_msgs::msg::Vec3::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vec3_y(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Vec3>()
{
  return bosdyn_msgs::msg::builder::Init_Vec3_x();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VEC3__BUILDER_HPP_
