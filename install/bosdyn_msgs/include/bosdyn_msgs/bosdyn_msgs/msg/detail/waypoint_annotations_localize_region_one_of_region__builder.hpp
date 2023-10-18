// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLocalizeRegionOneOfRegion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_ONE_OF_REGION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_ONE_OF_REGION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_one_of_region__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WaypointAnnotationsLocalizeRegionOneOfRegion_region_choice
{
public:
  explicit Init_WaypointAnnotationsLocalizeRegionOneOfRegion_region_choice(::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion region_choice(::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion::_region_choice_type arg)
  {
    msg_.region_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion msg_;
};

class Init_WaypointAnnotationsLocalizeRegionOneOfRegion_circle
{
public:
  explicit Init_WaypointAnnotationsLocalizeRegionOneOfRegion_circle(::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotationsLocalizeRegionOneOfRegion_region_choice circle(::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion::_circle_type arg)
  {
    msg_.circle = std::move(arg);
    return Init_WaypointAnnotationsLocalizeRegionOneOfRegion_region_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion msg_;
};

class Init_WaypointAnnotationsLocalizeRegionOneOfRegion_empty
{
public:
  explicit Init_WaypointAnnotationsLocalizeRegionOneOfRegion_empty(::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotationsLocalizeRegionOneOfRegion_circle empty(::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion::_empty_type arg)
  {
    msg_.empty = std::move(arg);
    return Init_WaypointAnnotationsLocalizeRegionOneOfRegion_circle(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion msg_;
};

class Init_WaypointAnnotationsLocalizeRegionOneOfRegion_default_region
{
public:
  Init_WaypointAnnotationsLocalizeRegionOneOfRegion_default_region()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointAnnotationsLocalizeRegionOneOfRegion_empty default_region(::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion::_default_region_type arg)
  {
    msg_.default_region = std::move(arg);
    return Init_WaypointAnnotationsLocalizeRegionOneOfRegion_empty(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion>()
{
  return bosdyn_msgs::msg::builder::Init_WaypointAnnotationsLocalizeRegionOneOfRegion_default_region();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_ONE_OF_REGION__BUILDER_HPP_
