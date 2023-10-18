// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StateNodeStatesAtTickNodeState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/state_node_states_at_tick_node_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StateNodeStatesAtTickNodeState_blackboard_is_set
{
public:
  explicit Init_StateNodeStatesAtTickNodeState_blackboard_is_set(::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState blackboard_is_set(::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState::_blackboard_is_set_type arg)
  {
    msg_.blackboard_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState msg_;
};

class Init_StateNodeStatesAtTickNodeState_blackboard
{
public:
  explicit Init_StateNodeStatesAtTickNodeState_blackboard(::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState & msg)
  : msg_(msg)
  {}
  Init_StateNodeStatesAtTickNodeState_blackboard_is_set blackboard(::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState::_blackboard_type arg)
  {
    msg_.blackboard = std::move(arg);
    return Init_StateNodeStatesAtTickNodeState_blackboard_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState msg_;
};

class Init_StateNodeStatesAtTickNodeState_id
{
public:
  explicit Init_StateNodeStatesAtTickNodeState_id(::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState & msg)
  : msg_(msg)
  {}
  Init_StateNodeStatesAtTickNodeState_blackboard id(::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_StateNodeStatesAtTickNodeState_blackboard(msg_);
  }

private:
  ::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState msg_;
};

class Init_StateNodeStatesAtTickNodeState_error
{
public:
  explicit Init_StateNodeStatesAtTickNodeState_error(::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState & msg)
  : msg_(msg)
  {}
  Init_StateNodeStatesAtTickNodeState_id error(::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_StateNodeStatesAtTickNodeState_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState msg_;
};

class Init_StateNodeStatesAtTickNodeState_result
{
public:
  Init_StateNodeStatesAtTickNodeState_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateNodeStatesAtTickNodeState_error result(::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_StateNodeStatesAtTickNodeState_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StateNodeStatesAtTickNodeState>()
{
  return bosdyn_msgs::msg::builder::Init_StateNodeStatesAtTickNodeState_result();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE__BUILDER_HPP_
