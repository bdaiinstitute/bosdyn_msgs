// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DrawablePoints.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_POINTS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_POINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/drawable_points__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DrawablePoints_points
{
public:
  Init_DrawablePoints_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::DrawablePoints points(::bosdyn_msgs::msg::DrawablePoints::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DrawablePoints>()
{
  return bosdyn_msgs::msg::builder::Init_DrawablePoints_points();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_POINTS__BUILDER_HPP_
