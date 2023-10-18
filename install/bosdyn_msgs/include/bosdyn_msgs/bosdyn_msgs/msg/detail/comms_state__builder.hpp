// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CommsState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/comms_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CommsState_state
{
public:
  explicit Init_CommsState_state(::bosdyn_msgs::msg::CommsState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CommsState state(::bosdyn_msgs::msg::CommsState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CommsState msg_;
};

class Init_CommsState_timestamp_is_set
{
public:
  explicit Init_CommsState_timestamp_is_set(::bosdyn_msgs::msg::CommsState & msg)
  : msg_(msg)
  {}
  Init_CommsState_state timestamp_is_set(::bosdyn_msgs::msg::CommsState::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_CommsState_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::CommsState msg_;
};

class Init_CommsState_timestamp
{
public:
  Init_CommsState_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommsState_timestamp_is_set timestamp(::bosdyn_msgs::msg::CommsState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CommsState_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CommsState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CommsState>()
{
  return bosdyn_msgs::msg::builder::Init_CommsState_timestamp();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE__BUILDER_HPP_
