// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestICPParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_ICP_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_ICP_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/process_topology_request_icp_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessTopologyRequestICPParams_max_point_match_distance_is_set
{
public:
  explicit Init_ProcessTopologyRequestICPParams_max_point_match_distance_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestICPParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ProcessTopologyRequestICPParams max_point_match_distance_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestICPParams::_max_point_match_distance_is_set_type arg)
  {
    msg_.max_point_match_distance_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestICPParams msg_;
};

class Init_ProcessTopologyRequestICPParams_max_point_match_distance
{
public:
  explicit Init_ProcessTopologyRequestICPParams_max_point_match_distance(::bosdyn_msgs::msg::ProcessTopologyRequestICPParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestICPParams_max_point_match_distance_is_set max_point_match_distance(::bosdyn_msgs::msg::ProcessTopologyRequestICPParams::_max_point_match_distance_type arg)
  {
    msg_.max_point_match_distance = std::move(arg);
    return Init_ProcessTopologyRequestICPParams_max_point_match_distance_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestICPParams msg_;
};

class Init_ProcessTopologyRequestICPParams_icp_iters_is_set
{
public:
  explicit Init_ProcessTopologyRequestICPParams_icp_iters_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestICPParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestICPParams_max_point_match_distance icp_iters_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestICPParams::_icp_iters_is_set_type arg)
  {
    msg_.icp_iters_is_set = std::move(arg);
    return Init_ProcessTopologyRequestICPParams_max_point_match_distance(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestICPParams msg_;
};

class Init_ProcessTopologyRequestICPParams_icp_iters
{
public:
  Init_ProcessTopologyRequestICPParams_icp_iters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessTopologyRequestICPParams_icp_iters_is_set icp_iters(::bosdyn_msgs::msg::ProcessTopologyRequestICPParams::_icp_iters_type arg)
  {
    msg_.icp_iters = std::move(arg);
    return Init_ProcessTopologyRequestICPParams_icp_iters_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestICPParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ProcessTopologyRequestICPParams>()
{
  return bosdyn_msgs::msg::builder::Init_ProcessTopologyRequestICPParams_icp_iters();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_ICP_PARAMS__BUILDER_HPP_
