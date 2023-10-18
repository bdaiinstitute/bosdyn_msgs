// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DownloadEdgeSnapshotRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_EDGE_SNAPSHOT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_EDGE_SNAPSHOT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/download_edge_snapshot_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DownloadEdgeSnapshotRequest_edge_snapshot_id
{
public:
  explicit Init_DownloadEdgeSnapshotRequest_edge_snapshot_id(::bosdyn_msgs::msg::DownloadEdgeSnapshotRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DownloadEdgeSnapshotRequest edge_snapshot_id(::bosdyn_msgs::msg::DownloadEdgeSnapshotRequest::_edge_snapshot_id_type arg)
  {
    msg_.edge_snapshot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadEdgeSnapshotRequest msg_;
};

class Init_DownloadEdgeSnapshotRequest_header_is_set
{
public:
  explicit Init_DownloadEdgeSnapshotRequest_header_is_set(::bosdyn_msgs::msg::DownloadEdgeSnapshotRequest & msg)
  : msg_(msg)
  {}
  Init_DownloadEdgeSnapshotRequest_edge_snapshot_id header_is_set(::bosdyn_msgs::msg::DownloadEdgeSnapshotRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DownloadEdgeSnapshotRequest_edge_snapshot_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadEdgeSnapshotRequest msg_;
};

class Init_DownloadEdgeSnapshotRequest_header
{
public:
  Init_DownloadEdgeSnapshotRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DownloadEdgeSnapshotRequest_header_is_set header(::bosdyn_msgs::msg::DownloadEdgeSnapshotRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DownloadEdgeSnapshotRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadEdgeSnapshotRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DownloadEdgeSnapshotRequest>()
{
  return bosdyn_msgs::msg::builder::Init_DownloadEdgeSnapshotRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_EDGE_SNAPSHOT_REQUEST__BUILDER_HPP_
