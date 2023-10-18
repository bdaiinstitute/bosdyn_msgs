// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DockState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/dock_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DockState_power_status
{
public:
  explicit Init_DockState_power_status(::bosdyn_msgs::msg::DockState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DockState power_status(::bosdyn_msgs::msg::DockState::_power_status_type arg)
  {
    msg_.power_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockState msg_;
};

class Init_DockState_dock_id
{
public:
  explicit Init_DockState_dock_id(::bosdyn_msgs::msg::DockState & msg)
  : msg_(msg)
  {}
  Init_DockState_power_status dock_id(::bosdyn_msgs::msg::DockState::_dock_id_type arg)
  {
    msg_.dock_id = std::move(arg);
    return Init_DockState_power_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockState msg_;
};

class Init_DockState_dock_type
{
public:
  explicit Init_DockState_dock_type(::bosdyn_msgs::msg::DockState & msg)
  : msg_(msg)
  {}
  Init_DockState_dock_id dock_type(::bosdyn_msgs::msg::DockState::_dock_type_type arg)
  {
    msg_.dock_type = std::move(arg);
    return Init_DockState_dock_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockState msg_;
};

class Init_DockState_status
{
public:
  Init_DockState_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockState_dock_type status(::bosdyn_msgs::msg::DockState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DockState_dock_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DockState>()
{
  return bosdyn_msgs::msg::builder::Init_DockState_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE__BUILDER_HPP_
