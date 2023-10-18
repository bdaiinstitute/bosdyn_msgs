// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetAudioCaptureGainResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_AUDIO_CAPTURE_GAIN_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_AUDIO_CAPTURE_GAIN_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_audio_capture_gain_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetAudioCaptureGainResponse_gain
{
public:
  explicit Init_GetAudioCaptureGainResponse_gain(::bosdyn_msgs::msg::GetAudioCaptureGainResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetAudioCaptureGainResponse gain(::bosdyn_msgs::msg::GetAudioCaptureGainResponse::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetAudioCaptureGainResponse msg_;
};

class Init_GetAudioCaptureGainResponse_header_is_set
{
public:
  explicit Init_GetAudioCaptureGainResponse_header_is_set(::bosdyn_msgs::msg::GetAudioCaptureGainResponse & msg)
  : msg_(msg)
  {}
  Init_GetAudioCaptureGainResponse_gain header_is_set(::bosdyn_msgs::msg::GetAudioCaptureGainResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetAudioCaptureGainResponse_gain(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetAudioCaptureGainResponse msg_;
};

class Init_GetAudioCaptureGainResponse_header
{
public:
  Init_GetAudioCaptureGainResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAudioCaptureGainResponse_header_is_set header(::bosdyn_msgs::msg::GetAudioCaptureGainResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetAudioCaptureGainResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetAudioCaptureGainResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetAudioCaptureGainResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetAudioCaptureGainResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_AUDIO_CAPTURE_GAIN_RESPONSE__BUILDER_HPP_
