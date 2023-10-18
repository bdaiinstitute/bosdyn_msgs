// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/KeypointMatches.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_MATCHES__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_MATCHES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/keypoint_matches__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_KeypointMatches_matches
{
public:
  explicit Init_KeypointMatches_matches(::bosdyn_msgs::msg::KeypointMatches & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::KeypointMatches matches(::bosdyn_msgs::msg::KeypointMatches::_matches_type arg)
  {
    msg_.matches = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeypointMatches msg_;
};

class Init_KeypointMatches_live_keypoints_is_set
{
public:
  explicit Init_KeypointMatches_live_keypoints_is_set(::bosdyn_msgs::msg::KeypointMatches & msg)
  : msg_(msg)
  {}
  Init_KeypointMatches_matches live_keypoints_is_set(::bosdyn_msgs::msg::KeypointMatches::_live_keypoints_is_set_type arg)
  {
    msg_.live_keypoints_is_set = std::move(arg);
    return Init_KeypointMatches_matches(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeypointMatches msg_;
};

class Init_KeypointMatches_live_keypoints
{
public:
  explicit Init_KeypointMatches_live_keypoints(::bosdyn_msgs::msg::KeypointMatches & msg)
  : msg_(msg)
  {}
  Init_KeypointMatches_live_keypoints_is_set live_keypoints(::bosdyn_msgs::msg::KeypointMatches::_live_keypoints_type arg)
  {
    msg_.live_keypoints = std::move(arg);
    return Init_KeypointMatches_live_keypoints_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeypointMatches msg_;
};

class Init_KeypointMatches_reference_keypoints_is_set
{
public:
  explicit Init_KeypointMatches_reference_keypoints_is_set(::bosdyn_msgs::msg::KeypointMatches & msg)
  : msg_(msg)
  {}
  Init_KeypointMatches_live_keypoints reference_keypoints_is_set(::bosdyn_msgs::msg::KeypointMatches::_reference_keypoints_is_set_type arg)
  {
    msg_.reference_keypoints_is_set = std::move(arg);
    return Init_KeypointMatches_live_keypoints(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeypointMatches msg_;
};

class Init_KeypointMatches_reference_keypoints
{
public:
  Init_KeypointMatches_reference_keypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeypointMatches_reference_keypoints_is_set reference_keypoints(::bosdyn_msgs::msg::KeypointMatches::_reference_keypoints_type arg)
  {
    msg_.reference_keypoints = std::move(arg);
    return Init_KeypointMatches_reference_keypoints_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeypointMatches msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::KeypointMatches>()
{
  return bosdyn_msgs::msg::builder::Init_KeypointMatches_reference_keypoints();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_MATCHES__BUILDER_HPP_
