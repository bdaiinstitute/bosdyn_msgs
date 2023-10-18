// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LoadSoundRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_SOUND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_SOUND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/load_sound_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LoadSoundRequest_data_is_set
{
public:
  explicit Init_LoadSoundRequest_data_is_set(::bosdyn_msgs::msg::LoadSoundRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LoadSoundRequest data_is_set(::bosdyn_msgs::msg::LoadSoundRequest::_data_is_set_type arg)
  {
    msg_.data_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadSoundRequest msg_;
};

class Init_LoadSoundRequest_data
{
public:
  explicit Init_LoadSoundRequest_data(::bosdyn_msgs::msg::LoadSoundRequest & msg)
  : msg_(msg)
  {}
  Init_LoadSoundRequest_data_is_set data(::bosdyn_msgs::msg::LoadSoundRequest::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_LoadSoundRequest_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadSoundRequest msg_;
};

class Init_LoadSoundRequest_sound_is_set
{
public:
  explicit Init_LoadSoundRequest_sound_is_set(::bosdyn_msgs::msg::LoadSoundRequest & msg)
  : msg_(msg)
  {}
  Init_LoadSoundRequest_data sound_is_set(::bosdyn_msgs::msg::LoadSoundRequest::_sound_is_set_type arg)
  {
    msg_.sound_is_set = std::move(arg);
    return Init_LoadSoundRequest_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadSoundRequest msg_;
};

class Init_LoadSoundRequest_sound
{
public:
  explicit Init_LoadSoundRequest_sound(::bosdyn_msgs::msg::LoadSoundRequest & msg)
  : msg_(msg)
  {}
  Init_LoadSoundRequest_sound_is_set sound(::bosdyn_msgs::msg::LoadSoundRequest::_sound_type arg)
  {
    msg_.sound = std::move(arg);
    return Init_LoadSoundRequest_sound_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadSoundRequest msg_;
};

class Init_LoadSoundRequest_header_is_set
{
public:
  explicit Init_LoadSoundRequest_header_is_set(::bosdyn_msgs::msg::LoadSoundRequest & msg)
  : msg_(msg)
  {}
  Init_LoadSoundRequest_sound header_is_set(::bosdyn_msgs::msg::LoadSoundRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_LoadSoundRequest_sound(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadSoundRequest msg_;
};

class Init_LoadSoundRequest_header
{
public:
  Init_LoadSoundRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadSoundRequest_header_is_set header(::bosdyn_msgs::msg::LoadSoundRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LoadSoundRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadSoundRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LoadSoundRequest>()
{
  return bosdyn_msgs::msg::builder::Init_LoadSoundRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_SOUND_REQUEST__BUILDER_HPP_
