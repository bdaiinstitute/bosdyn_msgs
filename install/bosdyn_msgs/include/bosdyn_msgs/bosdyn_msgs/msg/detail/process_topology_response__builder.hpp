// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/process_topology_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessTopologyResponse_timed_out
{
public:
  explicit Init_ProcessTopologyResponse_timed_out(::bosdyn_msgs::msg::ProcessTopologyResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ProcessTopologyResponse timed_out(::bosdyn_msgs::msg::ProcessTopologyResponse::_timed_out_type arg)
  {
    msg_.timed_out = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyResponse msg_;
};

class Init_ProcessTopologyResponse_missing_waypoint_ids
{
public:
  explicit Init_ProcessTopologyResponse_missing_waypoint_ids(::bosdyn_msgs::msg::ProcessTopologyResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyResponse_timed_out missing_waypoint_ids(::bosdyn_msgs::msg::ProcessTopologyResponse::_missing_waypoint_ids_type arg)
  {
    msg_.missing_waypoint_ids = std::move(arg);
    return Init_ProcessTopologyResponse_timed_out(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyResponse msg_;
};

class Init_ProcessTopologyResponse_missing_snapshot_ids
{
public:
  explicit Init_ProcessTopologyResponse_missing_snapshot_ids(::bosdyn_msgs::msg::ProcessTopologyResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyResponse_missing_waypoint_ids missing_snapshot_ids(::bosdyn_msgs::msg::ProcessTopologyResponse::_missing_snapshot_ids_type arg)
  {
    msg_.missing_snapshot_ids = std::move(arg);
    return Init_ProcessTopologyResponse_missing_waypoint_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyResponse msg_;
};

class Init_ProcessTopologyResponse_map_on_server_was_modified
{
public:
  explicit Init_ProcessTopologyResponse_map_on_server_was_modified(::bosdyn_msgs::msg::ProcessTopologyResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyResponse_missing_snapshot_ids map_on_server_was_modified(::bosdyn_msgs::msg::ProcessTopologyResponse::_map_on_server_was_modified_type arg)
  {
    msg_.map_on_server_was_modified = std::move(arg);
    return Init_ProcessTopologyResponse_missing_snapshot_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyResponse msg_;
};

class Init_ProcessTopologyResponse_new_subgraph_is_set
{
public:
  explicit Init_ProcessTopologyResponse_new_subgraph_is_set(::bosdyn_msgs::msg::ProcessTopologyResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyResponse_map_on_server_was_modified new_subgraph_is_set(::bosdyn_msgs::msg::ProcessTopologyResponse::_new_subgraph_is_set_type arg)
  {
    msg_.new_subgraph_is_set = std::move(arg);
    return Init_ProcessTopologyResponse_map_on_server_was_modified(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyResponse msg_;
};

class Init_ProcessTopologyResponse_new_subgraph
{
public:
  explicit Init_ProcessTopologyResponse_new_subgraph(::bosdyn_msgs::msg::ProcessTopologyResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyResponse_new_subgraph_is_set new_subgraph(::bosdyn_msgs::msg::ProcessTopologyResponse::_new_subgraph_type arg)
  {
    msg_.new_subgraph = std::move(arg);
    return Init_ProcessTopologyResponse_new_subgraph_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyResponse msg_;
};

class Init_ProcessTopologyResponse_status
{
public:
  explicit Init_ProcessTopologyResponse_status(::bosdyn_msgs::msg::ProcessTopologyResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyResponse_new_subgraph status(::bosdyn_msgs::msg::ProcessTopologyResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ProcessTopologyResponse_new_subgraph(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyResponse msg_;
};

class Init_ProcessTopologyResponse_header_is_set
{
public:
  explicit Init_ProcessTopologyResponse_header_is_set(::bosdyn_msgs::msg::ProcessTopologyResponse & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyResponse_status header_is_set(::bosdyn_msgs::msg::ProcessTopologyResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ProcessTopologyResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyResponse msg_;
};

class Init_ProcessTopologyResponse_header
{
public:
  Init_ProcessTopologyResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessTopologyResponse_header_is_set header(::bosdyn_msgs::msg::ProcessTopologyResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ProcessTopologyResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ProcessTopologyResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ProcessTopologyResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_RESPONSE__BUILDER_HPP_
