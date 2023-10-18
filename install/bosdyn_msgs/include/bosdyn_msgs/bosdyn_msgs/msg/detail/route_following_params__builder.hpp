// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RouteFollowingParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/route_following_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteFollowingParams_route_blocked_behavior
{
public:
  explicit Init_RouteFollowingParams_route_blocked_behavior(::bosdyn_msgs::msg::RouteFollowingParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RouteFollowingParams route_blocked_behavior(::bosdyn_msgs::msg::RouteFollowingParams::_route_blocked_behavior_type arg)
  {
    msg_.route_blocked_behavior = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RouteFollowingParams msg_;
};

class Init_RouteFollowingParams_existing_cmd_behavior
{
public:
  explicit Init_RouteFollowingParams_existing_cmd_behavior(::bosdyn_msgs::msg::RouteFollowingParams & msg)
  : msg_(msg)
  {}
  Init_RouteFollowingParams_route_blocked_behavior existing_cmd_behavior(::bosdyn_msgs::msg::RouteFollowingParams::_existing_cmd_behavior_type arg)
  {
    msg_.existing_cmd_behavior = std::move(arg);
    return Init_RouteFollowingParams_route_blocked_behavior(msg_);
  }

private:
  ::bosdyn_msgs::msg::RouteFollowingParams msg_;
};

class Init_RouteFollowingParams_new_cmd_behavior
{
public:
  Init_RouteFollowingParams_new_cmd_behavior()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteFollowingParams_existing_cmd_behavior new_cmd_behavior(::bosdyn_msgs::msg::RouteFollowingParams::_new_cmd_behavior_type arg)
  {
    msg_.new_cmd_behavior = std::move(arg);
    return Init_RouteFollowingParams_existing_cmd_behavior(msg_);
  }

private:
  ::bosdyn_msgs::msg::RouteFollowingParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RouteFollowingParams>()
{
  return bosdyn_msgs::msg::builder::Init_RouteFollowingParams_new_cmd_behavior();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS__BUILDER_HPP_
