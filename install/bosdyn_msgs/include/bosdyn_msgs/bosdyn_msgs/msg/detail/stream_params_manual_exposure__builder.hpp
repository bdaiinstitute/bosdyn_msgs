// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StreamParamsManualExposure.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_MANUAL_EXPOSURE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_MANUAL_EXPOSURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/stream_params_manual_exposure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StreamParamsManualExposure_gain_is_set
{
public:
  explicit Init_StreamParamsManualExposure_gain_is_set(::bosdyn_msgs::msg::StreamParamsManualExposure & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StreamParamsManualExposure gain_is_set(::bosdyn_msgs::msg::StreamParamsManualExposure::_gain_is_set_type arg)
  {
    msg_.gain_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParamsManualExposure msg_;
};

class Init_StreamParamsManualExposure_gain
{
public:
  explicit Init_StreamParamsManualExposure_gain(::bosdyn_msgs::msg::StreamParamsManualExposure & msg)
  : msg_(msg)
  {}
  Init_StreamParamsManualExposure_gain_is_set gain(::bosdyn_msgs::msg::StreamParamsManualExposure::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return Init_StreamParamsManualExposure_gain_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParamsManualExposure msg_;
};

class Init_StreamParamsManualExposure_exposure_is_set
{
public:
  explicit Init_StreamParamsManualExposure_exposure_is_set(::bosdyn_msgs::msg::StreamParamsManualExposure & msg)
  : msg_(msg)
  {}
  Init_StreamParamsManualExposure_gain exposure_is_set(::bosdyn_msgs::msg::StreamParamsManualExposure::_exposure_is_set_type arg)
  {
    msg_.exposure_is_set = std::move(arg);
    return Init_StreamParamsManualExposure_gain(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParamsManualExposure msg_;
};

class Init_StreamParamsManualExposure_exposure
{
public:
  Init_StreamParamsManualExposure_exposure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StreamParamsManualExposure_exposure_is_set exposure(::bosdyn_msgs::msg::StreamParamsManualExposure::_exposure_type arg)
  {
    msg_.exposure = std::move(arg);
    return Init_StreamParamsManualExposure_exposure_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParamsManualExposure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StreamParamsManualExposure>()
{
  return bosdyn_msgs::msg::builder::Init_StreamParamsManualExposure_exposure();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_MANUAL_EXPOSURE__BUILDER_HPP_
