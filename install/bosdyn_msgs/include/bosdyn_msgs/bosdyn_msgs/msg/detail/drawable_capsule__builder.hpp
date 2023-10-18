// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DrawableCapsule.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_CAPSULE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_CAPSULE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/drawable_capsule__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DrawableCapsule_radius
{
public:
  explicit Init_DrawableCapsule_radius(::bosdyn_msgs::msg::DrawableCapsule & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DrawableCapsule radius(::bosdyn_msgs::msg::DrawableCapsule::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableCapsule msg_;
};

class Init_DrawableCapsule_direction_is_set
{
public:
  explicit Init_DrawableCapsule_direction_is_set(::bosdyn_msgs::msg::DrawableCapsule & msg)
  : msg_(msg)
  {}
  Init_DrawableCapsule_radius direction_is_set(::bosdyn_msgs::msg::DrawableCapsule::_direction_is_set_type arg)
  {
    msg_.direction_is_set = std::move(arg);
    return Init_DrawableCapsule_radius(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableCapsule msg_;
};

class Init_DrawableCapsule_direction
{
public:
  Init_DrawableCapsule_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawableCapsule_direction_is_set direction(::bosdyn_msgs::msg::DrawableCapsule::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_DrawableCapsule_direction_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableCapsule msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DrawableCapsule>()
{
  return bosdyn_msgs::msg::builder::Init_DrawableCapsule_direction();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_CAPSULE__BUILDER_HPP_
