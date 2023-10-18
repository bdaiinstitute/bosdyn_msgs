// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandRequestOneOfTaskTargetPosition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_TARGET_POSITION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_TARGET_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_one_of_task_target_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_task_target_position_choice
{
public:
  explicit Init_ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_task_target_position_choice(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition task_target_position_choice(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition::_task_target_position_choice_type arg)
  {
    msg_.task_target_position_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition msg_;
};

class Init_ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_target_angle
{
public:
  explicit Init_ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_target_angle(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_task_target_position_choice target_angle(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition::_target_angle_type arg)
  {
    msg_.target_angle = std::move(arg);
    return Init_ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_task_target_position_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition msg_;
};

class Init_ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_target_linear_position
{
public:
  Init_ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_target_linear_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_target_angle target_linear_position(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition::_target_linear_position_type arg)
  {
    msg_.target_linear_position = std::move(arg);
    return Init_ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_target_angle(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition>()
{
  return bosdyn_msgs::msg::builder::Init_ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_target_linear_position();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_TARGET_POSITION__BUILDER_HPP_
