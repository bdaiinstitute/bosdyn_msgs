// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetPtzVelocityRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_VELOCITY_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_VELOCITY_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_ptz_velocity_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetPtzVelocityRequest_ptz_is_set
{
public:
  explicit Init_GetPtzVelocityRequest_ptz_is_set(::bosdyn_msgs::msg::GetPtzVelocityRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetPtzVelocityRequest ptz_is_set(::bosdyn_msgs::msg::GetPtzVelocityRequest::_ptz_is_set_type arg)
  {
    msg_.ptz_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzVelocityRequest msg_;
};

class Init_GetPtzVelocityRequest_ptz
{
public:
  explicit Init_GetPtzVelocityRequest_ptz(::bosdyn_msgs::msg::GetPtzVelocityRequest & msg)
  : msg_(msg)
  {}
  Init_GetPtzVelocityRequest_ptz_is_set ptz(::bosdyn_msgs::msg::GetPtzVelocityRequest::_ptz_type arg)
  {
    msg_.ptz = std::move(arg);
    return Init_GetPtzVelocityRequest_ptz_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzVelocityRequest msg_;
};

class Init_GetPtzVelocityRequest_header_is_set
{
public:
  explicit Init_GetPtzVelocityRequest_header_is_set(::bosdyn_msgs::msg::GetPtzVelocityRequest & msg)
  : msg_(msg)
  {}
  Init_GetPtzVelocityRequest_ptz header_is_set(::bosdyn_msgs::msg::GetPtzVelocityRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetPtzVelocityRequest_ptz(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzVelocityRequest msg_;
};

class Init_GetPtzVelocityRequest_header
{
public:
  Init_GetPtzVelocityRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPtzVelocityRequest_header_is_set header(::bosdyn_msgs::msg::GetPtzVelocityRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetPtzVelocityRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzVelocityRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetPtzVelocityRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetPtzVelocityRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_VELOCITY_REQUEST__BUILDER_HPP_
