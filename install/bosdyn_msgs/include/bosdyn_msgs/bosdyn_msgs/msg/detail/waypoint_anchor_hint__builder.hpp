// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnchorHint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANCHOR_HINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANCHOR_HINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/waypoint_anchor_hint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WaypointAnchorHint_seed_tform_waypoint_constraint_is_set
{
public:
  explicit Init_WaypointAnchorHint_seed_tform_waypoint_constraint_is_set(::bosdyn_msgs::msg::WaypointAnchorHint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WaypointAnchorHint seed_tform_waypoint_constraint_is_set(::bosdyn_msgs::msg::WaypointAnchorHint::_seed_tform_waypoint_constraint_is_set_type arg)
  {
    msg_.seed_tform_waypoint_constraint_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnchorHint msg_;
};

class Init_WaypointAnchorHint_seed_tform_waypoint_constraint
{
public:
  explicit Init_WaypointAnchorHint_seed_tform_waypoint_constraint(::bosdyn_msgs::msg::WaypointAnchorHint & msg)
  : msg_(msg)
  {}
  Init_WaypointAnchorHint_seed_tform_waypoint_constraint_is_set seed_tform_waypoint_constraint(::bosdyn_msgs::msg::WaypointAnchorHint::_seed_tform_waypoint_constraint_type arg)
  {
    msg_.seed_tform_waypoint_constraint = std::move(arg);
    return Init_WaypointAnchorHint_seed_tform_waypoint_constraint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnchorHint msg_;
};

class Init_WaypointAnchorHint_seed_tform_waypoint_uncertainty_is_set
{
public:
  explicit Init_WaypointAnchorHint_seed_tform_waypoint_uncertainty_is_set(::bosdyn_msgs::msg::WaypointAnchorHint & msg)
  : msg_(msg)
  {}
  Init_WaypointAnchorHint_seed_tform_waypoint_constraint seed_tform_waypoint_uncertainty_is_set(::bosdyn_msgs::msg::WaypointAnchorHint::_seed_tform_waypoint_uncertainty_is_set_type arg)
  {
    msg_.seed_tform_waypoint_uncertainty_is_set = std::move(arg);
    return Init_WaypointAnchorHint_seed_tform_waypoint_constraint(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnchorHint msg_;
};

class Init_WaypointAnchorHint_seed_tform_waypoint_uncertainty
{
public:
  explicit Init_WaypointAnchorHint_seed_tform_waypoint_uncertainty(::bosdyn_msgs::msg::WaypointAnchorHint & msg)
  : msg_(msg)
  {}
  Init_WaypointAnchorHint_seed_tform_waypoint_uncertainty_is_set seed_tform_waypoint_uncertainty(::bosdyn_msgs::msg::WaypointAnchorHint::_seed_tform_waypoint_uncertainty_type arg)
  {
    msg_.seed_tform_waypoint_uncertainty = std::move(arg);
    return Init_WaypointAnchorHint_seed_tform_waypoint_uncertainty_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnchorHint msg_;
};

class Init_WaypointAnchorHint_waypoint_anchor_is_set
{
public:
  explicit Init_WaypointAnchorHint_waypoint_anchor_is_set(::bosdyn_msgs::msg::WaypointAnchorHint & msg)
  : msg_(msg)
  {}
  Init_WaypointAnchorHint_seed_tform_waypoint_uncertainty waypoint_anchor_is_set(::bosdyn_msgs::msg::WaypointAnchorHint::_waypoint_anchor_is_set_type arg)
  {
    msg_.waypoint_anchor_is_set = std::move(arg);
    return Init_WaypointAnchorHint_seed_tform_waypoint_uncertainty(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnchorHint msg_;
};

class Init_WaypointAnchorHint_waypoint_anchor
{
public:
  Init_WaypointAnchorHint_waypoint_anchor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointAnchorHint_waypoint_anchor_is_set waypoint_anchor(::bosdyn_msgs::msg::WaypointAnchorHint::_waypoint_anchor_type arg)
  {
    msg_.waypoint_anchor = std::move(arg);
    return Init_WaypointAnchorHint_waypoint_anchor_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnchorHint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WaypointAnchorHint>()
{
  return bosdyn_msgs::msg::builder::Init_WaypointAnchorHint_waypoint_anchor();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANCHOR_HINT__BUILDER_HPP_
