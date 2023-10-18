// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetPtzPositionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_PTZ_POSITION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_PTZ_POSITION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_ptz_position_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetPtzPositionResponse_position_is_set
{
public:
  explicit Init_SetPtzPositionResponse_position_is_set(::bosdyn_msgs::msg::SetPtzPositionResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetPtzPositionResponse position_is_set(::bosdyn_msgs::msg::SetPtzPositionResponse::_position_is_set_type arg)
  {
    msg_.position_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzPositionResponse msg_;
};

class Init_SetPtzPositionResponse_position
{
public:
  explicit Init_SetPtzPositionResponse_position(::bosdyn_msgs::msg::SetPtzPositionResponse & msg)
  : msg_(msg)
  {}
  Init_SetPtzPositionResponse_position_is_set position(::bosdyn_msgs::msg::SetPtzPositionResponse::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SetPtzPositionResponse_position_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzPositionResponse msg_;
};

class Init_SetPtzPositionResponse_header_is_set
{
public:
  explicit Init_SetPtzPositionResponse_header_is_set(::bosdyn_msgs::msg::SetPtzPositionResponse & msg)
  : msg_(msg)
  {}
  Init_SetPtzPositionResponse_position header_is_set(::bosdyn_msgs::msg::SetPtzPositionResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetPtzPositionResponse_position(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzPositionResponse msg_;
};

class Init_SetPtzPositionResponse_header
{
public:
  Init_SetPtzPositionResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPtzPositionResponse_header_is_set header(::bosdyn_msgs::msg::SetPtzPositionResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetPtzPositionResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzPositionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetPtzPositionResponse>()
{
  return bosdyn_msgs::msg::builder::Init_SetPtzPositionResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_PTZ_POSITION_RESPONSE__BUILDER_HPP_
