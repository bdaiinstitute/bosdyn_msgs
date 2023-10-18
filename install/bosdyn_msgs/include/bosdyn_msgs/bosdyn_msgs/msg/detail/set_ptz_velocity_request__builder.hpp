// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetPtzVelocityRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_PTZ_VELOCITY_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_PTZ_VELOCITY_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_ptz_velocity_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetPtzVelocityRequest_velocity_is_set
{
public:
  explicit Init_SetPtzVelocityRequest_velocity_is_set(::bosdyn_msgs::msg::SetPtzVelocityRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetPtzVelocityRequest velocity_is_set(::bosdyn_msgs::msg::SetPtzVelocityRequest::_velocity_is_set_type arg)
  {
    msg_.velocity_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzVelocityRequest msg_;
};

class Init_SetPtzVelocityRequest_velocity
{
public:
  explicit Init_SetPtzVelocityRequest_velocity(::bosdyn_msgs::msg::SetPtzVelocityRequest & msg)
  : msg_(msg)
  {}
  Init_SetPtzVelocityRequest_velocity_is_set velocity(::bosdyn_msgs::msg::SetPtzVelocityRequest::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SetPtzVelocityRequest_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzVelocityRequest msg_;
};

class Init_SetPtzVelocityRequest_header_is_set
{
public:
  explicit Init_SetPtzVelocityRequest_header_is_set(::bosdyn_msgs::msg::SetPtzVelocityRequest & msg)
  : msg_(msg)
  {}
  Init_SetPtzVelocityRequest_velocity header_is_set(::bosdyn_msgs::msg::SetPtzVelocityRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetPtzVelocityRequest_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzVelocityRequest msg_;
};

class Init_SetPtzVelocityRequest_header
{
public:
  Init_SetPtzVelocityRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPtzVelocityRequest_header_is_set header(::bosdyn_msgs::msg::SetPtzVelocityRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetPtzVelocityRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzVelocityRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetPtzVelocityRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SetPtzVelocityRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_PTZ_VELOCITY_REQUEST__BUILDER_HPP_
