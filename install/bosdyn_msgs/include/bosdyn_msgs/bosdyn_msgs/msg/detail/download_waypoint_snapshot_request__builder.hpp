// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DownloadWaypointSnapshotRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_WAYPOINT_SNAPSHOT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_WAYPOINT_SNAPSHOT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/download_waypoint_snapshot_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DownloadWaypointSnapshotRequest_do_not_download_point_cloud
{
public:
  explicit Init_DownloadWaypointSnapshotRequest_do_not_download_point_cloud(::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest do_not_download_point_cloud(::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest::_do_not_download_point_cloud_type arg)
  {
    msg_.do_not_download_point_cloud = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest msg_;
};

class Init_DownloadWaypointSnapshotRequest_compress_point_cloud
{
public:
  explicit Init_DownloadWaypointSnapshotRequest_compress_point_cloud(::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest & msg)
  : msg_(msg)
  {}
  Init_DownloadWaypointSnapshotRequest_do_not_download_point_cloud compress_point_cloud(::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest::_compress_point_cloud_type arg)
  {
    msg_.compress_point_cloud = std::move(arg);
    return Init_DownloadWaypointSnapshotRequest_do_not_download_point_cloud(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest msg_;
};

class Init_DownloadWaypointSnapshotRequest_download_images
{
public:
  explicit Init_DownloadWaypointSnapshotRequest_download_images(::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest & msg)
  : msg_(msg)
  {}
  Init_DownloadWaypointSnapshotRequest_compress_point_cloud download_images(::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest::_download_images_type arg)
  {
    msg_.download_images = std::move(arg);
    return Init_DownloadWaypointSnapshotRequest_compress_point_cloud(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest msg_;
};

class Init_DownloadWaypointSnapshotRequest_waypoint_snapshot_id
{
public:
  explicit Init_DownloadWaypointSnapshotRequest_waypoint_snapshot_id(::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest & msg)
  : msg_(msg)
  {}
  Init_DownloadWaypointSnapshotRequest_download_images waypoint_snapshot_id(::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest::_waypoint_snapshot_id_type arg)
  {
    msg_.waypoint_snapshot_id = std::move(arg);
    return Init_DownloadWaypointSnapshotRequest_download_images(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest msg_;
};

class Init_DownloadWaypointSnapshotRequest_header_is_set
{
public:
  explicit Init_DownloadWaypointSnapshotRequest_header_is_set(::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest & msg)
  : msg_(msg)
  {}
  Init_DownloadWaypointSnapshotRequest_waypoint_snapshot_id header_is_set(::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DownloadWaypointSnapshotRequest_waypoint_snapshot_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest msg_;
};

class Init_DownloadWaypointSnapshotRequest_header
{
public:
  Init_DownloadWaypointSnapshotRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DownloadWaypointSnapshotRequest_header_is_set header(::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DownloadWaypointSnapshotRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DownloadWaypointSnapshotRequest>()
{
  return bosdyn_msgs::msg::builder::Init_DownloadWaypointSnapshotRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_WAYPOINT_SNAPSHOT_REQUEST__BUILDER_HPP_
