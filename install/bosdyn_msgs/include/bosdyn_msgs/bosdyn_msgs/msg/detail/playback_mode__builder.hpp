// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PlaybackMode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/playback_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PlaybackMode_mode
{
public:
  Init_PlaybackMode_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::PlaybackMode mode(::bosdyn_msgs::msg::PlaybackMode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaybackMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PlaybackMode>()
{
  return bosdyn_msgs::msg::builder::Init_PlaybackMode_mode();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE__BUILDER_HPP_
