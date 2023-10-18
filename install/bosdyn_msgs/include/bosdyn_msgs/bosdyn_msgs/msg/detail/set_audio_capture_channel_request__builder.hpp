// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetAudioCaptureChannelRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_AUDIO_CAPTURE_CHANNEL_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_AUDIO_CAPTURE_CHANNEL_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_audio_capture_channel_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetAudioCaptureChannelRequest_channel
{
public:
  explicit Init_SetAudioCaptureChannelRequest_channel(::bosdyn_msgs::msg::SetAudioCaptureChannelRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetAudioCaptureChannelRequest channel(::bosdyn_msgs::msg::SetAudioCaptureChannelRequest::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetAudioCaptureChannelRequest msg_;
};

class Init_SetAudioCaptureChannelRequest_header_is_set
{
public:
  explicit Init_SetAudioCaptureChannelRequest_header_is_set(::bosdyn_msgs::msg::SetAudioCaptureChannelRequest & msg)
  : msg_(msg)
  {}
  Init_SetAudioCaptureChannelRequest_channel header_is_set(::bosdyn_msgs::msg::SetAudioCaptureChannelRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetAudioCaptureChannelRequest_channel(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetAudioCaptureChannelRequest msg_;
};

class Init_SetAudioCaptureChannelRequest_header
{
public:
  Init_SetAudioCaptureChannelRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAudioCaptureChannelRequest_header_is_set header(::bosdyn_msgs::msg::SetAudioCaptureChannelRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetAudioCaptureChannelRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetAudioCaptureChannelRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetAudioCaptureChannelRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SetAudioCaptureChannelRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_AUDIO_CAPTURE_CHANNEL_REQUEST__BUILDER_HPP_
