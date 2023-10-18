// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestFiducialLoopClosureParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_FIDUCIAL_LOOP_CLOSURE_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_FIDUCIAL_LOOP_CLOSURE_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/process_topology_request_fiducial_loop_closure_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessTopologyRequestFiducialLoopClosureParams_prune_edges_is_set
{
public:
  explicit Init_ProcessTopologyRequestFiducialLoopClosureParams_prune_edges_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams prune_edges_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams::_prune_edges_is_set_type arg)
  {
    msg_.prune_edges_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams msg_;
};

class Init_ProcessTopologyRequestFiducialLoopClosureParams_prune_edges
{
public:
  explicit Init_ProcessTopologyRequestFiducialLoopClosureParams_prune_edges(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestFiducialLoopClosureParams_prune_edges_is_set prune_edges(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams::_prune_edges_type arg)
  {
    msg_.prune_edges = std::move(arg);
    return Init_ProcessTopologyRequestFiducialLoopClosureParams_prune_edges_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams msg_;
};

class Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_height_change_is_set
{
public:
  explicit Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_height_change_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestFiducialLoopClosureParams_prune_edges max_loop_closure_height_change_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams::_max_loop_closure_height_change_is_set_type arg)
  {
    msg_.max_loop_closure_height_change_is_set = std::move(arg);
    return Init_ProcessTopologyRequestFiducialLoopClosureParams_prune_edges(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams msg_;
};

class Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_height_change
{
public:
  explicit Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_height_change(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_height_change_is_set max_loop_closure_height_change(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams::_max_loop_closure_height_change_type arg)
  {
    msg_.max_loop_closure_height_change = std::move(arg);
    return Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_height_change_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams msg_;
};

class Init_ProcessTopologyRequestFiducialLoopClosureParams_max_fiducial_distance_is_set
{
public:
  explicit Init_ProcessTopologyRequestFiducialLoopClosureParams_max_fiducial_distance_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_height_change max_fiducial_distance_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams::_max_fiducial_distance_is_set_type arg)
  {
    msg_.max_fiducial_distance_is_set = std::move(arg);
    return Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_height_change(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams msg_;
};

class Init_ProcessTopologyRequestFiducialLoopClosureParams_max_fiducial_distance
{
public:
  explicit Init_ProcessTopologyRequestFiducialLoopClosureParams_max_fiducial_distance(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestFiducialLoopClosureParams_max_fiducial_distance_is_set max_fiducial_distance(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams::_max_fiducial_distance_type arg)
  {
    msg_.max_fiducial_distance = std::move(arg);
    return Init_ProcessTopologyRequestFiducialLoopClosureParams_max_fiducial_distance_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams msg_;
};

class Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_edge_length_is_set
{
public:
  explicit Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_edge_length_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestFiducialLoopClosureParams_max_fiducial_distance max_loop_closure_edge_length_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams::_max_loop_closure_edge_length_is_set_type arg)
  {
    msg_.max_loop_closure_edge_length_is_set = std::move(arg);
    return Init_ProcessTopologyRequestFiducialLoopClosureParams_max_fiducial_distance(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams msg_;
};

class Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_edge_length
{
public:
  explicit Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_edge_length(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_edge_length_is_set max_loop_closure_edge_length(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams::_max_loop_closure_edge_length_type arg)
  {
    msg_.max_loop_closure_edge_length = std::move(arg);
    return Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_edge_length_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams msg_;
};

class Init_ProcessTopologyRequestFiducialLoopClosureParams_min_loop_closure_path_length_is_set
{
public:
  explicit Init_ProcessTopologyRequestFiducialLoopClosureParams_min_loop_closure_path_length_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_edge_length min_loop_closure_path_length_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams::_min_loop_closure_path_length_is_set_type arg)
  {
    msg_.min_loop_closure_path_length_is_set = std::move(arg);
    return Init_ProcessTopologyRequestFiducialLoopClosureParams_max_loop_closure_edge_length(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams msg_;
};

class Init_ProcessTopologyRequestFiducialLoopClosureParams_min_loop_closure_path_length
{
public:
  Init_ProcessTopologyRequestFiducialLoopClosureParams_min_loop_closure_path_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessTopologyRequestFiducialLoopClosureParams_min_loop_closure_path_length_is_set min_loop_closure_path_length(::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams::_min_loop_closure_path_length_type arg)
  {
    msg_.min_loop_closure_path_length = std::move(arg);
    return Init_ProcessTopologyRequestFiducialLoopClosureParams_min_loop_closure_path_length_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams>()
{
  return bosdyn_msgs::msg::builder::Init_ProcessTopologyRequestFiducialLoopClosureParams_min_loop_closure_path_length();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_FIDUCIAL_LOOP_CLOSURE_PARAMS__BUILDER_HPP_
