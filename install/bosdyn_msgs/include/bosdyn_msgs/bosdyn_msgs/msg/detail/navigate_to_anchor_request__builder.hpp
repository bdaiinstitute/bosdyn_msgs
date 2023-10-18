// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NavigateToAnchorRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_ANCHOR_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_ANCHOR_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/navigate_to_anchor_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigateToAnchorRequest_command_id
{
public:
  explicit Init_NavigateToAnchorRequest_command_id(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NavigateToAnchorRequest command_id(::bosdyn_msgs::msg::NavigateToAnchorRequest::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_clock_identifier
{
public:
  explicit Init_NavigateToAnchorRequest_clock_identifier(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorRequest_command_id clock_identifier(::bosdyn_msgs::msg::NavigateToAnchorRequest::_clock_identifier_type arg)
  {
    msg_.clock_identifier = std::move(arg);
    return Init_NavigateToAnchorRequest_command_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_end_time_is_set
{
public:
  explicit Init_NavigateToAnchorRequest_end_time_is_set(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorRequest_clock_identifier end_time_is_set(::bosdyn_msgs::msg::NavigateToAnchorRequest::_end_time_is_set_type arg)
  {
    msg_.end_time_is_set = std::move(arg);
    return Init_NavigateToAnchorRequest_clock_identifier(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_end_time
{
public:
  explicit Init_NavigateToAnchorRequest_end_time(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorRequest_end_time_is_set end_time(::bosdyn_msgs::msg::NavigateToAnchorRequest::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_NavigateToAnchorRequest_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_travel_params_is_set
{
public:
  explicit Init_NavigateToAnchorRequest_travel_params_is_set(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorRequest_end_time travel_params_is_set(::bosdyn_msgs::msg::NavigateToAnchorRequest::_travel_params_is_set_type arg)
  {
    msg_.travel_params_is_set = std::move(arg);
    return Init_NavigateToAnchorRequest_end_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_travel_params
{
public:
  explicit Init_NavigateToAnchorRequest_travel_params(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorRequest_travel_params_is_set travel_params(::bosdyn_msgs::msg::NavigateToAnchorRequest::_travel_params_type arg)
  {
    msg_.travel_params = std::move(arg);
    return Init_NavigateToAnchorRequest_travel_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_route_params_is_set
{
public:
  explicit Init_NavigateToAnchorRequest_route_params_is_set(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorRequest_travel_params route_params_is_set(::bosdyn_msgs::msg::NavigateToAnchorRequest::_route_params_is_set_type arg)
  {
    msg_.route_params_is_set = std::move(arg);
    return Init_NavigateToAnchorRequest_travel_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_route_params
{
public:
  explicit Init_NavigateToAnchorRequest_route_params(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorRequest_route_params_is_set route_params(::bosdyn_msgs::msg::NavigateToAnchorRequest::_route_params_type arg)
  {
    msg_.route_params = std::move(arg);
    return Init_NavigateToAnchorRequest_route_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_goal_waypoint_rt_seed_ewrt_seed_tolerance_is_set
{
public:
  explicit Init_NavigateToAnchorRequest_goal_waypoint_rt_seed_ewrt_seed_tolerance_is_set(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorRequest_route_params goal_waypoint_rt_seed_ewrt_seed_tolerance_is_set(::bosdyn_msgs::msg::NavigateToAnchorRequest::_goal_waypoint_rt_seed_ewrt_seed_tolerance_is_set_type arg)
  {
    msg_.goal_waypoint_rt_seed_ewrt_seed_tolerance_is_set = std::move(arg);
    return Init_NavigateToAnchorRequest_route_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_goal_waypoint_rt_seed_ewrt_seed_tolerance
{
public:
  explicit Init_NavigateToAnchorRequest_goal_waypoint_rt_seed_ewrt_seed_tolerance(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorRequest_goal_waypoint_rt_seed_ewrt_seed_tolerance_is_set goal_waypoint_rt_seed_ewrt_seed_tolerance(::bosdyn_msgs::msg::NavigateToAnchorRequest::_goal_waypoint_rt_seed_ewrt_seed_tolerance_type arg)
  {
    msg_.goal_waypoint_rt_seed_ewrt_seed_tolerance = std::move(arg);
    return Init_NavigateToAnchorRequest_goal_waypoint_rt_seed_ewrt_seed_tolerance_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_seed_tform_goal_is_set
{
public:
  explicit Init_NavigateToAnchorRequest_seed_tform_goal_is_set(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorRequest_goal_waypoint_rt_seed_ewrt_seed_tolerance seed_tform_goal_is_set(::bosdyn_msgs::msg::NavigateToAnchorRequest::_seed_tform_goal_is_set_type arg)
  {
    msg_.seed_tform_goal_is_set = std::move(arg);
    return Init_NavigateToAnchorRequest_goal_waypoint_rt_seed_ewrt_seed_tolerance(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_seed_tform_goal
{
public:
  explicit Init_NavigateToAnchorRequest_seed_tform_goal(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorRequest_seed_tform_goal_is_set seed_tform_goal(::bosdyn_msgs::msg::NavigateToAnchorRequest::_seed_tform_goal_type arg)
  {
    msg_.seed_tform_goal = std::move(arg);
    return Init_NavigateToAnchorRequest_seed_tform_goal_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_leases
{
public:
  explicit Init_NavigateToAnchorRequest_leases(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorRequest_seed_tform_goal leases(::bosdyn_msgs::msg::NavigateToAnchorRequest::_leases_type arg)
  {
    msg_.leases = std::move(arg);
    return Init_NavigateToAnchorRequest_seed_tform_goal(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_header_is_set
{
public:
  explicit Init_NavigateToAnchorRequest_header_is_set(::bosdyn_msgs::msg::NavigateToAnchorRequest & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorRequest_leases header_is_set(::bosdyn_msgs::msg::NavigateToAnchorRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_NavigateToAnchorRequest_leases(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

class Init_NavigateToAnchorRequest_header
{
public:
  Init_NavigateToAnchorRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToAnchorRequest_header_is_set header(::bosdyn_msgs::msg::NavigateToAnchorRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NavigateToAnchorRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NavigateToAnchorRequest>()
{
  return bosdyn_msgs::msg::builder::Init_NavigateToAnchorRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_ANCHOR_REQUEST__BUILDER_HPP_
