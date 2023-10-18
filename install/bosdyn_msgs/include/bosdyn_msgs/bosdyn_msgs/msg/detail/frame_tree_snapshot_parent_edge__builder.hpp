// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FrameTreeSnapshotParentEdge.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FRAME_TREE_SNAPSHOT_PARENT_EDGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FRAME_TREE_SNAPSHOT_PARENT_EDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/frame_tree_snapshot_parent_edge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FrameTreeSnapshotParentEdge_parent_tform_child_is_set
{
public:
  explicit Init_FrameTreeSnapshotParentEdge_parent_tform_child_is_set(::bosdyn_msgs::msg::FrameTreeSnapshotParentEdge & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FrameTreeSnapshotParentEdge parent_tform_child_is_set(::bosdyn_msgs::msg::FrameTreeSnapshotParentEdge::_parent_tform_child_is_set_type arg)
  {
    msg_.parent_tform_child_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FrameTreeSnapshotParentEdge msg_;
};

class Init_FrameTreeSnapshotParentEdge_parent_tform_child
{
public:
  explicit Init_FrameTreeSnapshotParentEdge_parent_tform_child(::bosdyn_msgs::msg::FrameTreeSnapshotParentEdge & msg)
  : msg_(msg)
  {}
  Init_FrameTreeSnapshotParentEdge_parent_tform_child_is_set parent_tform_child(::bosdyn_msgs::msg::FrameTreeSnapshotParentEdge::_parent_tform_child_type arg)
  {
    msg_.parent_tform_child = std::move(arg);
    return Init_FrameTreeSnapshotParentEdge_parent_tform_child_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FrameTreeSnapshotParentEdge msg_;
};

class Init_FrameTreeSnapshotParentEdge_parent_frame_name
{
public:
  Init_FrameTreeSnapshotParentEdge_parent_frame_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FrameTreeSnapshotParentEdge_parent_tform_child parent_frame_name(::bosdyn_msgs::msg::FrameTreeSnapshotParentEdge::_parent_frame_name_type arg)
  {
    msg_.parent_frame_name = std::move(arg);
    return Init_FrameTreeSnapshotParentEdge_parent_tform_child(msg_);
  }

private:
  ::bosdyn_msgs::msg::FrameTreeSnapshotParentEdge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FrameTreeSnapshotParentEdge>()
{
  return bosdyn_msgs::msg::builder::Init_FrameTreeSnapshotParentEdge_parent_frame_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FRAME_TREE_SNAPSHOT_PARENT_EDGE__BUILDER_HPP_
