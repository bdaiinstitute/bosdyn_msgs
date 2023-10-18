// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandRequestOneOfTaskSpeed.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_SPEED__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_one_of_task_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ConstrainedManipulationCommandRequestOneOfTaskSpeed_task_speed_choice
{
public:
  explicit Init_ConstrainedManipulationCommandRequestOneOfTaskSpeed_task_speed_choice(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed task_speed_choice(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed::_task_speed_choice_type arg)
  {
    msg_.task_speed_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed msg_;
};

class Init_ConstrainedManipulationCommandRequestOneOfTaskSpeed_rotational_speed
{
public:
  explicit Init_ConstrainedManipulationCommandRequestOneOfTaskSpeed_rotational_speed(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed & msg)
  : msg_(msg)
  {}
  Init_ConstrainedManipulationCommandRequestOneOfTaskSpeed_task_speed_choice rotational_speed(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed::_rotational_speed_type arg)
  {
    msg_.rotational_speed = std::move(arg);
    return Init_ConstrainedManipulationCommandRequestOneOfTaskSpeed_task_speed_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed msg_;
};

class Init_ConstrainedManipulationCommandRequestOneOfTaskSpeed_tangential_speed
{
public:
  Init_ConstrainedManipulationCommandRequestOneOfTaskSpeed_tangential_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstrainedManipulationCommandRequestOneOfTaskSpeed_rotational_speed tangential_speed(::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed::_tangential_speed_type arg)
  {
    msg_.tangential_speed = std::move(arg);
    return Init_ConstrainedManipulationCommandRequestOneOfTaskSpeed_rotational_speed(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed>()
{
  return bosdyn_msgs::msg::builder::Init_ConstrainedManipulationCommandRequestOneOfTaskSpeed_tangential_speed();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_SPEED__BUILDER_HPP_
