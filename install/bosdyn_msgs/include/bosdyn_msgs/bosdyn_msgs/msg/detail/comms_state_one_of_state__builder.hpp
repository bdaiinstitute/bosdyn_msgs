// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CommsStateOneOfState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE_ONE_OF_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE_ONE_OF_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/comms_state_one_of_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CommsStateOneOfState_state_choice
{
public:
  explicit Init_CommsStateOneOfState_state_choice(::bosdyn_msgs::msg::CommsStateOneOfState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CommsStateOneOfState state_choice(::bosdyn_msgs::msg::CommsStateOneOfState::_state_choice_type arg)
  {
    msg_.state_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CommsStateOneOfState msg_;
};

class Init_CommsStateOneOfState_wifi_state
{
public:
  Init_CommsStateOneOfState_wifi_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommsStateOneOfState_state_choice wifi_state(::bosdyn_msgs::msg::CommsStateOneOfState::_wifi_state_type arg)
  {
    msg_.wifi_state = std::move(arg);
    return Init_CommsStateOneOfState_state_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::CommsStateOneOfState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CommsStateOneOfState>()
{
  return bosdyn_msgs::msg::builder::Init_CommsStateOneOfState_wifi_state();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE_ONE_OF_STATE__BUILDER_HPP_
