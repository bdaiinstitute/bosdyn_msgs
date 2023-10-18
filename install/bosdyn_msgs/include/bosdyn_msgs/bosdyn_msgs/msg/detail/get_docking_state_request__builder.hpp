// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetDockingStateRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_DOCKING_STATE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_DOCKING_STATE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_docking_state_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetDockingStateRequest_header_is_set
{
public:
  explicit Init_GetDockingStateRequest_header_is_set(::bosdyn_msgs::msg::GetDockingStateRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetDockingStateRequest header_is_set(::bosdyn_msgs::msg::GetDockingStateRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDockingStateRequest msg_;
};

class Init_GetDockingStateRequest_header
{
public:
  Init_GetDockingStateRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDockingStateRequest_header_is_set header(::bosdyn_msgs::msg::GetDockingStateRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetDockingStateRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDockingStateRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetDockingStateRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetDockingStateRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_DOCKING_STATE_REQUEST__BUILDER_HPP_
