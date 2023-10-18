// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EStopState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__E_STOP_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__E_STOP_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/e_stop_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EStopState_state_description
{
public:
  explicit Init_EStopState_state_description(::bosdyn_msgs::msg::EStopState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EStopState state_description(::bosdyn_msgs::msg::EStopState::_state_description_type arg)
  {
    msg_.state_description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EStopState msg_;
};

class Init_EStopState_state
{
public:
  explicit Init_EStopState_state(::bosdyn_msgs::msg::EStopState & msg)
  : msg_(msg)
  {}
  Init_EStopState_state_description state(::bosdyn_msgs::msg::EStopState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_EStopState_state_description(msg_);
  }

private:
  ::bosdyn_msgs::msg::EStopState msg_;
};

class Init_EStopState_type
{
public:
  explicit Init_EStopState_type(::bosdyn_msgs::msg::EStopState & msg)
  : msg_(msg)
  {}
  Init_EStopState_state type(::bosdyn_msgs::msg::EStopState::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_EStopState_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::EStopState msg_;
};

class Init_EStopState_name
{
public:
  explicit Init_EStopState_name(::bosdyn_msgs::msg::EStopState & msg)
  : msg_(msg)
  {}
  Init_EStopState_type name(::bosdyn_msgs::msg::EStopState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_EStopState_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::EStopState msg_;
};

class Init_EStopState_timestamp_is_set
{
public:
  explicit Init_EStopState_timestamp_is_set(::bosdyn_msgs::msg::EStopState & msg)
  : msg_(msg)
  {}
  Init_EStopState_name timestamp_is_set(::bosdyn_msgs::msg::EStopState::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_EStopState_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::EStopState msg_;
};

class Init_EStopState_timestamp
{
public:
  Init_EStopState_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EStopState_timestamp_is_set timestamp(::bosdyn_msgs::msg::EStopState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EStopState_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EStopState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EStopState>()
{
  return bosdyn_msgs::msg::builder::Init_EStopState_timestamp();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__E_STOP_STATE__BUILDER_HPP_
