// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestCollisionCheckingParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/process_topology_request_collision_checking_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_height_variation_is_set
{
public:
  explicit Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_height_variation_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams collision_check_height_variation_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams::_collision_check_height_variation_is_set_type arg)
  {
    msg_.collision_check_height_variation_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams msg_;
};

class Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_height_variation
{
public:
  explicit Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_height_variation(::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_height_variation_is_set collision_check_height_variation(::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams::_collision_check_height_variation_type arg)
  {
    msg_.collision_check_height_variation = std::move(arg);
    return Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_height_variation_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams msg_;
};

class Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_robot_radius_is_set
{
public:
  explicit Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_robot_radius_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_height_variation collision_check_robot_radius_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams::_collision_check_robot_radius_is_set_type arg)
  {
    msg_.collision_check_robot_radius_is_set = std::move(arg);
    return Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_height_variation(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams msg_;
};

class Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_robot_radius
{
public:
  explicit Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_robot_radius(::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_robot_radius_is_set collision_check_robot_radius(::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams::_collision_check_robot_radius_type arg)
  {
    msg_.collision_check_robot_radius = std::move(arg);
    return Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_robot_radius_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams msg_;
};

class Init_ProcessTopologyRequestCollisionCheckingParams_check_edges_for_collision_is_set
{
public:
  explicit Init_ProcessTopologyRequestCollisionCheckingParams_check_edges_for_collision_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_robot_radius check_edges_for_collision_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams::_check_edges_for_collision_is_set_type arg)
  {
    msg_.check_edges_for_collision_is_set = std::move(arg);
    return Init_ProcessTopologyRequestCollisionCheckingParams_collision_check_robot_radius(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams msg_;
};

class Init_ProcessTopologyRequestCollisionCheckingParams_check_edges_for_collision
{
public:
  Init_ProcessTopologyRequestCollisionCheckingParams_check_edges_for_collision()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessTopologyRequestCollisionCheckingParams_check_edges_for_collision_is_set check_edges_for_collision(::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams::_check_edges_for_collision_type arg)
  {
    msg_.check_edges_for_collision = std::move(arg);
    return Init_ProcessTopologyRequestCollisionCheckingParams_check_edges_for_collision_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams>()
{
  return bosdyn_msgs::msg::builder::Init_ProcessTopologyRequestCollisionCheckingParams_check_edges_for_collision();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__BUILDER_HPP_
