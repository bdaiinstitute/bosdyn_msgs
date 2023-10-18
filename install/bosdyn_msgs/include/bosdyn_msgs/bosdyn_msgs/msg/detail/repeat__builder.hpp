// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Repeat.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REPEAT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REPEAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/repeat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Repeat_respect_child_failure
{
public:
  explicit Init_Repeat_respect_child_failure(::bosdyn_msgs::msg::Repeat & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Repeat respect_child_failure(::bosdyn_msgs::msg::Repeat::_respect_child_failure_type arg)
  {
    msg_.respect_child_failure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Repeat msg_;
};

class Init_Repeat_start_counter_state_name
{
public:
  explicit Init_Repeat_start_counter_state_name(::bosdyn_msgs::msg::Repeat & msg)
  : msg_(msg)
  {}
  Init_Repeat_respect_child_failure start_counter_state_name(::bosdyn_msgs::msg::Repeat::_start_counter_state_name_type arg)
  {
    msg_.start_counter_state_name = std::move(arg);
    return Init_Repeat_respect_child_failure(msg_);
  }

private:
  ::bosdyn_msgs::msg::Repeat msg_;
};

class Init_Repeat_child_is_set
{
public:
  explicit Init_Repeat_child_is_set(::bosdyn_msgs::msg::Repeat & msg)
  : msg_(msg)
  {}
  Init_Repeat_start_counter_state_name child_is_set(::bosdyn_msgs::msg::Repeat::_child_is_set_type arg)
  {
    msg_.child_is_set = std::move(arg);
    return Init_Repeat_start_counter_state_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::Repeat msg_;
};

class Init_Repeat_child
{
public:
  explicit Init_Repeat_child(::bosdyn_msgs::msg::Repeat & msg)
  : msg_(msg)
  {}
  Init_Repeat_child_is_set child(::bosdyn_msgs::msg::Repeat::_child_type arg)
  {
    msg_.child = std::move(arg);
    return Init_Repeat_child_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Repeat msg_;
};

class Init_Repeat_max_starts
{
public:
  Init_Repeat_max_starts()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Repeat_child max_starts(::bosdyn_msgs::msg::Repeat::_max_starts_type arg)
  {
    msg_.max_starts = std::move(arg);
    return Init_Repeat_child(msg_);
  }

private:
  ::bosdyn_msgs::msg::Repeat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Repeat>()
{
  return bosdyn_msgs::msg::builder::Init_Repeat_max_starts();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REPEAT__BUILDER_HPP_
