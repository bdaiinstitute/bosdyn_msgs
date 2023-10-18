// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Circle.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CIRCLE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CIRCLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/circle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Circle_radius
{
public:
  explicit Init_Circle_radius(::bosdyn_msgs::msg::Circle & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Circle radius(::bosdyn_msgs::msg::Circle::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Circle msg_;
};

class Init_Circle_center_pt_is_set
{
public:
  explicit Init_Circle_center_pt_is_set(::bosdyn_msgs::msg::Circle & msg)
  : msg_(msg)
  {}
  Init_Circle_radius center_pt_is_set(::bosdyn_msgs::msg::Circle::_center_pt_is_set_type arg)
  {
    msg_.center_pt_is_set = std::move(arg);
    return Init_Circle_radius(msg_);
  }

private:
  ::bosdyn_msgs::msg::Circle msg_;
};

class Init_Circle_center_pt
{
public:
  Init_Circle_center_pt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circle_center_pt_is_set center_pt(::bosdyn_msgs::msg::Circle::_center_pt_type arg)
  {
    msg_.center_pt = std::move(arg);
    return Init_Circle_center_pt_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Circle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Circle>()
{
  return bosdyn_msgs::msg::builder::Init_Circle_center_pt();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CIRCLE__BUILDER_HPP_
