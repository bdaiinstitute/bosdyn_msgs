// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetAudioCaptureGainRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_AUDIO_CAPTURE_GAIN_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_AUDIO_CAPTURE_GAIN_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_audio_capture_gain_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetAudioCaptureGainRequest_channel
{
public:
  explicit Init_GetAudioCaptureGainRequest_channel(::bosdyn_msgs::msg::GetAudioCaptureGainRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetAudioCaptureGainRequest channel(::bosdyn_msgs::msg::GetAudioCaptureGainRequest::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetAudioCaptureGainRequest msg_;
};

class Init_GetAudioCaptureGainRequest_header_is_set
{
public:
  explicit Init_GetAudioCaptureGainRequest_header_is_set(::bosdyn_msgs::msg::GetAudioCaptureGainRequest & msg)
  : msg_(msg)
  {}
  Init_GetAudioCaptureGainRequest_channel header_is_set(::bosdyn_msgs::msg::GetAudioCaptureGainRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetAudioCaptureGainRequest_channel(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetAudioCaptureGainRequest msg_;
};

class Init_GetAudioCaptureGainRequest_header
{
public:
  Init_GetAudioCaptureGainRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAudioCaptureGainRequest_header_is_set header(::bosdyn_msgs::msg::GetAudioCaptureGainRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetAudioCaptureGainRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetAudioCaptureGainRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetAudioCaptureGainRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetAudioCaptureGainRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_AUDIO_CAPTURE_GAIN_REQUEST__BUILDER_HPP_
