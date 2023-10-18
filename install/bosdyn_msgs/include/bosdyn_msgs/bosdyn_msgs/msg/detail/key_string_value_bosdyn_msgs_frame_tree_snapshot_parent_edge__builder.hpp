// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_FRAME_TREE_SNAPSHOT_PARENT_EDGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_FRAME_TREE_SNAPSHOT_PARENT_EDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_frame_tree_snapshot_parent_edge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge_value
{
public:
  explicit Init_KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge_value(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge value(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge msg_;
};

class Init_KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge_key
{
public:
  Init_KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge_value key(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge>()
{
  return bosdyn_msgs::msg::builder::Init_KeyStringValueBosdynMsgsFrameTreeSnapshotParentEdge_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_FRAME_TREE_SNAPSHOT_PARENT_EDGE__BUILDER_HPP_
