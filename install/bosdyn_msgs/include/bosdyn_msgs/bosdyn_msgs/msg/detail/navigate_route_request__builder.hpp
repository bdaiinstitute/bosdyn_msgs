// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NavigateRouteRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_ROUTE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_ROUTE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/navigate_route_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigateRouteRequest_command_id
{
public:
  explicit Init_NavigateRouteRequest_command_id(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NavigateRouteRequest command_id(::bosdyn_msgs::msg::NavigateRouteRequest::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_destination_waypoint_tform_body_goal_is_set
{
public:
  explicit Init_NavigateRouteRequest_destination_waypoint_tform_body_goal_is_set(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateRouteRequest_command_id destination_waypoint_tform_body_goal_is_set(::bosdyn_msgs::msg::NavigateRouteRequest::_destination_waypoint_tform_body_goal_is_set_type arg)
  {
    msg_.destination_waypoint_tform_body_goal_is_set = std::move(arg);
    return Init_NavigateRouteRequest_command_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_destination_waypoint_tform_body_goal
{
public:
  explicit Init_NavigateRouteRequest_destination_waypoint_tform_body_goal(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateRouteRequest_destination_waypoint_tform_body_goal_is_set destination_waypoint_tform_body_goal(::bosdyn_msgs::msg::NavigateRouteRequest::_destination_waypoint_tform_body_goal_type arg)
  {
    msg_.destination_waypoint_tform_body_goal = std::move(arg);
    return Init_NavigateRouteRequest_destination_waypoint_tform_body_goal_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_clock_identifier
{
public:
  explicit Init_NavigateRouteRequest_clock_identifier(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateRouteRequest_destination_waypoint_tform_body_goal clock_identifier(::bosdyn_msgs::msg::NavigateRouteRequest::_clock_identifier_type arg)
  {
    msg_.clock_identifier = std::move(arg);
    return Init_NavigateRouteRequest_destination_waypoint_tform_body_goal(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_end_time_is_set
{
public:
  explicit Init_NavigateRouteRequest_end_time_is_set(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateRouteRequest_clock_identifier end_time_is_set(::bosdyn_msgs::msg::NavigateRouteRequest::_end_time_is_set_type arg)
  {
    msg_.end_time_is_set = std::move(arg);
    return Init_NavigateRouteRequest_clock_identifier(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_end_time
{
public:
  explicit Init_NavigateRouteRequest_end_time(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateRouteRequest_end_time_is_set end_time(::bosdyn_msgs::msg::NavigateRouteRequest::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_NavigateRouteRequest_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_travel_params_is_set
{
public:
  explicit Init_NavigateRouteRequest_travel_params_is_set(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateRouteRequest_end_time travel_params_is_set(::bosdyn_msgs::msg::NavigateRouteRequest::_travel_params_is_set_type arg)
  {
    msg_.travel_params_is_set = std::move(arg);
    return Init_NavigateRouteRequest_end_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_travel_params
{
public:
  explicit Init_NavigateRouteRequest_travel_params(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateRouteRequest_travel_params_is_set travel_params(::bosdyn_msgs::msg::NavigateRouteRequest::_travel_params_type arg)
  {
    msg_.travel_params = std::move(arg);
    return Init_NavigateRouteRequest_travel_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_route_follow_params_is_set
{
public:
  explicit Init_NavigateRouteRequest_route_follow_params_is_set(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateRouteRequest_travel_params route_follow_params_is_set(::bosdyn_msgs::msg::NavigateRouteRequest::_route_follow_params_is_set_type arg)
  {
    msg_.route_follow_params_is_set = std::move(arg);
    return Init_NavigateRouteRequest_travel_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_route_follow_params
{
public:
  explicit Init_NavigateRouteRequest_route_follow_params(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateRouteRequest_route_follow_params_is_set route_follow_params(::bosdyn_msgs::msg::NavigateRouteRequest::_route_follow_params_type arg)
  {
    msg_.route_follow_params = std::move(arg);
    return Init_NavigateRouteRequest_route_follow_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_route_is_set
{
public:
  explicit Init_NavigateRouteRequest_route_is_set(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateRouteRequest_route_follow_params route_is_set(::bosdyn_msgs::msg::NavigateRouteRequest::_route_is_set_type arg)
  {
    msg_.route_is_set = std::move(arg);
    return Init_NavigateRouteRequest_route_follow_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_route
{
public:
  explicit Init_NavigateRouteRequest_route(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateRouteRequest_route_is_set route(::bosdyn_msgs::msg::NavigateRouteRequest::_route_type arg)
  {
    msg_.route = std::move(arg);
    return Init_NavigateRouteRequest_route_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_leases
{
public:
  explicit Init_NavigateRouteRequest_leases(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateRouteRequest_route leases(::bosdyn_msgs::msg::NavigateRouteRequest::_leases_type arg)
  {
    msg_.leases = std::move(arg);
    return Init_NavigateRouteRequest_route(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_header_is_set
{
public:
  explicit Init_NavigateRouteRequest_header_is_set(::bosdyn_msgs::msg::NavigateRouteRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateRouteRequest_leases header_is_set(::bosdyn_msgs::msg::NavigateRouteRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_NavigateRouteRequest_leases(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

class Init_NavigateRouteRequest_header
{
public:
  Init_NavigateRouteRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateRouteRequest_header_is_set header(::bosdyn_msgs::msg::NavigateRouteRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NavigateRouteRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateRouteRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NavigateRouteRequest>()
{
  return bosdyn_msgs::msg::builder::Init_NavigateRouteRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_ROUTE_REQUEST__BUILDER_HPP_
