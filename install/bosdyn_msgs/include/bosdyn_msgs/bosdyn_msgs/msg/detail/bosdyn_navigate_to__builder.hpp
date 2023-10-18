// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BosdynNavigateTo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_TO__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_TO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/bosdyn_navigate_to__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BosdynNavigateTo_route_blocked_behavior
{
public:
  explicit Init_BosdynNavigateTo_route_blocked_behavior(::bosdyn_msgs::msg::BosdynNavigateTo & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BosdynNavigateTo route_blocked_behavior(::bosdyn_msgs::msg::BosdynNavigateTo::_route_blocked_behavior_type arg)
  {
    msg_.route_blocked_behavior = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateTo msg_;
};

class Init_BosdynNavigateTo_navigate_to_response_blackboard_key
{
public:
  explicit Init_BosdynNavigateTo_navigate_to_response_blackboard_key(::bosdyn_msgs::msg::BosdynNavigateTo & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateTo_route_blocked_behavior navigate_to_response_blackboard_key(::bosdyn_msgs::msg::BosdynNavigateTo::_navigate_to_response_blackboard_key_type arg)
  {
    msg_.navigate_to_response_blackboard_key = std::move(arg);
    return Init_BosdynNavigateTo_route_blocked_behavior(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateTo msg_;
};

class Init_BosdynNavigateTo_navigation_feedback_response_blackboard_key
{
public:
  explicit Init_BosdynNavigateTo_navigation_feedback_response_blackboard_key(::bosdyn_msgs::msg::BosdynNavigateTo & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateTo_navigate_to_response_blackboard_key navigation_feedback_response_blackboard_key(::bosdyn_msgs::msg::BosdynNavigateTo::_navigation_feedback_response_blackboard_key_type arg)
  {
    msg_.navigation_feedback_response_blackboard_key = std::move(arg);
    return Init_BosdynNavigateTo_navigate_to_response_blackboard_key(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateTo msg_;
};

class Init_BosdynNavigateTo_travel_params_is_set
{
public:
  explicit Init_BosdynNavigateTo_travel_params_is_set(::bosdyn_msgs::msg::BosdynNavigateTo & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateTo_navigation_feedback_response_blackboard_key travel_params_is_set(::bosdyn_msgs::msg::BosdynNavigateTo::_travel_params_is_set_type arg)
  {
    msg_.travel_params_is_set = std::move(arg);
    return Init_BosdynNavigateTo_navigation_feedback_response_blackboard_key(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateTo msg_;
};

class Init_BosdynNavigateTo_travel_params
{
public:
  explicit Init_BosdynNavigateTo_travel_params(::bosdyn_msgs::msg::BosdynNavigateTo & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateTo_travel_params_is_set travel_params(::bosdyn_msgs::msg::BosdynNavigateTo::_travel_params_type arg)
  {
    msg_.travel_params = std::move(arg);
    return Init_BosdynNavigateTo_travel_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateTo msg_;
};

class Init_BosdynNavigateTo_route_gen_params_is_set
{
public:
  explicit Init_BosdynNavigateTo_route_gen_params_is_set(::bosdyn_msgs::msg::BosdynNavigateTo & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateTo_travel_params route_gen_params_is_set(::bosdyn_msgs::msg::BosdynNavigateTo::_route_gen_params_is_set_type arg)
  {
    msg_.route_gen_params_is_set = std::move(arg);
    return Init_BosdynNavigateTo_travel_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateTo msg_;
};

class Init_BosdynNavigateTo_route_gen_params
{
public:
  explicit Init_BosdynNavigateTo_route_gen_params(::bosdyn_msgs::msg::BosdynNavigateTo & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateTo_route_gen_params_is_set route_gen_params(::bosdyn_msgs::msg::BosdynNavigateTo::_route_gen_params_type arg)
  {
    msg_.route_gen_params = std::move(arg);
    return Init_BosdynNavigateTo_route_gen_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateTo msg_;
};

class Init_BosdynNavigateTo_destination_waypoint_id
{
public:
  explicit Init_BosdynNavigateTo_destination_waypoint_id(::bosdyn_msgs::msg::BosdynNavigateTo & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateTo_route_gen_params destination_waypoint_id(::bosdyn_msgs::msg::BosdynNavigateTo::_destination_waypoint_id_type arg)
  {
    msg_.destination_waypoint_id = std::move(arg);
    return Init_BosdynNavigateTo_route_gen_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateTo msg_;
};

class Init_BosdynNavigateTo_host
{
public:
  explicit Init_BosdynNavigateTo_host(::bosdyn_msgs::msg::BosdynNavigateTo & msg)
  : msg_(msg)
  {}
  Init_BosdynNavigateTo_destination_waypoint_id host(::bosdyn_msgs::msg::BosdynNavigateTo::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_BosdynNavigateTo_destination_waypoint_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateTo msg_;
};

class Init_BosdynNavigateTo_service_name
{
public:
  Init_BosdynNavigateTo_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BosdynNavigateTo_host service_name(::bosdyn_msgs::msg::BosdynNavigateTo::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_BosdynNavigateTo_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynNavigateTo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BosdynNavigateTo>()
{
  return bosdyn_msgs::msg::builder::Init_BosdynNavigateTo_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_TO__BUILDER_HPP_
