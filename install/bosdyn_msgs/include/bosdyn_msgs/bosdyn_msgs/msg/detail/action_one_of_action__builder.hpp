// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionOneOfAction.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_ONE_OF_ACTION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_ONE_OF_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_one_of_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionOneOfAction_action_choice
{
public:
  explicit Init_ActionOneOfAction_action_choice(::bosdyn_msgs::msg::ActionOneOfAction & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionOneOfAction action_choice(::bosdyn_msgs::msg::ActionOneOfAction::_action_choice_type arg)
  {
    msg_.action_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionOneOfAction msg_;
};

class Init_ActionOneOfAction_node
{
public:
  explicit Init_ActionOneOfAction_node(::bosdyn_msgs::msg::ActionOneOfAction & msg)
  : msg_(msg)
  {}
  Init_ActionOneOfAction_action_choice node(::bosdyn_msgs::msg::ActionOneOfAction::_node_type arg)
  {
    msg_.node = std::move(arg);
    return Init_ActionOneOfAction_action_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionOneOfAction msg_;
};

class Init_ActionOneOfAction_remote_grpc
{
public:
  explicit Init_ActionOneOfAction_remote_grpc(::bosdyn_msgs::msg::ActionOneOfAction & msg)
  : msg_(msg)
  {}
  Init_ActionOneOfAction_node remote_grpc(::bosdyn_msgs::msg::ActionOneOfAction::_remote_grpc_type arg)
  {
    msg_.remote_grpc = std::move(arg);
    return Init_ActionOneOfAction_node(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionOneOfAction msg_;
};

class Init_ActionOneOfAction_data_acquisition
{
public:
  explicit Init_ActionOneOfAction_data_acquisition(::bosdyn_msgs::msg::ActionOneOfAction & msg)
  : msg_(msg)
  {}
  Init_ActionOneOfAction_remote_grpc data_acquisition(::bosdyn_msgs::msg::ActionOneOfAction::_data_acquisition_type arg)
  {
    msg_.data_acquisition = std::move(arg);
    return Init_ActionOneOfAction_remote_grpc(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionOneOfAction msg_;
};

class Init_ActionOneOfAction_sleep
{
public:
  Init_ActionOneOfAction_sleep()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionOneOfAction_data_acquisition sleep(::bosdyn_msgs::msg::ActionOneOfAction::_sleep_type arg)
  {
    msg_.sleep = std::move(arg);
    return Init_ActionOneOfAction_data_acquisition(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionOneOfAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionOneOfAction>()
{
  return bosdyn_msgs::msg::builder::Init_ActionOneOfAction_sleep();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_ONE_OF_ACTION__BUILDER_HPP_
