// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/KeypointSet.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_SET__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/keypoint_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_KeypointSet_type
{
public:
  explicit Init_KeypointSet_type(::bosdyn_msgs::msg::KeypointSet & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::KeypointSet type(::bosdyn_msgs::msg::KeypointSet::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeypointSet msg_;
};

class Init_KeypointSet_keypoints
{
public:
  Init_KeypointSet_keypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeypointSet_type keypoints(::bosdyn_msgs::msg::KeypointSet::_keypoints_type arg)
  {
    msg_.keypoints = std::move(arg);
    return Init_KeypointSet_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeypointSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::KeypointSet>()
{
  return bosdyn_msgs::msg::builder::Init_KeypointSet_keypoints();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_SET__BUILDER_HPP_
