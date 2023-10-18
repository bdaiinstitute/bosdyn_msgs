// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandRequestControlMode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_CONTROL_MODE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_CONTROL_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_control_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ConstrainedManipulationCommandRequestControlMode_value
{
public:
  Init_ConstrainedManipulationCommandRequestControlMode_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestControlMode value(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestControlMode::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestControlMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestControlMode>()
{
  return bosdyn_msgs::msg::builder::Init_ConstrainedManipulationCommandRequestControlMode_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_CONTROL_MODE__BUILDER_HPP_
