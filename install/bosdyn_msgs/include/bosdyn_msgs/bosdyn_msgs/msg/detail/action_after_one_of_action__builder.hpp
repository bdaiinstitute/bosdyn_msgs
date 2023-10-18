// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionAfterOneOfAction.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_ONE_OF_ACTION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_ONE_OF_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_after_one_of_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionAfterOneOfAction_action_choice
{
public:
  explicit Init_ActionAfterOneOfAction_action_choice(::bosdyn_msgs::msg::ActionAfterOneOfAction & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionAfterOneOfAction action_choice(::bosdyn_msgs::msg::ActionAfterOneOfAction::_action_choice_type arg)
  {
    msg_.action_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfterOneOfAction msg_;
};

class Init_ActionAfterOneOfAction_lease_stale
{
public:
  explicit Init_ActionAfterOneOfAction_lease_stale(::bosdyn_msgs::msg::ActionAfterOneOfAction & msg)
  : msg_(msg)
  {}
  Init_ActionAfterOneOfAction_action_choice lease_stale(::bosdyn_msgs::msg::ActionAfterOneOfAction::_lease_stale_type arg)
  {
    msg_.lease_stale = std::move(arg);
    return Init_ActionAfterOneOfAction_action_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfterOneOfAction msg_;
};

class Init_ActionAfterOneOfAction_immediate_robot_off
{
public:
  explicit Init_ActionAfterOneOfAction_immediate_robot_off(::bosdyn_msgs::msg::ActionAfterOneOfAction & msg)
  : msg_(msg)
  {}
  Init_ActionAfterOneOfAction_lease_stale immediate_robot_off(::bosdyn_msgs::msg::ActionAfterOneOfAction::_immediate_robot_off_type arg)
  {
    msg_.immediate_robot_off = std::move(arg);
    return Init_ActionAfterOneOfAction_lease_stale(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfterOneOfAction msg_;
};

class Init_ActionAfterOneOfAction_controlled_motors_off
{
public:
  explicit Init_ActionAfterOneOfAction_controlled_motors_off(::bosdyn_msgs::msg::ActionAfterOneOfAction & msg)
  : msg_(msg)
  {}
  Init_ActionAfterOneOfAction_immediate_robot_off controlled_motors_off(::bosdyn_msgs::msg::ActionAfterOneOfAction::_controlled_motors_off_type arg)
  {
    msg_.controlled_motors_off = std::move(arg);
    return Init_ActionAfterOneOfAction_immediate_robot_off(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfterOneOfAction msg_;
};

class Init_ActionAfterOneOfAction_auto_return
{
public:
  explicit Init_ActionAfterOneOfAction_auto_return(::bosdyn_msgs::msg::ActionAfterOneOfAction & msg)
  : msg_(msg)
  {}
  Init_ActionAfterOneOfAction_controlled_motors_off auto_return(::bosdyn_msgs::msg::ActionAfterOneOfAction::_auto_return_type arg)
  {
    msg_.auto_return = std::move(arg);
    return Init_ActionAfterOneOfAction_controlled_motors_off(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfterOneOfAction msg_;
};

class Init_ActionAfterOneOfAction_record_event
{
public:
  Init_ActionAfterOneOfAction_record_event()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionAfterOneOfAction_auto_return record_event(::bosdyn_msgs::msg::ActionAfterOneOfAction::_record_event_type arg)
  {
    msg_.record_event = std::move(arg);
    return Init_ActionAfterOneOfAction_auto_return(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfterOneOfAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionAfterOneOfAction>()
{
  return bosdyn_msgs::msg::builder::Init_ActionAfterOneOfAction_record_event();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_ONE_OF_ACTION__BUILDER_HPP_
