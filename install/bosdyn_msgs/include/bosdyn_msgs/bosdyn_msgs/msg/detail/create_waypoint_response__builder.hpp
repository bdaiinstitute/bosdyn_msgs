// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CreateWaypointResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/create_waypoint_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CreateWaypointResponse_map_stats_is_set
{
public:
  explicit Init_CreateWaypointResponse_map_stats_is_set(::bosdyn_msgs::msg::CreateWaypointResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CreateWaypointResponse map_stats_is_set(::bosdyn_msgs::msg::CreateWaypointResponse::_map_stats_is_set_type arg)
  {
    msg_.map_stats_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

class Init_CreateWaypointResponse_map_stats
{
public:
  explicit Init_CreateWaypointResponse_map_stats(::bosdyn_msgs::msg::CreateWaypointResponse & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointResponse_map_stats_is_set map_stats(::bosdyn_msgs::msg::CreateWaypointResponse::_map_stats_type arg)
  {
    msg_.map_stats = std::move(arg);
    return Init_CreateWaypointResponse_map_stats_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

class Init_CreateWaypointResponse_license_status
{
public:
  explicit Init_CreateWaypointResponse_license_status(::bosdyn_msgs::msg::CreateWaypointResponse & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointResponse_map_stats license_status(::bosdyn_msgs::msg::CreateWaypointResponse::_license_status_type arg)
  {
    msg_.license_status = std::move(arg);
    return Init_CreateWaypointResponse_map_stats(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

class Init_CreateWaypointResponse_bad_pose_fiducials
{
public:
  explicit Init_CreateWaypointResponse_bad_pose_fiducials(::bosdyn_msgs::msg::CreateWaypointResponse & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointResponse_license_status bad_pose_fiducials(::bosdyn_msgs::msg::CreateWaypointResponse::_bad_pose_fiducials_type arg)
  {
    msg_.bad_pose_fiducials = std::move(arg);
    return Init_CreateWaypointResponse_license_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

class Init_CreateWaypointResponse_missing_fiducials
{
public:
  explicit Init_CreateWaypointResponse_missing_fiducials(::bosdyn_msgs::msg::CreateWaypointResponse & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointResponse_bad_pose_fiducials missing_fiducials(::bosdyn_msgs::msg::CreateWaypointResponse::_missing_fiducials_type arg)
  {
    msg_.missing_fiducials = std::move(arg);
    return Init_CreateWaypointResponse_bad_pose_fiducials(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

class Init_CreateWaypointResponse_lease_use_result_is_set
{
public:
  explicit Init_CreateWaypointResponse_lease_use_result_is_set(::bosdyn_msgs::msg::CreateWaypointResponse & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointResponse_missing_fiducials lease_use_result_is_set(::bosdyn_msgs::msg::CreateWaypointResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return Init_CreateWaypointResponse_missing_fiducials(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

class Init_CreateWaypointResponse_lease_use_result
{
public:
  explicit Init_CreateWaypointResponse_lease_use_result(::bosdyn_msgs::msg::CreateWaypointResponse & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::CreateWaypointResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_CreateWaypointResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

class Init_CreateWaypointResponse_status
{
public:
  explicit Init_CreateWaypointResponse_status(::bosdyn_msgs::msg::CreateWaypointResponse & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointResponse_lease_use_result status(::bosdyn_msgs::msg::CreateWaypointResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CreateWaypointResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

class Init_CreateWaypointResponse_created_edge_is_set
{
public:
  explicit Init_CreateWaypointResponse_created_edge_is_set(::bosdyn_msgs::msg::CreateWaypointResponse & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointResponse_status created_edge_is_set(::bosdyn_msgs::msg::CreateWaypointResponse::_created_edge_is_set_type arg)
  {
    msg_.created_edge_is_set = std::move(arg);
    return Init_CreateWaypointResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

class Init_CreateWaypointResponse_created_edge
{
public:
  explicit Init_CreateWaypointResponse_created_edge(::bosdyn_msgs::msg::CreateWaypointResponse & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointResponse_created_edge_is_set created_edge(::bosdyn_msgs::msg::CreateWaypointResponse::_created_edge_type arg)
  {
    msg_.created_edge = std::move(arg);
    return Init_CreateWaypointResponse_created_edge_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

class Init_CreateWaypointResponse_created_waypoint_is_set
{
public:
  explicit Init_CreateWaypointResponse_created_waypoint_is_set(::bosdyn_msgs::msg::CreateWaypointResponse & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointResponse_created_edge created_waypoint_is_set(::bosdyn_msgs::msg::CreateWaypointResponse::_created_waypoint_is_set_type arg)
  {
    msg_.created_waypoint_is_set = std::move(arg);
    return Init_CreateWaypointResponse_created_edge(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

class Init_CreateWaypointResponse_created_waypoint
{
public:
  explicit Init_CreateWaypointResponse_created_waypoint(::bosdyn_msgs::msg::CreateWaypointResponse & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointResponse_created_waypoint_is_set created_waypoint(::bosdyn_msgs::msg::CreateWaypointResponse::_created_waypoint_type arg)
  {
    msg_.created_waypoint = std::move(arg);
    return Init_CreateWaypointResponse_created_waypoint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

class Init_CreateWaypointResponse_header_is_set
{
public:
  explicit Init_CreateWaypointResponse_header_is_set(::bosdyn_msgs::msg::CreateWaypointResponse & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointResponse_created_waypoint header_is_set(::bosdyn_msgs::msg::CreateWaypointResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_CreateWaypointResponse_created_waypoint(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

class Init_CreateWaypointResponse_header
{
public:
  Init_CreateWaypointResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CreateWaypointResponse_header_is_set header(::bosdyn_msgs::msg::CreateWaypointResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CreateWaypointResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CreateWaypointResponse>()
{
  return bosdyn_msgs::msg::builder::Init_CreateWaypointResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_RESPONSE__BUILDER_HPP_
