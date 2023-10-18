// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AreaOneOfGeometry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_ONE_OF_GEOMETRY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_ONE_OF_GEOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/area_one_of_geometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AreaOneOfGeometry_geometry_choice
{
public:
  explicit Init_AreaOneOfGeometry_geometry_choice(::bosdyn_msgs::msg::AreaOneOfGeometry & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AreaOneOfGeometry geometry_choice(::bosdyn_msgs::msg::AreaOneOfGeometry::_geometry_choice_type arg)
  {
    msg_.geometry_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaOneOfGeometry msg_;
};

class Init_AreaOneOfGeometry_circle
{
public:
  explicit Init_AreaOneOfGeometry_circle(::bosdyn_msgs::msg::AreaOneOfGeometry & msg)
  : msg_(msg)
  {}
  Init_AreaOneOfGeometry_geometry_choice circle(::bosdyn_msgs::msg::AreaOneOfGeometry::_circle_type arg)
  {
    msg_.circle = std::move(arg);
    return Init_AreaOneOfGeometry_geometry_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaOneOfGeometry msg_;
};

class Init_AreaOneOfGeometry_polygon
{
public:
  Init_AreaOneOfGeometry_polygon()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AreaOneOfGeometry_circle polygon(::bosdyn_msgs::msg::AreaOneOfGeometry::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return Init_AreaOneOfGeometry_circle(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaOneOfGeometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AreaOneOfGeometry>()
{
  return bosdyn_msgs::msg::builder::Init_AreaOneOfGeometry_polygon();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_ONE_OF_GEOMETRY__BUILDER_HPP_
