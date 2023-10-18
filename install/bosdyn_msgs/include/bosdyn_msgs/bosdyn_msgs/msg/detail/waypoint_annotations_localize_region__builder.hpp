// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLocalizeRegion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WaypointAnnotationsLocalizeRegion_region
{
public:
  explicit Init_WaypointAnnotationsLocalizeRegion_region(::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion region(::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion::_region_type arg)
  {
    msg_.region = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion msg_;
};

class Init_WaypointAnnotationsLocalizeRegion_state
{
public:
  Init_WaypointAnnotationsLocalizeRegion_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointAnnotationsLocalizeRegion_region state(::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_WaypointAnnotationsLocalizeRegion_region(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion>()
{
  return bosdyn_msgs::msg::builder::Init_WaypointAnnotationsLocalizeRegion_state();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION__BUILDER_HPP_
