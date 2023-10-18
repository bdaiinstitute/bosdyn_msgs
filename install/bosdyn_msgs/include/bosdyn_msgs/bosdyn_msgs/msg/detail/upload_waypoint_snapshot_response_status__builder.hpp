// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UploadWaypointSnapshotResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_RESPONSE_STATUS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_RESPONSE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/upload_waypoint_snapshot_response_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UploadWaypointSnapshotResponseStatus_value
{
public:
  Init_UploadWaypointSnapshotResponseStatus_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::UploadWaypointSnapshotResponseStatus value(::bosdyn_msgs::msg::UploadWaypointSnapshotResponseStatus::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadWaypointSnapshotResponseStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UploadWaypointSnapshotResponseStatus>()
{
  return bosdyn_msgs::msg::builder::Init_UploadWaypointSnapshotResponseStatus_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_RESPONSE_STATUS__BUILDER_HPP_
