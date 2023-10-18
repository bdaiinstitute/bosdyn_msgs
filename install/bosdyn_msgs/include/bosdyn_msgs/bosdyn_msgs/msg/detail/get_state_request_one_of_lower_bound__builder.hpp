// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetStateRequestOneOfLowerBound.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST_ONE_OF_LOWER_BOUND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST_ONE_OF_LOWER_BOUND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_state_request_one_of_lower_bound__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetStateRequestOneOfLowerBound_lower_bound_choice
{
public:
  explicit Init_GetStateRequestOneOfLowerBound_lower_bound_choice(::bosdyn_msgs::msg::GetStateRequestOneOfLowerBound & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetStateRequestOneOfLowerBound lower_bound_choice(::bosdyn_msgs::msg::GetStateRequestOneOfLowerBound::_lower_bound_choice_type arg)
  {
    msg_.lower_bound_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStateRequestOneOfLowerBound msg_;
};

class Init_GetStateRequestOneOfLowerBound_history_past_ticks
{
public:
  explicit Init_GetStateRequestOneOfLowerBound_history_past_ticks(::bosdyn_msgs::msg::GetStateRequestOneOfLowerBound & msg)
  : msg_(msg)
  {}
  Init_GetStateRequestOneOfLowerBound_lower_bound_choice history_past_ticks(::bosdyn_msgs::msg::GetStateRequestOneOfLowerBound::_history_past_ticks_type arg)
  {
    msg_.history_past_ticks = std::move(arg);
    return Init_GetStateRequestOneOfLowerBound_lower_bound_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStateRequestOneOfLowerBound msg_;
};

class Init_GetStateRequestOneOfLowerBound_history_lower_tick_bound
{
public:
  Init_GetStateRequestOneOfLowerBound_history_lower_tick_bound()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetStateRequestOneOfLowerBound_history_past_ticks history_lower_tick_bound(::bosdyn_msgs::msg::GetStateRequestOneOfLowerBound::_history_lower_tick_bound_type arg)
  {
    msg_.history_lower_tick_bound = std::move(arg);
    return Init_GetStateRequestOneOfLowerBound_history_past_ticks(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStateRequestOneOfLowerBound msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetStateRequestOneOfLowerBound>()
{
  return bosdyn_msgs::msg::builder::Init_GetStateRequestOneOfLowerBound_history_lower_tick_bound();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST_ONE_OF_LOWER_BOUND__BUILDER_HPP_
