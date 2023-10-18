// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NavigateToRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/navigate_to_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigateToRequest_route_blocked_behavior
{
public:
  explicit Init_NavigateToRequest_route_blocked_behavior(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NavigateToRequest route_blocked_behavior(::bosdyn_msgs::msg::NavigateToRequest::_route_blocked_behavior_type arg)
  {
    msg_.route_blocked_behavior = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_command_id
{
public:
  explicit Init_NavigateToRequest_command_id(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToRequest_route_blocked_behavior command_id(::bosdyn_msgs::msg::NavigateToRequest::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return Init_NavigateToRequest_route_blocked_behavior(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_destination_waypoint_tform_body_goal_is_set
{
public:
  explicit Init_NavigateToRequest_destination_waypoint_tform_body_goal_is_set(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToRequest_command_id destination_waypoint_tform_body_goal_is_set(::bosdyn_msgs::msg::NavigateToRequest::_destination_waypoint_tform_body_goal_is_set_type arg)
  {
    msg_.destination_waypoint_tform_body_goal_is_set = std::move(arg);
    return Init_NavigateToRequest_command_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_destination_waypoint_tform_body_goal
{
public:
  explicit Init_NavigateToRequest_destination_waypoint_tform_body_goal(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToRequest_destination_waypoint_tform_body_goal_is_set destination_waypoint_tform_body_goal(::bosdyn_msgs::msg::NavigateToRequest::_destination_waypoint_tform_body_goal_type arg)
  {
    msg_.destination_waypoint_tform_body_goal = std::move(arg);
    return Init_NavigateToRequest_destination_waypoint_tform_body_goal_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_clock_identifier
{
public:
  explicit Init_NavigateToRequest_clock_identifier(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToRequest_destination_waypoint_tform_body_goal clock_identifier(::bosdyn_msgs::msg::NavigateToRequest::_clock_identifier_type arg)
  {
    msg_.clock_identifier = std::move(arg);
    return Init_NavigateToRequest_destination_waypoint_tform_body_goal(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_end_time_is_set
{
public:
  explicit Init_NavigateToRequest_end_time_is_set(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToRequest_clock_identifier end_time_is_set(::bosdyn_msgs::msg::NavigateToRequest::_end_time_is_set_type arg)
  {
    msg_.end_time_is_set = std::move(arg);
    return Init_NavigateToRequest_clock_identifier(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_end_time
{
public:
  explicit Init_NavigateToRequest_end_time(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToRequest_end_time_is_set end_time(::bosdyn_msgs::msg::NavigateToRequest::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_NavigateToRequest_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_travel_params_is_set
{
public:
  explicit Init_NavigateToRequest_travel_params_is_set(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToRequest_end_time travel_params_is_set(::bosdyn_msgs::msg::NavigateToRequest::_travel_params_is_set_type arg)
  {
    msg_.travel_params_is_set = std::move(arg);
    return Init_NavigateToRequest_end_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_travel_params
{
public:
  explicit Init_NavigateToRequest_travel_params(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToRequest_travel_params_is_set travel_params(::bosdyn_msgs::msg::NavigateToRequest::_travel_params_type arg)
  {
    msg_.travel_params = std::move(arg);
    return Init_NavigateToRequest_travel_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_route_params_is_set
{
public:
  explicit Init_NavigateToRequest_route_params_is_set(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToRequest_travel_params route_params_is_set(::bosdyn_msgs::msg::NavigateToRequest::_route_params_is_set_type arg)
  {
    msg_.route_params_is_set = std::move(arg);
    return Init_NavigateToRequest_travel_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_route_params
{
public:
  explicit Init_NavigateToRequest_route_params(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToRequest_route_params_is_set route_params(::bosdyn_msgs::msg::NavigateToRequest::_route_params_type arg)
  {
    msg_.route_params = std::move(arg);
    return Init_NavigateToRequest_route_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_destination_waypoint_id
{
public:
  explicit Init_NavigateToRequest_destination_waypoint_id(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToRequest_route_params destination_waypoint_id(::bosdyn_msgs::msg::NavigateToRequest::_destination_waypoint_id_type arg)
  {
    msg_.destination_waypoint_id = std::move(arg);
    return Init_NavigateToRequest_route_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_leases
{
public:
  explicit Init_NavigateToRequest_leases(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToRequest_destination_waypoint_id leases(::bosdyn_msgs::msg::NavigateToRequest::_leases_type arg)
  {
    msg_.leases = std::move(arg);
    return Init_NavigateToRequest_destination_waypoint_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_header_is_set
{
public:
  explicit Init_NavigateToRequest_header_is_set(::bosdyn_msgs::msg::NavigateToRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToRequest_leases header_is_set(::bosdyn_msgs::msg::NavigateToRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_NavigateToRequest_leases(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

class Init_NavigateToRequest_header
{
public:
  Init_NavigateToRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToRequest_header_is_set header(::bosdyn_msgs::msg::NavigateToRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NavigateToRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NavigateToRequest>()
{
  return bosdyn_msgs::msg::builder::Init_NavigateToRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_REQUEST__BUILDER_HPP_
