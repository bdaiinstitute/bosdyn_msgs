// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DownloadEdgeSnapshotResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_EDGE_SNAPSHOT_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_EDGE_SNAPSHOT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/download_edge_snapshot_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DownloadEdgeSnapshotResponse_chunk_is_set
{
public:
  explicit Init_DownloadEdgeSnapshotResponse_chunk_is_set(::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse chunk_is_set(::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse::_chunk_is_set_type arg)
  {
    msg_.chunk_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse msg_;
};

class Init_DownloadEdgeSnapshotResponse_chunk
{
public:
  explicit Init_DownloadEdgeSnapshotResponse_chunk(::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_DownloadEdgeSnapshotResponse_chunk_is_set chunk(::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse::_chunk_type arg)
  {
    msg_.chunk = std::move(arg);
    return Init_DownloadEdgeSnapshotResponse_chunk_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse msg_;
};

class Init_DownloadEdgeSnapshotResponse_edge_snapshot_id
{
public:
  explicit Init_DownloadEdgeSnapshotResponse_edge_snapshot_id(::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_DownloadEdgeSnapshotResponse_chunk edge_snapshot_id(::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse::_edge_snapshot_id_type arg)
  {
    msg_.edge_snapshot_id = std::move(arg);
    return Init_DownloadEdgeSnapshotResponse_chunk(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse msg_;
};

class Init_DownloadEdgeSnapshotResponse_status
{
public:
  explicit Init_DownloadEdgeSnapshotResponse_status(::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_DownloadEdgeSnapshotResponse_edge_snapshot_id status(::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DownloadEdgeSnapshotResponse_edge_snapshot_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse msg_;
};

class Init_DownloadEdgeSnapshotResponse_header_is_set
{
public:
  explicit Init_DownloadEdgeSnapshotResponse_header_is_set(::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_DownloadEdgeSnapshotResponse_status header_is_set(::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DownloadEdgeSnapshotResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse msg_;
};

class Init_DownloadEdgeSnapshotResponse_header
{
public:
  Init_DownloadEdgeSnapshotResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DownloadEdgeSnapshotResponse_header_is_set header(::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DownloadEdgeSnapshotResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DownloadEdgeSnapshotResponse>()
{
  return bosdyn_msgs::msg::builder::Init_DownloadEdgeSnapshotResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_EDGE_SNAPSHOT_RESPONSE__BUILDER_HPP_
