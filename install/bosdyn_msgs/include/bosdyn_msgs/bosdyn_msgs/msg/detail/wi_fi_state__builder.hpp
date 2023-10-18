// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WiFiState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WI_FI_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WI_FI_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/wi_fi_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WiFiState_essid
{
public:
  explicit Init_WiFiState_essid(::bosdyn_msgs::msg::WiFiState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WiFiState essid(::bosdyn_msgs::msg::WiFiState::_essid_type arg)
  {
    msg_.essid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WiFiState msg_;
};

class Init_WiFiState_current_mode
{
public:
  Init_WiFiState_current_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WiFiState_essid current_mode(::bosdyn_msgs::msg::WiFiState::_current_mode_type arg)
  {
    msg_.current_mode = std::move(arg);
    return Init_WiFiState_essid(msg_);
  }

private:
  ::bosdyn_msgs::msg::WiFiState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WiFiState>()
{
  return bosdyn_msgs::msg::builder::Init_WiFiState_current_mode();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WI_FI_STATE__BUILDER_HPP_
