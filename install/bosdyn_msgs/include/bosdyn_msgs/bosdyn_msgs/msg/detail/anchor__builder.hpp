// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Anchor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/anchor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Anchor_seed_tform_waypoint_is_set
{
public:
  explicit Init_Anchor_seed_tform_waypoint_is_set(::bosdyn_msgs::msg::Anchor & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Anchor seed_tform_waypoint_is_set(::bosdyn_msgs::msg::Anchor::_seed_tform_waypoint_is_set_type arg)
  {
    msg_.seed_tform_waypoint_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Anchor msg_;
};

class Init_Anchor_seed_tform_waypoint
{
public:
  explicit Init_Anchor_seed_tform_waypoint(::bosdyn_msgs::msg::Anchor & msg)
  : msg_(msg)
  {}
  Init_Anchor_seed_tform_waypoint_is_set seed_tform_waypoint(::bosdyn_msgs::msg::Anchor::_seed_tform_waypoint_type arg)
  {
    msg_.seed_tform_waypoint = std::move(arg);
    return Init_Anchor_seed_tform_waypoint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Anchor msg_;
};

class Init_Anchor_id
{
public:
  Init_Anchor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Anchor_seed_tform_waypoint id(::bosdyn_msgs::msg::Anchor::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Anchor_seed_tform_waypoint(msg_);
  }

private:
  ::bosdyn_msgs::msg::Anchor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Anchor>()
{
  return bosdyn_msgs::msg::builder::Init_Anchor_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHOR__BUILDER_HPP_
