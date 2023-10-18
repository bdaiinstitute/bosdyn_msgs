// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SynchronizedCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/synchronized_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SynchronizedCommandRequest_gripper_command_is_set
{
public:
  explicit Init_SynchronizedCommandRequest_gripper_command_is_set(::bosdyn_msgs::msg::SynchronizedCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SynchronizedCommandRequest gripper_command_is_set(::bosdyn_msgs::msg::SynchronizedCommandRequest::_gripper_command_is_set_type arg)
  {
    msg_.gripper_command_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SynchronizedCommandRequest msg_;
};

class Init_SynchronizedCommandRequest_gripper_command
{
public:
  explicit Init_SynchronizedCommandRequest_gripper_command(::bosdyn_msgs::msg::SynchronizedCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SynchronizedCommandRequest_gripper_command_is_set gripper_command(::bosdyn_msgs::msg::SynchronizedCommandRequest::_gripper_command_type arg)
  {
    msg_.gripper_command = std::move(arg);
    return Init_SynchronizedCommandRequest_gripper_command_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SynchronizedCommandRequest msg_;
};

class Init_SynchronizedCommandRequest_mobility_command_is_set
{
public:
  explicit Init_SynchronizedCommandRequest_mobility_command_is_set(::bosdyn_msgs::msg::SynchronizedCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SynchronizedCommandRequest_gripper_command mobility_command_is_set(::bosdyn_msgs::msg::SynchronizedCommandRequest::_mobility_command_is_set_type arg)
  {
    msg_.mobility_command_is_set = std::move(arg);
    return Init_SynchronizedCommandRequest_gripper_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::SynchronizedCommandRequest msg_;
};

class Init_SynchronizedCommandRequest_mobility_command
{
public:
  explicit Init_SynchronizedCommandRequest_mobility_command(::bosdyn_msgs::msg::SynchronizedCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SynchronizedCommandRequest_mobility_command_is_set mobility_command(::bosdyn_msgs::msg::SynchronizedCommandRequest::_mobility_command_type arg)
  {
    msg_.mobility_command = std::move(arg);
    return Init_SynchronizedCommandRequest_mobility_command_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SynchronizedCommandRequest msg_;
};

class Init_SynchronizedCommandRequest_arm_command_is_set
{
public:
  explicit Init_SynchronizedCommandRequest_arm_command_is_set(::bosdyn_msgs::msg::SynchronizedCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SynchronizedCommandRequest_mobility_command arm_command_is_set(::bosdyn_msgs::msg::SynchronizedCommandRequest::_arm_command_is_set_type arg)
  {
    msg_.arm_command_is_set = std::move(arg);
    return Init_SynchronizedCommandRequest_mobility_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::SynchronizedCommandRequest msg_;
};

class Init_SynchronizedCommandRequest_arm_command
{
public:
  Init_SynchronizedCommandRequest_arm_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SynchronizedCommandRequest_arm_command_is_set arm_command(::bosdyn_msgs::msg::SynchronizedCommandRequest::_arm_command_type arg)
  {
    msg_.arm_command = std::move(arg);
    return Init_SynchronizedCommandRequest_arm_command_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SynchronizedCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SynchronizedCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SynchronizedCommandRequest_arm_command();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_REQUEST__BUILDER_HPP_
