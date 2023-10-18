// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CaptureParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAPTURE_PARAMETERS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAPTURE_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/capture_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CaptureParameters_custom_params_is_set
{
public:
  explicit Init_CaptureParameters_custom_params_is_set(::bosdyn_msgs::msg::CaptureParameters & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CaptureParameters custom_params_is_set(::bosdyn_msgs::msg::CaptureParameters::_custom_params_is_set_type arg)
  {
    msg_.custom_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CaptureParameters msg_;
};

class Init_CaptureParameters_custom_params
{
public:
  explicit Init_CaptureParameters_custom_params(::bosdyn_msgs::msg::CaptureParameters & msg)
  : msg_(msg)
  {}
  Init_CaptureParameters_custom_params_is_set custom_params(::bosdyn_msgs::msg::CaptureParameters::_custom_params_type arg)
  {
    msg_.custom_params = std::move(arg);
    return Init_CaptureParameters_custom_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CaptureParameters msg_;
};

class Init_CaptureParameters_gain
{
public:
  explicit Init_CaptureParameters_gain(::bosdyn_msgs::msg::CaptureParameters & msg)
  : msg_(msg)
  {}
  Init_CaptureParameters_custom_params gain(::bosdyn_msgs::msg::CaptureParameters::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return Init_CaptureParameters_custom_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::CaptureParameters msg_;
};

class Init_CaptureParameters_exposure_duration_is_set
{
public:
  explicit Init_CaptureParameters_exposure_duration_is_set(::bosdyn_msgs::msg::CaptureParameters & msg)
  : msg_(msg)
  {}
  Init_CaptureParameters_gain exposure_duration_is_set(::bosdyn_msgs::msg::CaptureParameters::_exposure_duration_is_set_type arg)
  {
    msg_.exposure_duration_is_set = std::move(arg);
    return Init_CaptureParameters_gain(msg_);
  }

private:
  ::bosdyn_msgs::msg::CaptureParameters msg_;
};

class Init_CaptureParameters_exposure_duration
{
public:
  Init_CaptureParameters_exposure_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureParameters_exposure_duration_is_set exposure_duration(::bosdyn_msgs::msg::CaptureParameters::_exposure_duration_type arg)
  {
    msg_.exposure_duration = std::move(arg);
    return Init_CaptureParameters_exposure_duration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CaptureParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CaptureParameters>()
{
  return bosdyn_msgs::msg::builder::Init_CaptureParameters_exposure_duration();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAPTURE_PARAMETERS__BUILDER_HPP_
