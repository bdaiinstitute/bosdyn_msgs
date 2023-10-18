// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StateNodeStatesAtTick.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/state_node_states_at_tick__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StateNodeStatesAtTick_node_states
{
public:
  explicit Init_StateNodeStatesAtTick_node_states(::bosdyn_msgs::msg::StateNodeStatesAtTick & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StateNodeStatesAtTick node_states(::bosdyn_msgs::msg::StateNodeStatesAtTick::_node_states_type arg)
  {
    msg_.node_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StateNodeStatesAtTick msg_;
};

class Init_StateNodeStatesAtTick_tick_start_timestamp_is_set
{
public:
  explicit Init_StateNodeStatesAtTick_tick_start_timestamp_is_set(::bosdyn_msgs::msg::StateNodeStatesAtTick & msg)
  : msg_(msg)
  {}
  Init_StateNodeStatesAtTick_node_states tick_start_timestamp_is_set(::bosdyn_msgs::msg::StateNodeStatesAtTick::_tick_start_timestamp_is_set_type arg)
  {
    msg_.tick_start_timestamp_is_set = std::move(arg);
    return Init_StateNodeStatesAtTick_node_states(msg_);
  }

private:
  ::bosdyn_msgs::msg::StateNodeStatesAtTick msg_;
};

class Init_StateNodeStatesAtTick_tick_start_timestamp
{
public:
  explicit Init_StateNodeStatesAtTick_tick_start_timestamp(::bosdyn_msgs::msg::StateNodeStatesAtTick & msg)
  : msg_(msg)
  {}
  Init_StateNodeStatesAtTick_tick_start_timestamp_is_set tick_start_timestamp(::bosdyn_msgs::msg::StateNodeStatesAtTick::_tick_start_timestamp_type arg)
  {
    msg_.tick_start_timestamp = std::move(arg);
    return Init_StateNodeStatesAtTick_tick_start_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StateNodeStatesAtTick msg_;
};

class Init_StateNodeStatesAtTick_tick_counter
{
public:
  Init_StateNodeStatesAtTick_tick_counter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateNodeStatesAtTick_tick_start_timestamp tick_counter(::bosdyn_msgs::msg::StateNodeStatesAtTick::_tick_counter_type arg)
  {
    msg_.tick_counter = std::move(arg);
    return Init_StateNodeStatesAtTick_tick_start_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::StateNodeStatesAtTick msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StateNodeStatesAtTick>()
{
  return bosdyn_msgs::msg::builder::Init_StateNodeStatesAtTick_tick_counter();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK__BUILDER_HPP_
