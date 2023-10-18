// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DrawableCylinder.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_CYLINDER__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_CYLINDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/drawable_cylinder__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DrawableCylinder_radius
{
public:
  explicit Init_DrawableCylinder_radius(::bosdyn_msgs::msg::DrawableCylinder & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DrawableCylinder radius(::bosdyn_msgs::msg::DrawableCylinder::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableCylinder msg_;
};

class Init_DrawableCylinder_direction_is_set
{
public:
  explicit Init_DrawableCylinder_direction_is_set(::bosdyn_msgs::msg::DrawableCylinder & msg)
  : msg_(msg)
  {}
  Init_DrawableCylinder_radius direction_is_set(::bosdyn_msgs::msg::DrawableCylinder::_direction_is_set_type arg)
  {
    msg_.direction_is_set = std::move(arg);
    return Init_DrawableCylinder_radius(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableCylinder msg_;
};

class Init_DrawableCylinder_direction
{
public:
  Init_DrawableCylinder_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawableCylinder_direction_is_set direction(::bosdyn_msgs::msg::DrawableCylinder::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_DrawableCylinder_direction_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableCylinder msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DrawableCylinder>()
{
  return bosdyn_msgs::msg::builder::Init_DrawableCylinder_direction();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_CYLINDER__BUILDER_HPP_
