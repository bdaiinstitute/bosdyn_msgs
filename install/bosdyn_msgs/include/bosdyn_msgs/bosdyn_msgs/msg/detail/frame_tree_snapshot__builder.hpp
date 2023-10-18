// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FrameTreeSnapshot.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FRAME_TREE_SNAPSHOT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FRAME_TREE_SNAPSHOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FrameTreeSnapshot_child_to_parent_edge_map
{
public:
  Init_FrameTreeSnapshot_child_to_parent_edge_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::FrameTreeSnapshot child_to_parent_edge_map(::bosdyn_msgs::msg::FrameTreeSnapshot::_child_to_parent_edge_map_type arg)
  {
    msg_.child_to_parent_edge_map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FrameTreeSnapshot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FrameTreeSnapshot>()
{
  return bosdyn_msgs::msg::builder::Init_FrameTreeSnapshot_child_to_parent_edge_map();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FRAME_TREE_SNAPSHOT__BUILDER_HPP_
