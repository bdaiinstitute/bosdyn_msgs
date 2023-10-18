// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmCommandRequest_params_is_set
{
public:
  explicit Init_ArmCommandRequest_params_is_set(::bosdyn_msgs::msg::ArmCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmCommandRequest params_is_set(::bosdyn_msgs::msg::ArmCommandRequest::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandRequest msg_;
};

class Init_ArmCommandRequest_params
{
public:
  explicit Init_ArmCommandRequest_params(::bosdyn_msgs::msg::ArmCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmCommandRequest_params_is_set params(::bosdyn_msgs::msg::ArmCommandRequest::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_ArmCommandRequest_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandRequest msg_;
};

class Init_ArmCommandRequest_command
{
public:
  Init_ArmCommandRequest_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmCommandRequest_params command(::bosdyn_msgs::msg::ArmCommandRequest::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_ArmCommandRequest_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ArmCommandRequest_command();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST__BUILDER_HPP_
