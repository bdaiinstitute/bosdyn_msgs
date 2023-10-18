// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RayIntersection.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAY_INTERSECTION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RAY_INTERSECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ray_intersection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RayIntersection_distance_meters
{
public:
  explicit Init_RayIntersection_distance_meters(::bosdyn_msgs::msg::RayIntersection & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RayIntersection distance_meters(::bosdyn_msgs::msg::RayIntersection::_distance_meters_type arg)
  {
    msg_.distance_meters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RayIntersection msg_;
};

class Init_RayIntersection_hit_position_in_hit_frame_is_set
{
public:
  explicit Init_RayIntersection_hit_position_in_hit_frame_is_set(::bosdyn_msgs::msg::RayIntersection & msg)
  : msg_(msg)
  {}
  Init_RayIntersection_distance_meters hit_position_in_hit_frame_is_set(::bosdyn_msgs::msg::RayIntersection::_hit_position_in_hit_frame_is_set_type arg)
  {
    msg_.hit_position_in_hit_frame_is_set = std::move(arg);
    return Init_RayIntersection_distance_meters(msg_);
  }

private:
  ::bosdyn_msgs::msg::RayIntersection msg_;
};

class Init_RayIntersection_hit_position_in_hit_frame
{
public:
  explicit Init_RayIntersection_hit_position_in_hit_frame(::bosdyn_msgs::msg::RayIntersection & msg)
  : msg_(msg)
  {}
  Init_RayIntersection_hit_position_in_hit_frame_is_set hit_position_in_hit_frame(::bosdyn_msgs::msg::RayIntersection::_hit_position_in_hit_frame_type arg)
  {
    msg_.hit_position_in_hit_frame = std::move(arg);
    return Init_RayIntersection_hit_position_in_hit_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RayIntersection msg_;
};

class Init_RayIntersection_type
{
public:
  Init_RayIntersection_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RayIntersection_hit_position_in_hit_frame type(::bosdyn_msgs::msg::RayIntersection::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RayIntersection_hit_position_in_hit_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::RayIntersection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RayIntersection>()
{
  return bosdyn_msgs::msg::builder::Init_RayIntersection_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAY_INTERSECTION__BUILDER_HPP_
