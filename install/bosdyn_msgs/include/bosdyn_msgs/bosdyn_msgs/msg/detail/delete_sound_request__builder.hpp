// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DeleteSoundRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DELETE_SOUND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DELETE_SOUND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/delete_sound_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DeleteSoundRequest_sound_is_set
{
public:
  explicit Init_DeleteSoundRequest_sound_is_set(::bosdyn_msgs::msg::DeleteSoundRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DeleteSoundRequest sound_is_set(::bosdyn_msgs::msg::DeleteSoundRequest::_sound_is_set_type arg)
  {
    msg_.sound_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteSoundRequest msg_;
};

class Init_DeleteSoundRequest_sound
{
public:
  explicit Init_DeleteSoundRequest_sound(::bosdyn_msgs::msg::DeleteSoundRequest & msg)
  : msg_(msg)
  {}
  Init_DeleteSoundRequest_sound_is_set sound(::bosdyn_msgs::msg::DeleteSoundRequest::_sound_type arg)
  {
    msg_.sound = std::move(arg);
    return Init_DeleteSoundRequest_sound_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteSoundRequest msg_;
};

class Init_DeleteSoundRequest_header_is_set
{
public:
  explicit Init_DeleteSoundRequest_header_is_set(::bosdyn_msgs::msg::DeleteSoundRequest & msg)
  : msg_(msg)
  {}
  Init_DeleteSoundRequest_sound header_is_set(::bosdyn_msgs::msg::DeleteSoundRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DeleteSoundRequest_sound(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteSoundRequest msg_;
};

class Init_DeleteSoundRequest_header
{
public:
  Init_DeleteSoundRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeleteSoundRequest_header_is_set header(::bosdyn_msgs::msg::DeleteSoundRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DeleteSoundRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteSoundRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DeleteSoundRequest>()
{
  return bosdyn_msgs::msg::builder::Init_DeleteSoundRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DELETE_SOUND_REQUEST__BUILDER_HPP_
