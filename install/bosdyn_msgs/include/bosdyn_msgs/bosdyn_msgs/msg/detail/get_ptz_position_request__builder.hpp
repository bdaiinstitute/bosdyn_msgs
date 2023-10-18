// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetPtzPositionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_POSITION_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_POSITION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_ptz_position_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetPtzPositionRequest_ptz_is_set
{
public:
  explicit Init_GetPtzPositionRequest_ptz_is_set(::bosdyn_msgs::msg::GetPtzPositionRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetPtzPositionRequest ptz_is_set(::bosdyn_msgs::msg::GetPtzPositionRequest::_ptz_is_set_type arg)
  {
    msg_.ptz_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzPositionRequest msg_;
};

class Init_GetPtzPositionRequest_ptz
{
public:
  explicit Init_GetPtzPositionRequest_ptz(::bosdyn_msgs::msg::GetPtzPositionRequest & msg)
  : msg_(msg)
  {}
  Init_GetPtzPositionRequest_ptz_is_set ptz(::bosdyn_msgs::msg::GetPtzPositionRequest::_ptz_type arg)
  {
    msg_.ptz = std::move(arg);
    return Init_GetPtzPositionRequest_ptz_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzPositionRequest msg_;
};

class Init_GetPtzPositionRequest_header_is_set
{
public:
  explicit Init_GetPtzPositionRequest_header_is_set(::bosdyn_msgs::msg::GetPtzPositionRequest & msg)
  : msg_(msg)
  {}
  Init_GetPtzPositionRequest_ptz header_is_set(::bosdyn_msgs::msg::GetPtzPositionRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetPtzPositionRequest_ptz(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzPositionRequest msg_;
};

class Init_GetPtzPositionRequest_header
{
public:
  Init_GetPtzPositionRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPtzPositionRequest_header_is_set header(::bosdyn_msgs::msg::GetPtzPositionRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetPtzPositionRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPtzPositionRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetPtzPositionRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetPtzPositionRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_POSITION_REQUEST__BUILDER_HPP_
