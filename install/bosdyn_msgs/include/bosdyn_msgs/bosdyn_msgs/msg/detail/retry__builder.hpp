// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Retry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RETRY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/retry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Retry_attempt_counter_state_name
{
public:
  explicit Init_Retry_attempt_counter_state_name(::bosdyn_msgs::msg::Retry & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Retry attempt_counter_state_name(::bosdyn_msgs::msg::Retry::_attempt_counter_state_name_type arg)
  {
    msg_.attempt_counter_state_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Retry msg_;
};

class Init_Retry_child_is_set
{
public:
  explicit Init_Retry_child_is_set(::bosdyn_msgs::msg::Retry & msg)
  : msg_(msg)
  {}
  Init_Retry_attempt_counter_state_name child_is_set(::bosdyn_msgs::msg::Retry::_child_is_set_type arg)
  {
    msg_.child_is_set = std::move(arg);
    return Init_Retry_attempt_counter_state_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::Retry msg_;
};

class Init_Retry_child
{
public:
  explicit Init_Retry_child(::bosdyn_msgs::msg::Retry & msg)
  : msg_(msg)
  {}
  Init_Retry_child_is_set child(::bosdyn_msgs::msg::Retry::_child_type arg)
  {
    msg_.child = std::move(arg);
    return Init_Retry_child_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Retry msg_;
};

class Init_Retry_max_attempts
{
public:
  Init_Retry_max_attempts()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Retry_child max_attempts(::bosdyn_msgs::msg::Retry::_max_attempts_type arg)
  {
    msg_.max_attempts = std::move(arg);
    return Init_Retry_child(msg_);
  }

private:
  ::bosdyn_msgs::msg::Retry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Retry>()
{
  return bosdyn_msgs::msg::builder::Init_Retry_max_attempts();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RETRY__BUILDER_HPP_
