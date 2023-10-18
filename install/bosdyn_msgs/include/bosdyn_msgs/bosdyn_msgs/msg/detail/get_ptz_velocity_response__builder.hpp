// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetPtzVelocityResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_VELOCITY_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_VELOCITY_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_ptz_velocity_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetPtzVelocityResponse_velocity_is_set
{
public:
  explicit Init_GetPtzVelocityResponse_velocity_is_set(::bosdyn_msgs::msg::GetPtzVelocityResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetPtzVelocityResponse velocity_is_set(::bosdyn_msgs::msg::GetPtzVelocityResponse::_velocity_is_set_type arg)
  {
    msg_.velocity_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzVelocityResponse msg_;
};

class Init_GetPtzVelocityResponse_velocity
{
public:
  explicit Init_GetPtzVelocityResponse_velocity(::bosdyn_msgs::msg::GetPtzVelocityResponse & msg)
  : msg_(msg)
  {}
  Init_GetPtzVelocityResponse_velocity_is_set velocity(::bosdyn_msgs::msg::GetPtzVelocityResponse::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_GetPtzVelocityResponse_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzVelocityResponse msg_;
};

class Init_GetPtzVelocityResponse_header_is_set
{
public:
  explicit Init_GetPtzVelocityResponse_header_is_set(::bosdyn_msgs::msg::GetPtzVelocityResponse & msg)
  : msg_(msg)
  {}
  Init_GetPtzVelocityResponse_velocity header_is_set(::bosdyn_msgs::msg::GetPtzVelocityResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetPtzVelocityResponse_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzVelocityResponse msg_;
};

class Init_GetPtzVelocityResponse_header
{
public:
  Init_GetPtzVelocityResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPtzVelocityResponse_header_is_set header(::bosdyn_msgs::msg::GetPtzVelocityResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetPtzVelocityResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzVelocityResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetPtzVelocityResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetPtzVelocityResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_VELOCITY_RESPONSE__BUILDER_HPP_
