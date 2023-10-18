// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UploadEdgeSnapshotResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_EDGE_SNAPSHOT_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_EDGE_SNAPSHOT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/upload_edge_snapshot_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UploadEdgeSnapshotResponse_map_stats_is_set
{
public:
  explicit Init_UploadEdgeSnapshotResponse_map_stats_is_set(::bosdyn_msgs::msg::UploadEdgeSnapshotResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UploadEdgeSnapshotResponse map_stats_is_set(::bosdyn_msgs::msg::UploadEdgeSnapshotResponse::_map_stats_is_set_type arg)
  {
    msg_.map_stats_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadEdgeSnapshotResponse msg_;
};

class Init_UploadEdgeSnapshotResponse_map_stats
{
public:
  explicit Init_UploadEdgeSnapshotResponse_map_stats(::bosdyn_msgs::msg::UploadEdgeSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_UploadEdgeSnapshotResponse_map_stats_is_set map_stats(::bosdyn_msgs::msg::UploadEdgeSnapshotResponse::_map_stats_type arg)
  {
    msg_.map_stats = std::move(arg);
    return Init_UploadEdgeSnapshotResponse_map_stats_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadEdgeSnapshotResponse msg_;
};

class Init_UploadEdgeSnapshotResponse_lease_use_result_is_set
{
public:
  explicit Init_UploadEdgeSnapshotResponse_lease_use_result_is_set(::bosdyn_msgs::msg::UploadEdgeSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_UploadEdgeSnapshotResponse_map_stats lease_use_result_is_set(::bosdyn_msgs::msg::UploadEdgeSnapshotResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return Init_UploadEdgeSnapshotResponse_map_stats(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadEdgeSnapshotResponse msg_;
};

class Init_UploadEdgeSnapshotResponse_lease_use_result
{
public:
  explicit Init_UploadEdgeSnapshotResponse_lease_use_result(::bosdyn_msgs::msg::UploadEdgeSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_UploadEdgeSnapshotResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::UploadEdgeSnapshotResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_UploadEdgeSnapshotResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadEdgeSnapshotResponse msg_;
};

class Init_UploadEdgeSnapshotResponse_header_is_set
{
public:
  explicit Init_UploadEdgeSnapshotResponse_header_is_set(::bosdyn_msgs::msg::UploadEdgeSnapshotResponse & msg)
  : msg_(msg)
  {}
  Init_UploadEdgeSnapshotResponse_lease_use_result header_is_set(::bosdyn_msgs::msg::UploadEdgeSnapshotResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_UploadEdgeSnapshotResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadEdgeSnapshotResponse msg_;
};

class Init_UploadEdgeSnapshotResponse_header
{
public:
  Init_UploadEdgeSnapshotResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UploadEdgeSnapshotResponse_header_is_set header(::bosdyn_msgs::msg::UploadEdgeSnapshotResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UploadEdgeSnapshotResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadEdgeSnapshotResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UploadEdgeSnapshotResponse>()
{
  return bosdyn_msgs::msg::builder::Init_UploadEdgeSnapshotResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_EDGE_SNAPSHOT_RESPONSE__BUILDER_HPP_
