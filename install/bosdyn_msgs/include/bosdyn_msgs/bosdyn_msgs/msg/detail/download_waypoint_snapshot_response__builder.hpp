// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DownloadWaypointSnapshotResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_WAYPOINT_SNAPSHOT_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_WAYPOINT_SNAPSHOT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/download_waypoint_snapshot_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DownloadWaypointSnapshotResponse_chunk_is_set
{
public:
  explicit Init_DownloadWaypointSnapshotResponse_chunk_is_set(::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse chunk_is_set(::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse::_chunk_is_set_type arg)
  {
    msg_.chunk_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse msg_;
};

class Init_DownloadWaypointSnapshotResponse_chunk
{
public:
  explicit Init_DownloadWaypointSnapshotResponse_chunk(::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_DownloadWaypointSnapshotResponse_chunk_is_set chunk(::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse::_chunk_type arg)
  {
    msg_.chunk = std::move(arg);
    return Init_DownloadWaypointSnapshotResponse_chunk_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse msg_;
};

class Init_DownloadWaypointSnapshotResponse_waypoint_snapshot_id
{
public:
  explicit Init_DownloadWaypointSnapshotResponse_waypoint_snapshot_id(::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_DownloadWaypointSnapshotResponse_chunk waypoint_snapshot_id(::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse::_waypoint_snapshot_id_type arg)
  {
    msg_.waypoint_snapshot_id = std::move(arg);
    return Init_DownloadWaypointSnapshotResponse_chunk(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse msg_;
};

class Init_DownloadWaypointSnapshotResponse_status
{
public:
  explicit Init_DownloadWaypointSnapshotResponse_status(::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_DownloadWaypointSnapshotResponse_waypoint_snapshot_id status(::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DownloadWaypointSnapshotResponse_waypoint_snapshot_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse msg_;
};

class Init_DownloadWaypointSnapshotResponse_header_is_set
{
public:
  explicit Init_DownloadWaypointSnapshotResponse_header_is_set(::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_DownloadWaypointSnapshotResponse_status header_is_set(::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DownloadWaypointSnapshotResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse msg_;
};

class Init_DownloadWaypointSnapshotResponse_header
{
public:
  Init_DownloadWaypointSnapshotResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DownloadWaypointSnapshotResponse_header_is_set header(::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DownloadWaypointSnapshotResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DownloadWaypointSnapshotResponse>()
{
  return bosdyn_msgs::msg::builder::Init_DownloadWaypointSnapshotResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_WAYPOINT_SNAPSHOT_RESPONSE__BUILDER_HPP_
