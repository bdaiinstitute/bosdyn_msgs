// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PlaySoundRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAY_SOUND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLAY_SOUND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/play_sound_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PlaySoundRequest_gain_is_set
{
public:
  explicit Init_PlaySoundRequest_gain_is_set(::bosdyn_msgs::msg::PlaySoundRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PlaySoundRequest gain_is_set(::bosdyn_msgs::msg::PlaySoundRequest::_gain_is_set_type arg)
  {
    msg_.gain_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaySoundRequest msg_;
};

class Init_PlaySoundRequest_gain
{
public:
  explicit Init_PlaySoundRequest_gain(::bosdyn_msgs::msg::PlaySoundRequest & msg)
  : msg_(msg)
  {}
  Init_PlaySoundRequest_gain_is_set gain(::bosdyn_msgs::msg::PlaySoundRequest::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return Init_PlaySoundRequest_gain_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaySoundRequest msg_;
};

class Init_PlaySoundRequest_sound_is_set
{
public:
  explicit Init_PlaySoundRequest_sound_is_set(::bosdyn_msgs::msg::PlaySoundRequest & msg)
  : msg_(msg)
  {}
  Init_PlaySoundRequest_gain sound_is_set(::bosdyn_msgs::msg::PlaySoundRequest::_sound_is_set_type arg)
  {
    msg_.sound_is_set = std::move(arg);
    return Init_PlaySoundRequest_gain(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaySoundRequest msg_;
};

class Init_PlaySoundRequest_sound
{
public:
  explicit Init_PlaySoundRequest_sound(::bosdyn_msgs::msg::PlaySoundRequest & msg)
  : msg_(msg)
  {}
  Init_PlaySoundRequest_sound_is_set sound(::bosdyn_msgs::msg::PlaySoundRequest::_sound_type arg)
  {
    msg_.sound = std::move(arg);
    return Init_PlaySoundRequest_sound_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaySoundRequest msg_;
};

class Init_PlaySoundRequest_header_is_set
{
public:
  explicit Init_PlaySoundRequest_header_is_set(::bosdyn_msgs::msg::PlaySoundRequest & msg)
  : msg_(msg)
  {}
  Init_PlaySoundRequest_sound header_is_set(::bosdyn_msgs::msg::PlaySoundRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_PlaySoundRequest_sound(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaySoundRequest msg_;
};

class Init_PlaySoundRequest_header
{
public:
  Init_PlaySoundRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaySoundRequest_header_is_set header(::bosdyn_msgs::msg::PlaySoundRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlaySoundRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaySoundRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PlaySoundRequest>()
{
  return bosdyn_msgs::msg::builder::Init_PlaySoundRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAY_SOUND_REQUEST__BUILDER_HPP_
