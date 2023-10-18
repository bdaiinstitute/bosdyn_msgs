// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PtzFocusState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PTZ_FOCUS_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PTZ_FOCUS_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ptz_focus_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PtzFocusState_approx_distance_is_set
{
public:
  explicit Init_PtzFocusState_approx_distance_is_set(::bosdyn_msgs::msg::PtzFocusState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PtzFocusState approx_distance_is_set(::bosdyn_msgs::msg::PtzFocusState::_approx_distance_is_set_type arg)
  {
    msg_.approx_distance_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzFocusState msg_;
};

class Init_PtzFocusState_approx_distance
{
public:
  explicit Init_PtzFocusState_approx_distance(::bosdyn_msgs::msg::PtzFocusState & msg)
  : msg_(msg)
  {}
  Init_PtzFocusState_approx_distance_is_set approx_distance(::bosdyn_msgs::msg::PtzFocusState::_approx_distance_type arg)
  {
    msg_.approx_distance = std::move(arg);
    return Init_PtzFocusState_approx_distance_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzFocusState msg_;
};

class Init_PtzFocusState_focus_position_is_set
{
public:
  explicit Init_PtzFocusState_focus_position_is_set(::bosdyn_msgs::msg::PtzFocusState & msg)
  : msg_(msg)
  {}
  Init_PtzFocusState_approx_distance focus_position_is_set(::bosdyn_msgs::msg::PtzFocusState::_focus_position_is_set_type arg)
  {
    msg_.focus_position_is_set = std::move(arg);
    return Init_PtzFocusState_approx_distance(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzFocusState msg_;
};

class Init_PtzFocusState_focus_position
{
public:
  explicit Init_PtzFocusState_focus_position(::bosdyn_msgs::msg::PtzFocusState & msg)
  : msg_(msg)
  {}
  Init_PtzFocusState_focus_position_is_set focus_position(::bosdyn_msgs::msg::PtzFocusState::_focus_position_type arg)
  {
    msg_.focus_position = std::move(arg);
    return Init_PtzFocusState_focus_position_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzFocusState msg_;
};

class Init_PtzFocusState_mode
{
public:
  Init_PtzFocusState_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PtzFocusState_focus_position mode(::bosdyn_msgs::msg::PtzFocusState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_PtzFocusState_focus_position(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzFocusState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PtzFocusState>()
{
  return bosdyn_msgs::msg::builder::Init_PtzFocusState_mode();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PTZ_FOCUS_STATE__BUILDER_HPP_
