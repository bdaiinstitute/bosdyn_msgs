// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AreaIOneOfGeometry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_I_ONE_OF_GEOMETRY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_I_ONE_OF_GEOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/area_i_one_of_geometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AreaIOneOfGeometry_geometry_choice
{
public:
  explicit Init_AreaIOneOfGeometry_geometry_choice(::bosdyn_msgs::msg::AreaIOneOfGeometry & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AreaIOneOfGeometry geometry_choice(::bosdyn_msgs::msg::AreaIOneOfGeometry::_geometry_choice_type arg)
  {
    msg_.geometry_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaIOneOfGeometry msg_;
};

class Init_AreaIOneOfGeometry_rectangle
{
public:
  Init_AreaIOneOfGeometry_rectangle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AreaIOneOfGeometry_geometry_choice rectangle(::bosdyn_msgs::msg::AreaIOneOfGeometry::_rectangle_type arg)
  {
    msg_.rectangle = std::move(arg);
    return Init_AreaIOneOfGeometry_geometry_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaIOneOfGeometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AreaIOneOfGeometry>()
{
  return bosdyn_msgs::msg::builder::Init_AreaIOneOfGeometry_rectangle();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_I_ONE_OF_GEOMETRY__BUILDER_HPP_
