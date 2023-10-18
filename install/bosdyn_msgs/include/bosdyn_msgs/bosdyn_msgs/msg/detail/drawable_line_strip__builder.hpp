// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DrawableLineStrip.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_LINE_STRIP__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_LINE_STRIP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/drawable_line_strip__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DrawableLineStrip_points_is_set
{
public:
  explicit Init_DrawableLineStrip_points_is_set(::bosdyn_msgs::msg::DrawableLineStrip & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DrawableLineStrip points_is_set(::bosdyn_msgs::msg::DrawableLineStrip::_points_is_set_type arg)
  {
    msg_.points_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableLineStrip msg_;
};

class Init_DrawableLineStrip_points
{
public:
  Init_DrawableLineStrip_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawableLineStrip_points_is_set points(::bosdyn_msgs::msg::DrawableLineStrip::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_DrawableLineStrip_points_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableLineStrip msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DrawableLineStrip>()
{
  return bosdyn_msgs::msg::builder::Init_DrawableLineStrip_points();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_LINE_STRIP__BUILDER_HPP_
