// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UploadEdgeSnapshotRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_EDGE_SNAPSHOT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_EDGE_SNAPSHOT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/upload_edge_snapshot_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UploadEdgeSnapshotRequest_lease_is_set
{
public:
  explicit Init_UploadEdgeSnapshotRequest_lease_is_set(::bosdyn_msgs::msg::UploadEdgeSnapshotRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UploadEdgeSnapshotRequest lease_is_set(::bosdyn_msgs::msg::UploadEdgeSnapshotRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadEdgeSnapshotRequest msg_;
};

class Init_UploadEdgeSnapshotRequest_lease
{
public:
  explicit Init_UploadEdgeSnapshotRequest_lease(::bosdyn_msgs::msg::UploadEdgeSnapshotRequest & msg)
  : msg_(msg)
  {}
  Init_UploadEdgeSnapshotRequest_lease_is_set lease(::bosdyn_msgs::msg::UploadEdgeSnapshotRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_UploadEdgeSnapshotRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadEdgeSnapshotRequest msg_;
};

class Init_UploadEdgeSnapshotRequest_chunk_is_set
{
public:
  explicit Init_UploadEdgeSnapshotRequest_chunk_is_set(::bosdyn_msgs::msg::UploadEdgeSnapshotRequest & msg)
  : msg_(msg)
  {}
  Init_UploadEdgeSnapshotRequest_lease chunk_is_set(::bosdyn_msgs::msg::UploadEdgeSnapshotRequest::_chunk_is_set_type arg)
  {
    msg_.chunk_is_set = std::move(arg);
    return Init_UploadEdgeSnapshotRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadEdgeSnapshotRequest msg_;
};

class Init_UploadEdgeSnapshotRequest_chunk
{
public:
  explicit Init_UploadEdgeSnapshotRequest_chunk(::bosdyn_msgs::msg::UploadEdgeSnapshotRequest & msg)
  : msg_(msg)
  {}
  Init_UploadEdgeSnapshotRequest_chunk_is_set chunk(::bosdyn_msgs::msg::UploadEdgeSnapshotRequest::_chunk_type arg)
  {
    msg_.chunk = std::move(arg);
    return Init_UploadEdgeSnapshotRequest_chunk_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadEdgeSnapshotRequest msg_;
};

class Init_UploadEdgeSnapshotRequest_header_is_set
{
public:
  explicit Init_UploadEdgeSnapshotRequest_header_is_set(::bosdyn_msgs::msg::UploadEdgeSnapshotRequest & msg)
  : msg_(msg)
  {}
  Init_UploadEdgeSnapshotRequest_chunk header_is_set(::bosdyn_msgs::msg::UploadEdgeSnapshotRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_UploadEdgeSnapshotRequest_chunk(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadEdgeSnapshotRequest msg_;
};

class Init_UploadEdgeSnapshotRequest_header
{
public:
  Init_UploadEdgeSnapshotRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UploadEdgeSnapshotRequest_header_is_set header(::bosdyn_msgs::msg::UploadEdgeSnapshotRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UploadEdgeSnapshotRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadEdgeSnapshotRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UploadEdgeSnapshotRequest>()
{
  return bosdyn_msgs::msg::builder::Init_UploadEdgeSnapshotRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_EDGE_SNAPSHOT_REQUEST__BUILDER_HPP_
