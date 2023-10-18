// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UploadWaypointSnapshotResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/upload_waypoint_snapshot_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UploadWaypointSnapshotResponse_map_stats_is_set
{
public:
  explicit Init_UploadWaypointSnapshotResponse_map_stats_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UploadWaypointSnapshotResponse map_stats_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse::_map_stats_is_set_type arg)
  {
    msg_.map_stats_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotResponse msg_;
};

class Init_UploadWaypointSnapshotResponse_map_stats
{
public:
  explicit Init_UploadWaypointSnapshotResponse_map_stats(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_UploadWaypointSnapshotResponse_map_stats_is_set map_stats(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse::_map_stats_type arg)
  {
    msg_.map_stats = std::move(arg);
    return Init_UploadWaypointSnapshotResponse_map_stats_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotResponse msg_;
};

class Init_UploadWaypointSnapshotResponse_sensor_status_is_set
{
public:
  explicit Init_UploadWaypointSnapshotResponse_sensor_status_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_UploadWaypointSnapshotResponse_map_stats sensor_status_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse::_sensor_status_is_set_type arg)
  {
    msg_.sensor_status_is_set = std::move(arg);
    return Init_UploadWaypointSnapshotResponse_map_stats(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotResponse msg_;
};

class Init_UploadWaypointSnapshotResponse_sensor_status
{
public:
  explicit Init_UploadWaypointSnapshotResponse_sensor_status(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_UploadWaypointSnapshotResponse_sensor_status_is_set sensor_status(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse::_sensor_status_type arg)
  {
    msg_.sensor_status = std::move(arg);
    return Init_UploadWaypointSnapshotResponse_sensor_status_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotResponse msg_;
};

class Init_UploadWaypointSnapshotResponse_status
{
public:
  explicit Init_UploadWaypointSnapshotResponse_status(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_UploadWaypointSnapshotResponse_sensor_status status(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_UploadWaypointSnapshotResponse_sensor_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotResponse msg_;
};

class Init_UploadWaypointSnapshotResponse_lease_use_result_is_set
{
public:
  explicit Init_UploadWaypointSnapshotResponse_lease_use_result_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_UploadWaypointSnapshotResponse_status lease_use_result_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return Init_UploadWaypointSnapshotResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotResponse msg_;
};

class Init_UploadWaypointSnapshotResponse_lease_use_result
{
public:
  explicit Init_UploadWaypointSnapshotResponse_lease_use_result(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_UploadWaypointSnapshotResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_UploadWaypointSnapshotResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotResponse msg_;
};

class Init_UploadWaypointSnapshotResponse_header_is_set
{
public:
  explicit Init_UploadWaypointSnapshotResponse_header_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_UploadWaypointSnapshotResponse_lease_use_result header_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_UploadWaypointSnapshotResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotResponse msg_;
};

class Init_UploadWaypointSnapshotResponse_header
{
public:
  Init_UploadWaypointSnapshotResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UploadWaypointSnapshotResponse_header_is_set header(::bosdyn_msgs::msg::UploadWaypointSnapshotResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UploadWaypointSnapshotResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UploadWaypointSnapshotResponse>()
{
  return bosdyn_msgs::msg::builder::Init_UploadWaypointSnapshotResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_RESPONSE__BUILDER_HPP_
