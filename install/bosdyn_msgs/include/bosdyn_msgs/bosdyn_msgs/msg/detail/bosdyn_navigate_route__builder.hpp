// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BosdynNavigateRoute.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_ROUTE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/bosdyn_navigate_route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BosdynNavigateRoute_navigate_route_response_blackboard_key
{
public:
  explicit Init_BosdynNavigateRoute_navigate_route_response_blackboard_key(::bosdyn_msgs::msg::BosdynNavigateRoute & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BosdynNavigateRoute navigate_route_response_blackboard_key(::bosdyn_msgs::msg::BosdynNavigateRoute::_navigate_route_response_blackboard_key_type arg)
  {
    msg_.navigate_route_response_blackboard_key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateRoute msg_;
};

class Init_BosdynNavigateRoute_navigation_feedback_response_blackboard_key
{
public:
  explicit Init_BosdynNavigateRoute_navigation_feedback_response_blackboard_key(::bosdyn_msgs::msg::BosdynNavigateRoute & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateRoute_navigate_route_response_blackboard_key navigation_feedback_response_blackboard_key(::bosdyn_msgs::msg::BosdynNavigateRoute::_navigation_feedback_response_blackboard_key_type arg)
  {
    msg_.navigation_feedback_response_blackboard_key = std::move(arg);
    return Init_BosdynNavigateRoute_navigate_route_response_blackboard_key(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateRoute msg_;
};

class Init_BosdynNavigateRoute_travel_params_is_set
{
public:
  explicit Init_BosdynNavigateRoute_travel_params_is_set(::bosdyn_msgs::msg::BosdynNavigateRoute & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateRoute_navigation_feedback_response_blackboard_key travel_params_is_set(::bosdyn_msgs::msg::BosdynNavigateRoute::_travel_params_is_set_type arg)
  {
    msg_.travel_params_is_set = std::move(arg);
    return Init_BosdynNavigateRoute_navigation_feedback_response_blackboard_key(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateRoute msg_;
};

class Init_BosdynNavigateRoute_travel_params
{
public:
  explicit Init_BosdynNavigateRoute_travel_params(::bosdyn_msgs::msg::BosdynNavigateRoute & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateRoute_travel_params_is_set travel_params(::bosdyn_msgs::msg::BosdynNavigateRoute::_travel_params_type arg)
  {
    msg_.travel_params = std::move(arg);
    return Init_BosdynNavigateRoute_travel_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateRoute msg_;
};

class Init_BosdynNavigateRoute_route_follow_params_is_set
{
public:
  explicit Init_BosdynNavigateRoute_route_follow_params_is_set(::bosdyn_msgs::msg::BosdynNavigateRoute & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateRoute_travel_params route_follow_params_is_set(::bosdyn_msgs::msg::BosdynNavigateRoute::_route_follow_params_is_set_type arg)
  {
    msg_.route_follow_params_is_set = std::move(arg);
    return Init_BosdynNavigateRoute_travel_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateRoute msg_;
};

class Init_BosdynNavigateRoute_route_follow_params
{
public:
  explicit Init_BosdynNavigateRoute_route_follow_params(::bosdyn_msgs::msg::BosdynNavigateRoute & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateRoute_route_follow_params_is_set route_follow_params(::bosdyn_msgs::msg::BosdynNavigateRoute::_route_follow_params_type arg)
  {
    msg_.route_follow_params = std::move(arg);
    return Init_BosdynNavigateRoute_route_follow_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateRoute msg_;
};

class Init_BosdynNavigateRoute_route_is_set
{
public:
  explicit Init_BosdynNavigateRoute_route_is_set(::bosdyn_msgs::msg::BosdynNavigateRoute & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateRoute_route_follow_params route_is_set(::bosdyn_msgs::msg::BosdynNavigateRoute::_route_is_set_type arg)
  {
    msg_.route_is_set = std::move(arg);
    return Init_BosdynNavigateRoute_route_follow_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateRoute msg_;
};

class Init_BosdynNavigateRoute_route
{
public:
  explicit Init_BosdynNavigateRoute_route(::bosdyn_msgs::msg::BosdynNavigateRoute & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateRoute_route_is_set route(::bosdyn_msgs::msg::BosdynNavigateRoute::_route_type arg)
  {
    msg_.route = std::move(arg);
    return Init_BosdynNavigateRoute_route_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateRoute msg_;
};

class Init_BosdynNavigateRoute_host
{
public:
  explicit Init_BosdynNavigateRoute_host(::bosdyn_msgs::msg::BosdynNavigateRoute & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateRoute_route host(::bosdyn_msgs::msg::BosdynNavigateRoute::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_BosdynNavigateRoute_route(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateRoute msg_;
};

class Init_BosdynNavigateRoute_service_name
{
public:
  Init_BosdynNavigateRoute_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BosdynNavigateRoute_host service_name(::bosdyn_msgs::msg::BosdynNavigateRoute::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_BosdynNavigateRoute_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateRoute msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BosdynNavigateRoute>()
{
  return bosdyn_msgs::msg::builder::Init_BosdynNavigateRoute_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_ROUTE__BUILDER_HPP_
