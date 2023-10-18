// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetStateRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_state_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetStateRequest_lower_bound
{
public:
  explicit Init_GetStateRequest_lower_bound(::bosdyn_msgs::msg::GetStateRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetStateRequest lower_bound(::bosdyn_msgs::msg::GetStateRequest::_lower_bound_type arg)
  {
    msg_.lower_bound = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStateRequest msg_;
};

class Init_GetStateRequest_history_upper_tick_bound_is_set
{
public:
  explicit Init_GetStateRequest_history_upper_tick_bound_is_set(::bosdyn_msgs::msg::GetStateRequest & msg)
  : msg_(msg)
  {}
  Init_GetStateRequest_lower_bound history_upper_tick_bound_is_set(::bosdyn_msgs::msg::GetStateRequest::_history_upper_tick_bound_is_set_type arg)
  {
    msg_.history_upper_tick_bound_is_set = std::move(arg);
    return Init_GetStateRequest_lower_bound(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStateRequest msg_;
};

class Init_GetStateRequest_history_upper_tick_bound
{
public:
  explicit Init_GetStateRequest_history_upper_tick_bound(::bosdyn_msgs::msg::GetStateRequest & msg)
  : msg_(msg)
  {}
  Init_GetStateRequest_history_upper_tick_bound_is_set history_upper_tick_bound(::bosdyn_msgs::msg::GetStateRequest::_history_upper_tick_bound_type arg)
  {
    msg_.history_upper_tick_bound = std::move(arg);
    return Init_GetStateRequest_history_upper_tick_bound_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStateRequest msg_;
};

class Init_GetStateRequest_header_is_set
{
public:
  explicit Init_GetStateRequest_header_is_set(::bosdyn_msgs::msg::GetStateRequest & msg)
  : msg_(msg)
  {}
  Init_GetStateRequest_history_upper_tick_bound header_is_set(::bosdyn_msgs::msg::GetStateRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetStateRequest_history_upper_tick_bound(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStateRequest msg_;
};

class Init_GetStateRequest_header
{
public:
  Init_GetStateRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetStateRequest_header_is_set header(::bosdyn_msgs::msg::GetStateRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetStateRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStateRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetStateRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetStateRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST__BUILDER_HPP_
