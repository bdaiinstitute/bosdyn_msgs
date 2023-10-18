// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StreamParamsSyncAutoExposure.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_SYNC_AUTO_EXPOSURE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_SYNC_AUTO_EXPOSURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/stream_params_sync_auto_exposure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StreamParamsSyncAutoExposure_brightness_target_is_set
{
public:
  explicit Init_StreamParamsSyncAutoExposure_brightness_target_is_set(::bosdyn_msgs::msg::StreamParamsSyncAutoExposure & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StreamParamsSyncAutoExposure brightness_target_is_set(::bosdyn_msgs::msg::StreamParamsSyncAutoExposure::_brightness_target_is_set_type arg)
  {
    msg_.brightness_target_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParamsSyncAutoExposure msg_;
};

class Init_StreamParamsSyncAutoExposure_brightness_target
{
public:
  Init_StreamParamsSyncAutoExposure_brightness_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StreamParamsSyncAutoExposure_brightness_target_is_set brightness_target(::bosdyn_msgs::msg::StreamParamsSyncAutoExposure::_brightness_target_type arg)
  {
    msg_.brightness_target = std::move(arg);
    return Init_StreamParamsSyncAutoExposure_brightness_target_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParamsSyncAutoExposure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StreamParamsSyncAutoExposure>()
{
  return bosdyn_msgs::msg::builder::Init_StreamParamsSyncAutoExposure_brightness_target();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_SYNC_AUTO_EXPOSURE__BUILDER_HPP_
