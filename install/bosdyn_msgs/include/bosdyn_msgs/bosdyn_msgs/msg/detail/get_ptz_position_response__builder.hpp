// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetPtzPositionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_POSITION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_POSITION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_ptz_position_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetPtzPositionResponse_position_is_set
{
public:
  explicit Init_GetPtzPositionResponse_position_is_set(::bosdyn_msgs::msg::GetPtzPositionResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetPtzPositionResponse position_is_set(::bosdyn_msgs::msg::GetPtzPositionResponse::_position_is_set_type arg)
  {
    msg_.position_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzPositionResponse msg_;
};

class Init_GetPtzPositionResponse_position
{
public:
  explicit Init_GetPtzPositionResponse_position(::bosdyn_msgs::msg::GetPtzPositionResponse & msg)
  : msg_(msg)
  {}
  Init_GetPtzPositionResponse_position_is_set position(::bosdyn_msgs::msg::GetPtzPositionResponse::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GetPtzPositionResponse_position_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzPositionResponse msg_;
};

class Init_GetPtzPositionResponse_header_is_set
{
public:
  explicit Init_GetPtzPositionResponse_header_is_set(::bosdyn_msgs::msg::GetPtzPositionResponse & msg)
  : msg_(msg)
  {}
  Init_GetPtzPositionResponse_position header_is_set(::bosdyn_msgs::msg::GetPtzPositionResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetPtzPositionResponse_position(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzPositionResponse msg_;
};

class Init_GetPtzPositionResponse_header
{
public:
  Init_GetPtzPositionResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPtzPositionResponse_header_is_set header(::bosdyn_msgs::msg::GetPtzPositionResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetPtzPositionResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzPositionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetPtzPositionResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetPtzPositionResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_POSITION_RESPONSE__BUILDER_HPP_
