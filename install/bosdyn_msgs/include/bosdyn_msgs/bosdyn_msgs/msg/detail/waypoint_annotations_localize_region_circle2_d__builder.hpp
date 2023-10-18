// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLocalizeRegionCircle2D.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_CIRCLE2_D__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_CIRCLE2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_circle2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WaypointAnnotationsLocalizeRegionCircle2D_dist_2d
{
public:
  Init_WaypointAnnotationsLocalizeRegionCircle2D_dist_2d()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D dist_2d(::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D::_dist_2d_type arg)
  {
    msg_.dist_2d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D>()
{
  return bosdyn_msgs::msg::builder::Init_WaypointAnnotationsLocalizeRegionCircle2D_dist_2d();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_CIRCLE2_D__BUILDER_HPP_
