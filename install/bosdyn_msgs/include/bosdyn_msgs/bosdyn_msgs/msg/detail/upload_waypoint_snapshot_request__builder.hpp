// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UploadWaypointSnapshotRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/upload_waypoint_snapshot_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UploadWaypointSnapshotRequest_lease_is_set
{
public:
  explicit Init_UploadWaypointSnapshotRequest_lease_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UploadWaypointSnapshotRequest lease_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotRequest msg_;
};

class Init_UploadWaypointSnapshotRequest_lease
{
public:
  explicit Init_UploadWaypointSnapshotRequest_lease(::bosdyn_msgs::msg::UploadWaypointSnapshotRequest & msg)
  : msg_(msg)
  {}
  Init_UploadWaypointSnapshotRequest_lease_is_set lease(::bosdyn_msgs::msg::UploadWaypointSnapshotRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_UploadWaypointSnapshotRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotRequest msg_;
};

class Init_UploadWaypointSnapshotRequest_chunk_is_set
{
public:
  explicit Init_UploadWaypointSnapshotRequest_chunk_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotRequest & msg)
  : msg_(msg)
  {}
  Init_UploadWaypointSnapshotRequest_lease chunk_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotRequest::_chunk_is_set_type arg)
  {
    msg_.chunk_is_set = std::move(arg);
    return Init_UploadWaypointSnapshotRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotRequest msg_;
};

class Init_UploadWaypointSnapshotRequest_chunk
{
public:
  explicit Init_UploadWaypointSnapshotRequest_chunk(::bosdyn_msgs::msg::UploadWaypointSnapshotRequest & msg)
  : msg_(msg)
  {}
  Init_UploadWaypointSnapshotRequest_chunk_is_set chunk(::bosdyn_msgs::msg::UploadWaypointSnapshotRequest::_chunk_type arg)
  {
    msg_.chunk = std::move(arg);
    return Init_UploadWaypointSnapshotRequest_chunk_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotRequest msg_;
};

class Init_UploadWaypointSnapshotRequest_header_is_set
{
public:
  explicit Init_UploadWaypointSnapshotRequest_header_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotRequest & msg)
  : msg_(msg)
  {}
  Init_UploadWaypointSnapshotRequest_chunk header_is_set(::bosdyn_msgs::msg::UploadWaypointSnapshotRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_UploadWaypointSnapshotRequest_chunk(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotRequest msg_;
};

class Init_UploadWaypointSnapshotRequest_header
{
public:
  Init_UploadWaypointSnapshotRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UploadWaypointSnapshotRequest_header_is_set header(::bosdyn_msgs::msg::UploadWaypointSnapshotRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UploadWaypointSnapshotRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UploadWaypointSnapshotRequest>()
{
  return bosdyn_msgs::msg::builder::Init_UploadWaypointSnapshotRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_REQUEST__BUILDER_HPP_
