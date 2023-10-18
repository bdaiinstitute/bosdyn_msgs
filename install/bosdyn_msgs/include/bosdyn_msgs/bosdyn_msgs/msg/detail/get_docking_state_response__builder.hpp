// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetDockingStateResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_DOCKING_STATE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_DOCKING_STATE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_docking_state_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetDockingStateResponse_dock_state_is_set
{
public:
  explicit Init_GetDockingStateResponse_dock_state_is_set(::bosdyn_msgs::msg::GetDockingStateResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetDockingStateResponse dock_state_is_set(::bosdyn_msgs::msg::GetDockingStateResponse::_dock_state_is_set_type arg)
  {
    msg_.dock_state_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDockingStateResponse msg_;
};

class Init_GetDockingStateResponse_dock_state
{
public:
  explicit Init_GetDockingStateResponse_dock_state(::bosdyn_msgs::msg::GetDockingStateResponse & msg)
  : msg_(msg)
  {}
  Init_GetDockingStateResponse_dock_state_is_set dock_state(::bosdyn_msgs::msg::GetDockingStateResponse::_dock_state_type arg)
  {
    msg_.dock_state = std::move(arg);
    return Init_GetDockingStateResponse_dock_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDockingStateResponse msg_;
};

class Init_GetDockingStateResponse_header_is_set
{
public:
  explicit Init_GetDockingStateResponse_header_is_set(::bosdyn_msgs::msg::GetDockingStateResponse & msg)
  : msg_(msg)
  {}
  Init_GetDockingStateResponse_dock_state header_is_set(::bosdyn_msgs::msg::GetDockingStateResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetDockingStateResponse_dock_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDockingStateResponse msg_;
};

class Init_GetDockingStateResponse_header
{
public:
  Init_GetDockingStateResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDockingStateResponse_header_is_set header(::bosdyn_msgs::msg::GetDockingStateResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetDockingStateResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDockingStateResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetDockingStateResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetDockingStateResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_DOCKING_STATE_RESPONSE__BUILDER_HPP_
