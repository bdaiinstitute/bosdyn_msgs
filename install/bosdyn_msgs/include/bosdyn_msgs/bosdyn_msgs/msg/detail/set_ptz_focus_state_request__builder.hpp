// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetPtzFocusStateRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_PTZ_FOCUS_STATE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_PTZ_FOCUS_STATE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_ptz_focus_state_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetPtzFocusStateRequest_focus_state_is_set
{
public:
  explicit Init_SetPtzFocusStateRequest_focus_state_is_set(::bosdyn_msgs::msg::SetPtzFocusStateRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetPtzFocusStateRequest focus_state_is_set(::bosdyn_msgs::msg::SetPtzFocusStateRequest::_focus_state_is_set_type arg)
  {
    msg_.focus_state_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzFocusStateRequest msg_;
};

class Init_SetPtzFocusStateRequest_focus_state
{
public:
  explicit Init_SetPtzFocusStateRequest_focus_state(::bosdyn_msgs::msg::SetPtzFocusStateRequest & msg)
  : msg_(msg)
  {}
  Init_SetPtzFocusStateRequest_focus_state_is_set focus_state(::bosdyn_msgs::msg::SetPtzFocusStateRequest::_focus_state_type arg)
  {
    msg_.focus_state = std::move(arg);
    return Init_SetPtzFocusStateRequest_focus_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzFocusStateRequest msg_;
};

class Init_SetPtzFocusStateRequest_header_is_set
{
public:
  explicit Init_SetPtzFocusStateRequest_header_is_set(::bosdyn_msgs::msg::SetPtzFocusStateRequest & msg)
  : msg_(msg)
  {}
  Init_SetPtzFocusStateRequest_focus_state header_is_set(::bosdyn_msgs::msg::SetPtzFocusStateRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetPtzFocusStateRequest_focus_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzFocusStateRequest msg_;
};

class Init_SetPtzFocusStateRequest_header
{
public:
  Init_SetPtzFocusStateRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPtzFocusStateRequest_header_is_set header(::bosdyn_msgs::msg::SetPtzFocusStateRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetPtzFocusStateRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzFocusStateRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetPtzFocusStateRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SetPtzFocusStateRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_PTZ_FOCUS_STATE_REQUEST__BUILDER_HPP_
