// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmDragCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_DRAG_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_DRAG_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_drag_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmDragCommandFeedback_status
{
public:
  Init_ArmDragCommandFeedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::ArmDragCommandFeedback status(::bosdyn_msgs::msg::ArmDragCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmDragCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmDragCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_ArmDragCommandFeedback_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_DRAG_COMMAND_FEEDBACK__BUILDER_HPP_
