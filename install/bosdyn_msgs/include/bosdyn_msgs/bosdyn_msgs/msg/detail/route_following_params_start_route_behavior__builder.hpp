// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RouteFollowingParamsStartRouteBehavior.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS_START_ROUTE_BEHAVIOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS_START_ROUTE_BEHAVIOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/route_following_params_start_route_behavior__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteFollowingParamsStartRouteBehavior_value
{
public:
  Init_RouteFollowingParamsStartRouteBehavior_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::RouteFollowingParamsStartRouteBehavior value(::bosdyn_msgs::msg::RouteFollowingParamsStartRouteBehavior::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RouteFollowingParamsStartRouteBehavior msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RouteFollowingParamsStartRouteBehavior>()
{
  return bosdyn_msgs::msg::builder::Init_RouteFollowingParamsStartRouteBehavior_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS_START_ROUTE_BEHAVIOR__BUILDER_HPP_
