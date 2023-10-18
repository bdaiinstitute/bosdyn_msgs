// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StateNodeStatesAtTickNodeStateBlackboardState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE_BLACKBOARD_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE_BLACKBOARD_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/state_node_states_at_tick_node_state_blackboard_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StateNodeStatesAtTickNodeStateBlackboardState_variables
{
public:
  Init_StateNodeStatesAtTickNodeStateBlackboardState_variables()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState variables(::bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState::_variables_type arg)
  {
    msg_.variables = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState>()
{
  return bosdyn_msgs::msg::builder::Init_StateNodeStatesAtTickNodeStateBlackboardState_variables();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE_BLACKBOARD_STATE__BUILDER_HPP_
