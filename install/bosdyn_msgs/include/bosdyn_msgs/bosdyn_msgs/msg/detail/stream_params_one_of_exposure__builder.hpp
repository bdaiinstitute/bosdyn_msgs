// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StreamParamsOneOfExposure.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_ONE_OF_EXPOSURE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_ONE_OF_EXPOSURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/stream_params_one_of_exposure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StreamParamsOneOfExposure_exposure_choice
{
public:
  explicit Init_StreamParamsOneOfExposure_exposure_choice(::bosdyn_msgs::msg::StreamParamsOneOfExposure & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StreamParamsOneOfExposure exposure_choice(::bosdyn_msgs::msg::StreamParamsOneOfExposure::_exposure_choice_type arg)
  {
    msg_.exposure_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParamsOneOfExposure msg_;
};

class Init_StreamParamsOneOfExposure_manual_exposure
{
public:
  explicit Init_StreamParamsOneOfExposure_manual_exposure(::bosdyn_msgs::msg::StreamParamsOneOfExposure & msg)
  : msg_(msg)
  {}
  Init_StreamParamsOneOfExposure_exposure_choice manual_exposure(::bosdyn_msgs::msg::StreamParamsOneOfExposure::_manual_exposure_type arg)
  {
    msg_.manual_exposure = std::move(arg);
    return Init_StreamParamsOneOfExposure_exposure_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParamsOneOfExposure msg_;
};

class Init_StreamParamsOneOfExposure_sync_exposure
{
public:
  explicit Init_StreamParamsOneOfExposure_sync_exposure(::bosdyn_msgs::msg::StreamParamsOneOfExposure & msg)
  : msg_(msg)
  {}
  Init_StreamParamsOneOfExposure_manual_exposure sync_exposure(::bosdyn_msgs::msg::StreamParamsOneOfExposure::_sync_exposure_type arg)
  {
    msg_.sync_exposure = std::move(arg);
    return Init_StreamParamsOneOfExposure_manual_exposure(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParamsOneOfExposure msg_;
};

class Init_StreamParamsOneOfExposure_auto_exposure
{
public:
  Init_StreamParamsOneOfExposure_auto_exposure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StreamParamsOneOfExposure_sync_exposure auto_exposure(::bosdyn_msgs::msg::StreamParamsOneOfExposure::_auto_exposure_type arg)
  {
    msg_.auto_exposure = std::move(arg);
    return Init_StreamParamsOneOfExposure_sync_exposure(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParamsOneOfExposure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StreamParamsOneOfExposure>()
{
  return bosdyn_msgs::msg::builder::Init_StreamParamsOneOfExposure_auto_exposure();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_ONE_OF_EXPOSURE__BUILDER_HPP_
