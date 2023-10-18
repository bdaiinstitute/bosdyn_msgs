// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PlaybackModeOneOfMode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_ONE_OF_MODE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_ONE_OF_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/playback_mode_one_of_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PlaybackModeOneOfMode_mode_choice
{
public:
  explicit Init_PlaybackModeOneOfMode_mode_choice(::bosdyn_msgs::msg::PlaybackModeOneOfMode & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PlaybackModeOneOfMode mode_choice(::bosdyn_msgs::msg::PlaybackModeOneOfMode::_mode_choice_type arg)
  {
    msg_.mode_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaybackModeOneOfMode msg_;
};

class Init_PlaybackModeOneOfMode_continuous
{
public:
  explicit Init_PlaybackModeOneOfMode_continuous(::bosdyn_msgs::msg::PlaybackModeOneOfMode & msg)
  : msg_(msg)
  {}
  Init_PlaybackModeOneOfMode_mode_choice continuous(::bosdyn_msgs::msg::PlaybackModeOneOfMode::_continuous_type arg)
  {
    msg_.continuous = std::move(arg);
    return Init_PlaybackModeOneOfMode_mode_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaybackModeOneOfMode msg_;
};

class Init_PlaybackModeOneOfMode_periodic
{
public:
  explicit Init_PlaybackModeOneOfMode_periodic(::bosdyn_msgs::msg::PlaybackModeOneOfMode & msg)
  : msg_(msg)
  {}
  Init_PlaybackModeOneOfMode_continuous periodic(::bosdyn_msgs::msg::PlaybackModeOneOfMode::_periodic_type arg)
  {
    msg_.periodic = std::move(arg);
    return Init_PlaybackModeOneOfMode_continuous(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaybackModeOneOfMode msg_;
};

class Init_PlaybackModeOneOfMode_once
{
public:
  Init_PlaybackModeOneOfMode_once()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaybackModeOneOfMode_periodic once(::bosdyn_msgs::msg::PlaybackModeOneOfMode::_once_type arg)
  {
    msg_.once = std::move(arg);
    return Init_PlaybackModeOneOfMode_periodic(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaybackModeOneOfMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PlaybackModeOneOfMode>()
{
  return bosdyn_msgs::msg::builder::Init_PlaybackModeOneOfMode_once();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_ONE_OF_MODE__BUILDER_HPP_
