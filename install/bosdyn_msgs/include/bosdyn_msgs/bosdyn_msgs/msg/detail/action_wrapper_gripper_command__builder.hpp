// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperGripperCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_GRIPPER_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_GRIPPER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_wrapper_gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionWrapperGripperCommand_request_is_set
{
public:
  explicit Init_ActionWrapperGripperCommand_request_is_set(::bosdyn_msgs::msg::ActionWrapperGripperCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionWrapperGripperCommand request_is_set(::bosdyn_msgs::msg::ActionWrapperGripperCommand::_request_is_set_type arg)
  {
    msg_.request_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperGripperCommand msg_;
};

class Init_ActionWrapperGripperCommand_request
{
public:
  Init_ActionWrapperGripperCommand_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionWrapperGripperCommand_request_is_set request(::bosdyn_msgs::msg::ActionWrapperGripperCommand::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ActionWrapperGripperCommand_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperGripperCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionWrapperGripperCommand>()
{
  return bosdyn_msgs::msg::builder::Init_ActionWrapperGripperCommand_request();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_GRIPPER_COMMAND__BUILDER_HPP_
