// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TargetNavigateTo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TARGET_NAVIGATE_TO__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TARGET_NAVIGATE_TO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/target_navigate_to__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TargetNavigateTo_travel_params_is_set
{
public:
  explicit Init_TargetNavigateTo_travel_params_is_set(::bosdyn_msgs::msg::TargetNavigateTo & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TargetNavigateTo travel_params_is_set(::bosdyn_msgs::msg::TargetNavigateTo::_travel_params_is_set_type arg)
  {
    msg_.travel_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TargetNavigateTo msg_;
};

class Init_TargetNavigateTo_travel_params
{
public:
  explicit Init_TargetNavigateTo_travel_params(::bosdyn_msgs::msg::TargetNavigateTo & msg)
  : msg_(msg)
  {}
  Init_TargetNavigateTo_travel_params_is_set travel_params(::bosdyn_msgs::msg::TargetNavigateTo::_travel_params_type arg)
  {
    msg_.travel_params = std::move(arg);
    return Init_TargetNavigateTo_travel_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TargetNavigateTo msg_;
};

class Init_TargetNavigateTo_destination_waypoint_id
{
public:
  Init_TargetNavigateTo_destination_waypoint_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetNavigateTo_travel_params destination_waypoint_id(::bosdyn_msgs::msg::TargetNavigateTo::_destination_waypoint_id_type arg)
  {
    msg_.destination_waypoint_id = std::move(arg);
    return Init_TargetNavigateTo_travel_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::TargetNavigateTo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TargetNavigateTo>()
{
  return bosdyn_msgs::msg::builder::Init_TargetNavigateTo_destination_waypoint_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TARGET_NAVIGATE_TO__BUILDER_HPP_
