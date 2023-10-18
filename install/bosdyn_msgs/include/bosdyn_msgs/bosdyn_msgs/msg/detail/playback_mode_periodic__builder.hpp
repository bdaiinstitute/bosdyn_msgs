// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PlaybackModePeriodic.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_PERIODIC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_PERIODIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/playback_mode_periodic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PlaybackModePeriodic_repetitions
{
public:
  explicit Init_PlaybackModePeriodic_repetitions(::bosdyn_msgs::msg::PlaybackModePeriodic & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PlaybackModePeriodic repetitions(::bosdyn_msgs::msg::PlaybackModePeriodic::_repetitions_type arg)
  {
    msg_.repetitions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaybackModePeriodic msg_;
};

class Init_PlaybackModePeriodic_interval_is_set
{
public:
  explicit Init_PlaybackModePeriodic_interval_is_set(::bosdyn_msgs::msg::PlaybackModePeriodic & msg)
  : msg_(msg)
  {}
  Init_PlaybackModePeriodic_repetitions interval_is_set(::bosdyn_msgs::msg::PlaybackModePeriodic::_interval_is_set_type arg)
  {
    msg_.interval_is_set = std::move(arg);
    return Init_PlaybackModePeriodic_repetitions(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaybackModePeriodic msg_;
};

class Init_PlaybackModePeriodic_interval
{
public:
  Init_PlaybackModePeriodic_interval()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaybackModePeriodic_interval_is_set interval(::bosdyn_msgs::msg::PlaybackModePeriodic::_interval_type arg)
  {
    msg_.interval = std::move(arg);
    return Init_PlaybackModePeriodic_interval_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaybackModePeriodic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PlaybackModePeriodic>()
{
  return bosdyn_msgs::msg::builder::Init_PlaybackModePeriodic_interval();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_PERIODIC__BUILDER_HPP_
