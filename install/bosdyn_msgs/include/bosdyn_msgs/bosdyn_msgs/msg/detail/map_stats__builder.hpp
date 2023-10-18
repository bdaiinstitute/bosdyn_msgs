// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MapStats.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MAP_STATS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MAP_STATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/map_stats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MapStats_total_path_length
{
public:
  explicit Init_MapStats_total_path_length(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MapStats total_path_length(::bosdyn_msgs::msg::MapStats::_total_path_length_type arg)
  {
    msg_.total_path_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_object_anchors_is_set
{
public:
  explicit Init_MapStats_object_anchors_is_set(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_total_path_length object_anchors_is_set(::bosdyn_msgs::msg::MapStats::_object_anchors_is_set_type arg)
  {
    msg_.object_anchors_is_set = std::move(arg);
    return Init_MapStats_total_path_length(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_object_anchors
{
public:
  explicit Init_MapStats_object_anchors(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_object_anchors_is_set object_anchors(::bosdyn_msgs::msg::MapStats::_object_anchors_type arg)
  {
    msg_.object_anchors = std::move(arg);
    return Init_MapStats_object_anchors_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_waypoint_anchors_is_set
{
public:
  explicit Init_MapStats_waypoint_anchors_is_set(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_object_anchors waypoint_anchors_is_set(::bosdyn_msgs::msg::MapStats::_waypoint_anchors_is_set_type arg)
  {
    msg_.waypoint_anchors_is_set = std::move(arg);
    return Init_MapStats_object_anchors(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_waypoint_anchors
{
public:
  explicit Init_MapStats_waypoint_anchors(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_waypoint_anchors_is_set waypoint_anchors(::bosdyn_msgs::msg::MapStats::_waypoint_anchors_type arg)
  {
    msg_.waypoint_anchors = std::move(arg);
    return Init_MapStats_waypoint_anchors_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_alternate_edges_is_set
{
public:
  explicit Init_MapStats_alternate_edges_is_set(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_waypoint_anchors alternate_edges_is_set(::bosdyn_msgs::msg::MapStats::_alternate_edges_is_set_type arg)
  {
    msg_.alternate_edges_is_set = std::move(arg);
    return Init_MapStats_waypoint_anchors(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_alternate_edges
{
public:
  explicit Init_MapStats_alternate_edges(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_alternate_edges_is_set alternate_edges(::bosdyn_msgs::msg::MapStats::_alternate_edges_type arg)
  {
    msg_.alternate_edges = std::move(arg);
    return Init_MapStats_alternate_edges_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_edge_snapshots_is_set
{
public:
  explicit Init_MapStats_edge_snapshots_is_set(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_alternate_edges edge_snapshots_is_set(::bosdyn_msgs::msg::MapStats::_edge_snapshots_is_set_type arg)
  {
    msg_.edge_snapshots_is_set = std::move(arg);
    return Init_MapStats_alternate_edges(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_edge_snapshots
{
public:
  explicit Init_MapStats_edge_snapshots(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_edge_snapshots_is_set edge_snapshots(::bosdyn_msgs::msg::MapStats::_edge_snapshots_type arg)
  {
    msg_.edge_snapshots = std::move(arg);
    return Init_MapStats_edge_snapshots_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_edges_is_set
{
public:
  explicit Init_MapStats_edges_is_set(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_edge_snapshots edges_is_set(::bosdyn_msgs::msg::MapStats::_edges_is_set_type arg)
  {
    msg_.edges_is_set = std::move(arg);
    return Init_MapStats_edge_snapshots(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_edges
{
public:
  explicit Init_MapStats_edges(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_edges_is_set edges(::bosdyn_msgs::msg::MapStats::_edges_type arg)
  {
    msg_.edges = std::move(arg);
    return Init_MapStats_edges_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_alternate_waypoints_is_set
{
public:
  explicit Init_MapStats_alternate_waypoints_is_set(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_edges alternate_waypoints_is_set(::bosdyn_msgs::msg::MapStats::_alternate_waypoints_is_set_type arg)
  {
    msg_.alternate_waypoints_is_set = std::move(arg);
    return Init_MapStats_edges(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_alternate_waypoints
{
public:
  explicit Init_MapStats_alternate_waypoints(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_alternate_waypoints_is_set alternate_waypoints(::bosdyn_msgs::msg::MapStats::_alternate_waypoints_type arg)
  {
    msg_.alternate_waypoints = std::move(arg);
    return Init_MapStats_alternate_waypoints_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_waypoint_snapshots_is_set
{
public:
  explicit Init_MapStats_waypoint_snapshots_is_set(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_alternate_waypoints waypoint_snapshots_is_set(::bosdyn_msgs::msg::MapStats::_waypoint_snapshots_is_set_type arg)
  {
    msg_.waypoint_snapshots_is_set = std::move(arg);
    return Init_MapStats_alternate_waypoints(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_waypoint_snapshots
{
public:
  explicit Init_MapStats_waypoint_snapshots(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_waypoint_snapshots_is_set waypoint_snapshots(::bosdyn_msgs::msg::MapStats::_waypoint_snapshots_type arg)
  {
    msg_.waypoint_snapshots = std::move(arg);
    return Init_MapStats_waypoint_snapshots_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_waypoints_is_set
{
public:
  explicit Init_MapStats_waypoints_is_set(::bosdyn_msgs::msg::MapStats & msg)
  : msg_(msg)
  {}
  Init_MapStats_waypoint_snapshots waypoints_is_set(::bosdyn_msgs::msg::MapStats::_waypoints_is_set_type arg)
  {
    msg_.waypoints_is_set = std::move(arg);
    return Init_MapStats_waypoint_snapshots(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

class Init_MapStats_waypoints
{
public:
  Init_MapStats_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapStats_waypoints_is_set waypoints(::bosdyn_msgs::msg::MapStats::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_MapStats_waypoints_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MapStats>()
{
  return bosdyn_msgs::msg::builder::Init_MapStats_waypoints();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MAP_STATS__BUILDER_HPP_
