// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LogpointImageParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOGPOINT_IMAGE_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOGPOINT_IMAGE_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/logpoint_image_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LogpointImageParams_format
{
public:
  explicit Init_LogpointImageParams_format(::bosdyn_msgs::msg::LogpointImageParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LogpointImageParams format(::bosdyn_msgs::msg::LogpointImageParams::_format_type arg)
  {
    msg_.format = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogpointImageParams msg_;
};

class Init_LogpointImageParams_height
{
public:
  explicit Init_LogpointImageParams_height(::bosdyn_msgs::msg::LogpointImageParams & msg)
  : msg_(msg)
  {}
  Init_LogpointImageParams_format height(::bosdyn_msgs::msg::LogpointImageParams::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_LogpointImageParams_format(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogpointImageParams msg_;
};

class Init_LogpointImageParams_width
{
public:
  Init_LogpointImageParams_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogpointImageParams_height width(::bosdyn_msgs::msg::LogpointImageParams::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_LogpointImageParams_height(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogpointImageParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LogpointImageParams>()
{
  return bosdyn_msgs::msg::builder::Init_LogpointImageParams_width();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOGPOINT_IMAGE_PARAMS__BUILDER_HPP_
