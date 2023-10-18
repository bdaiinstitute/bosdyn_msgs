// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TargetNavigateRoute.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TARGET_NAVIGATE_ROUTE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TARGET_NAVIGATE_ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/target_navigate_route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TargetNavigateRoute_travel_params_is_set
{
public:
  explicit Init_TargetNavigateRoute_travel_params_is_set(::bosdyn_msgs::msg::TargetNavigateRoute & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TargetNavigateRoute travel_params_is_set(::bosdyn_msgs::msg::TargetNavigateRoute::_travel_params_is_set_type arg)
  {
    msg_.travel_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TargetNavigateRoute msg_;
};

class Init_TargetNavigateRoute_travel_params
{
public:
  explicit Init_TargetNavigateRoute_travel_params(::bosdyn_msgs::msg::TargetNavigateRoute & msg)
  : msg_(msg)
  {}
  Init_TargetNavigateRoute_travel_params_is_set travel_params(::bosdyn_msgs::msg::TargetNavigateRoute::_travel_params_type arg)
  {
    msg_.travel_params = std::move(arg);
    return Init_TargetNavigateRoute_travel_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TargetNavigateRoute msg_;
};

class Init_TargetNavigateRoute_route_is_set
{
public:
  explicit Init_TargetNavigateRoute_route_is_set(::bosdyn_msgs::msg::TargetNavigateRoute & msg)
  : msg_(msg)
  {}
  Init_TargetNavigateRoute_travel_params route_is_set(::bosdyn_msgs::msg::TargetNavigateRoute::_route_is_set_type arg)
  {
    msg_.route_is_set = std::move(arg);
    return Init_TargetNavigateRoute_travel_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::TargetNavigateRoute msg_;
};

class Init_TargetNavigateRoute_route
{
public:
  Init_TargetNavigateRoute_route()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetNavigateRoute_route_is_set route(::bosdyn_msgs::msg::TargetNavigateRoute::_route_type arg)
  {
    msg_.route = std::move(arg);
    return Init_TargetNavigateRoute_route_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TargetNavigateRoute msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TargetNavigateRoute>()
{
  return bosdyn_msgs::msg::builder::Init_TargetNavigateRoute_route();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TARGET_NAVIGATE_ROUTE__BUILDER_HPP_
