// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StreamParamsAwbMode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_AWB_MODE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_AWB_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/stream_params_awb_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StreamParamsAwbMode_awb
{
public:
  Init_StreamParamsAwbMode_awb()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::StreamParamsAwbMode awb(::bosdyn_msgs::msg::StreamParamsAwbMode::_awb_type arg)
  {
    msg_.awb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParamsAwbMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StreamParamsAwbMode>()
{
  return bosdyn_msgs::msg::builder::Init_StreamParamsAwbMode_awb();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_AWB_MODE__BUILDER_HPP_
