// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TravelParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TRAVEL_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TRAVEL_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/travel_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TravelParams_ground_clutter_mode
{
public:
  explicit Init_TravelParams_ground_clutter_mode(::bosdyn_msgs::msg::TravelParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TravelParams ground_clutter_mode(::bosdyn_msgs::msg::TravelParams::_ground_clutter_mode_type arg)
  {
    msg_.ground_clutter_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TravelParams msg_;
};

class Init_TravelParams_blocked_path_wait_time_is_set
{
public:
  explicit Init_TravelParams_blocked_path_wait_time_is_set(::bosdyn_msgs::msg::TravelParams & msg)
  : msg_(msg)
  {}
  Init_TravelParams_ground_clutter_mode blocked_path_wait_time_is_set(::bosdyn_msgs::msg::TravelParams::_blocked_path_wait_time_is_set_type arg)
  {
    msg_.blocked_path_wait_time_is_set = std::move(arg);
    return Init_TravelParams_ground_clutter_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::TravelParams msg_;
};

class Init_TravelParams_blocked_path_wait_time
{
public:
  explicit Init_TravelParams_blocked_path_wait_time(::bosdyn_msgs::msg::TravelParams & msg)
  : msg_(msg)
  {}
  Init_TravelParams_blocked_path_wait_time_is_set blocked_path_wait_time(::bosdyn_msgs::msg::TravelParams::_blocked_path_wait_time_type arg)
  {
    msg_.blocked_path_wait_time = std::move(arg);
    return Init_TravelParams_blocked_path_wait_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TravelParams msg_;
};

class Init_TravelParams_path_following_mode
{
public:
  explicit Init_TravelParams_path_following_mode(::bosdyn_msgs::msg::TravelParams & msg)
  : msg_(msg)
  {}
  Init_TravelParams_blocked_path_wait_time path_following_mode(::bosdyn_msgs::msg::TravelParams::_path_following_mode_type arg)
  {
    msg_.path_following_mode = std::move(arg);
    return Init_TravelParams_blocked_path_wait_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::TravelParams msg_;
};

class Init_TravelParams_disable_alternate_route_finding
{
public:
  explicit Init_TravelParams_disable_alternate_route_finding(::bosdyn_msgs::msg::TravelParams & msg)
  : msg_(msg)
  {}
  Init_TravelParams_path_following_mode disable_alternate_route_finding(::bosdyn_msgs::msg::TravelParams::_disable_alternate_route_finding_type arg)
  {
    msg_.disable_alternate_route_finding = std::move(arg);
    return Init_TravelParams_path_following_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::TravelParams msg_;
};

class Init_TravelParams_disable_directed_exploration
{
public:
  explicit Init_TravelParams_disable_directed_exploration(::bosdyn_msgs::msg::TravelParams & msg)
  : msg_(msg)
  {}
  Init_TravelParams_disable_alternate_route_finding disable_directed_exploration(::bosdyn_msgs::msg::TravelParams::_disable_directed_exploration_type arg)
  {
    msg_.disable_directed_exploration = std::move(arg);
    return Init_TravelParams_disable_alternate_route_finding(msg_);
  }

private:
  ::bosdyn_msgs::msg::TravelParams msg_;
};

class Init_TravelParams_feature_quality_tolerance
{
public:
  explicit Init_TravelParams_feature_quality_tolerance(::bosdyn_msgs::msg::TravelParams & msg)
  : msg_(msg)
  {}
  Init_TravelParams_disable_directed_exploration feature_quality_tolerance(::bosdyn_msgs::msg::TravelParams::_feature_quality_tolerance_type arg)
  {
    msg_.feature_quality_tolerance = std::move(arg);
    return Init_TravelParams_disable_directed_exploration(msg_);
  }

private:
  ::bosdyn_msgs::msg::TravelParams msg_;
};

class Init_TravelParams_ignore_final_yaw
{
public:
  explicit Init_TravelParams_ignore_final_yaw(::bosdyn_msgs::msg::TravelParams & msg)
  : msg_(msg)
  {}
  Init_TravelParams_feature_quality_tolerance ignore_final_yaw(::bosdyn_msgs::msg::TravelParams::_ignore_final_yaw_type arg)
  {
    msg_.ignore_final_yaw = std::move(arg);
    return Init_TravelParams_feature_quality_tolerance(msg_);
  }

private:
  ::bosdyn_msgs::msg::TravelParams msg_;
};

class Init_TravelParams_velocity_limit_is_set
{
public:
  explicit Init_TravelParams_velocity_limit_is_set(::bosdyn_msgs::msg::TravelParams & msg)
  : msg_(msg)
  {}
  Init_TravelParams_ignore_final_yaw velocity_limit_is_set(::bosdyn_msgs::msg::TravelParams::_velocity_limit_is_set_type arg)
  {
    msg_.velocity_limit_is_set = std::move(arg);
    return Init_TravelParams_ignore_final_yaw(msg_);
  }

private:
  ::bosdyn_msgs::msg::TravelParams msg_;
};

class Init_TravelParams_velocity_limit
{
public:
  explicit Init_TravelParams_velocity_limit(::bosdyn_msgs::msg::TravelParams & msg)
  : msg_(msg)
  {}
  Init_TravelParams_velocity_limit_is_set velocity_limit(::bosdyn_msgs::msg::TravelParams::_velocity_limit_type arg)
  {
    msg_.velocity_limit = std::move(arg);
    return Init_TravelParams_velocity_limit_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TravelParams msg_;
};

class Init_TravelParams_max_yaw
{
public:
  explicit Init_TravelParams_max_yaw(::bosdyn_msgs::msg::TravelParams & msg)
  : msg_(msg)
  {}
  Init_TravelParams_velocity_limit max_yaw(::bosdyn_msgs::msg::TravelParams::_max_yaw_type arg)
  {
    msg_.max_yaw = std::move(arg);
    return Init_TravelParams_velocity_limit(msg_);
  }

private:
  ::bosdyn_msgs::msg::TravelParams msg_;
};

class Init_TravelParams_max_distance
{
public:
  Init_TravelParams_max_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TravelParams_max_yaw max_distance(::bosdyn_msgs::msg::TravelParams::_max_distance_type arg)
  {
    msg_.max_distance = std::move(arg);
    return Init_TravelParams_max_yaw(msg_);
  }

private:
  ::bosdyn_msgs::msg::TravelParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TravelParams>()
{
  return bosdyn_msgs::msg::builder::Init_TravelParams_max_distance();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TRAVEL_PARAMS__BUILDER_HPP_
