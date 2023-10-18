// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/process_anchoring_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessAnchoringResponse_inconsistent_edges
{
public:
  explicit Init_ProcessAnchoringResponse_inconsistent_edges(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ProcessAnchoringResponse inconsistent_edges(::bosdyn_msgs::msg::ProcessAnchoringResponse::_inconsistent_edges_type arg)
  {
    msg_.inconsistent_edges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_invalid_hints
{
public:
  explicit Init_ProcessAnchoringResponse_invalid_hints(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringResponse_inconsistent_edges invalid_hints(::bosdyn_msgs::msg::ProcessAnchoringResponse::_invalid_hints_type arg)
  {
    msg_.invalid_hints = std::move(arg);
    return Init_ProcessAnchoringResponse_inconsistent_edges(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_missing_waypoint_ids
{
public:
  explicit Init_ProcessAnchoringResponse_missing_waypoint_ids(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringResponse_invalid_hints missing_waypoint_ids(::bosdyn_msgs::msg::ProcessAnchoringResponse::_missing_waypoint_ids_type arg)
  {
    msg_.missing_waypoint_ids = std::move(arg);
    return Init_ProcessAnchoringResponse_invalid_hints(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_missing_snapshot_ids
{
public:
  explicit Init_ProcessAnchoringResponse_missing_snapshot_ids(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringResponse_missing_waypoint_ids missing_snapshot_ids(::bosdyn_msgs::msg::ProcessAnchoringResponse::_missing_snapshot_ids_type arg)
  {
    msg_.missing_snapshot_ids = std::move(arg);
    return Init_ProcessAnchoringResponse_missing_waypoint_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_violated_object_constraints
{
public:
  explicit Init_ProcessAnchoringResponse_violated_object_constraints(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringResponse_missing_snapshot_ids violated_object_constraints(::bosdyn_msgs::msg::ProcessAnchoringResponse::_violated_object_constraints_type arg)
  {
    msg_.violated_object_constraints = std::move(arg);
    return Init_ProcessAnchoringResponse_missing_snapshot_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_violated_waypoint_constraints
{
public:
  explicit Init_ProcessAnchoringResponse_violated_waypoint_constraints(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringResponse_violated_object_constraints violated_waypoint_constraints(::bosdyn_msgs::msg::ProcessAnchoringResponse::_violated_waypoint_constraints_type arg)
  {
    msg_.violated_waypoint_constraints = std::move(arg);
    return Init_ProcessAnchoringResponse_violated_object_constraints(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_final_iteration
{
public:
  explicit Init_ProcessAnchoringResponse_final_iteration(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringResponse_violated_waypoint_constraints final_iteration(::bosdyn_msgs::msg::ProcessAnchoringResponse::_final_iteration_type arg)
  {
    msg_.final_iteration = std::move(arg);
    return Init_ProcessAnchoringResponse_violated_waypoint_constraints(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_cost
{
public:
  explicit Init_ProcessAnchoringResponse_cost(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringResponse_final_iteration cost(::bosdyn_msgs::msg::ProcessAnchoringResponse::_cost_type arg)
  {
    msg_.cost = std::move(arg);
    return Init_ProcessAnchoringResponse_final_iteration(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_iteration
{
public:
  explicit Init_ProcessAnchoringResponse_iteration(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringResponse_cost iteration(::bosdyn_msgs::msg::ProcessAnchoringResponse::_iteration_type arg)
  {
    msg_.iteration = std::move(arg);
    return Init_ProcessAnchoringResponse_cost(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_anchoring_on_server_was_modified
{
public:
  explicit Init_ProcessAnchoringResponse_anchoring_on_server_was_modified(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringResponse_iteration anchoring_on_server_was_modified(::bosdyn_msgs::msg::ProcessAnchoringResponse::_anchoring_on_server_was_modified_type arg)
  {
    msg_.anchoring_on_server_was_modified = std::move(arg);
    return Init_ProcessAnchoringResponse_iteration(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_world_object_results
{
public:
  explicit Init_ProcessAnchoringResponse_world_object_results(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringResponse_anchoring_on_server_was_modified world_object_results(::bosdyn_msgs::msg::ProcessAnchoringResponse::_world_object_results_type arg)
  {
    msg_.world_object_results = std::move(arg);
    return Init_ProcessAnchoringResponse_anchoring_on_server_was_modified(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_waypoint_results
{
public:
  explicit Init_ProcessAnchoringResponse_waypoint_results(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringResponse_world_object_results waypoint_results(::bosdyn_msgs::msg::ProcessAnchoringResponse::_waypoint_results_type arg)
  {
    msg_.waypoint_results = std::move(arg);
    return Init_ProcessAnchoringResponse_world_object_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_status
{
public:
  explicit Init_ProcessAnchoringResponse_status(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringResponse_waypoint_results status(::bosdyn_msgs::msg::ProcessAnchoringResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ProcessAnchoringResponse_waypoint_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_header_is_set
{
public:
  explicit Init_ProcessAnchoringResponse_header_is_set(::bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringResponse_status header_is_set(::bosdyn_msgs::msg::ProcessAnchoringResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ProcessAnchoringResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

class Init_ProcessAnchoringResponse_header
{
public:
  Init_ProcessAnchoringResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessAnchoringResponse_header_is_set header(::bosdyn_msgs::msg::ProcessAnchoringResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ProcessAnchoringResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ProcessAnchoringResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ProcessAnchoringResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_RESPONSE__BUILDER_HPP_
