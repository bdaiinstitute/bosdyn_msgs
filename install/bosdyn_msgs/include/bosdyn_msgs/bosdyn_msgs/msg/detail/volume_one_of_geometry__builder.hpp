// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/VolumeOneOfGeometry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VOLUME_ONE_OF_GEOMETRY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VOLUME_ONE_OF_GEOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/volume_one_of_geometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_VolumeOneOfGeometry_geometry_choice
{
public:
  explicit Init_VolumeOneOfGeometry_geometry_choice(::bosdyn_msgs::msg::VolumeOneOfGeometry & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::VolumeOneOfGeometry geometry_choice(::bosdyn_msgs::msg::VolumeOneOfGeometry::_geometry_choice_type arg)
  {
    msg_.geometry_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::VolumeOneOfGeometry msg_;
};

class Init_VolumeOneOfGeometry_box
{
public:
  Init_VolumeOneOfGeometry_box()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VolumeOneOfGeometry_geometry_choice box(::bosdyn_msgs::msg::VolumeOneOfGeometry::_box_type arg)
  {
    msg_.box = std::move(arg);
    return Init_VolumeOneOfGeometry_geometry_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::VolumeOneOfGeometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::VolumeOneOfGeometry>()
{
  return bosdyn_msgs::msg::builder::Init_VolumeOneOfGeometry_box();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VOLUME_ONE_OF_GEOMETRY__BUILDER_HPP_
