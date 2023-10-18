// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PlaybackModeOnce.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_ONCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_ONCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/playback_mode_once__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PlaybackModeOnce_skip_docking_after_completion
{
public:
  Init_PlaybackModeOnce_skip_docking_after_completion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::PlaybackModeOnce skip_docking_after_completion(::bosdyn_msgs::msg::PlaybackModeOnce::_skip_docking_after_completion_type arg)
  {
    msg_.skip_docking_after_completion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaybackModeOnce msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PlaybackModeOnce>()
{
  return bosdyn_msgs::msg::builder::Init_PlaybackModeOnce_skip_docking_after_completion();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_ONCE__BUILDER_HPP_
