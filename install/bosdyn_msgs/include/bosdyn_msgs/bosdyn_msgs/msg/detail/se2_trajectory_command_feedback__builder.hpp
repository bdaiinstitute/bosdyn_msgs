// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SE2TrajectoryCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE2_TRAJECTORY_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE2_TRAJECTORY_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/se2_trajectory_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SE2TrajectoryCommandFeedback_body_movement_status
{
public:
  explicit Init_SE2TrajectoryCommandFeedback_body_movement_status(::bosdyn_msgs::msg::SE2TrajectoryCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SE2TrajectoryCommandFeedback body_movement_status(::bosdyn_msgs::msg::SE2TrajectoryCommandFeedback::_body_movement_status_type arg)
  {
    msg_.body_movement_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2TrajectoryCommandFeedback msg_;
};

class Init_SE2TrajectoryCommandFeedback_status
{
public:
  Init_SE2TrajectoryCommandFeedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SE2TrajectoryCommandFeedback_body_movement_status status(::bosdyn_msgs::msg::SE2TrajectoryCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SE2TrajectoryCommandFeedback_body_movement_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2TrajectoryCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SE2TrajectoryCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_SE2TrajectoryCommandFeedback_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE2_TRAJECTORY_COMMAND_FEEDBACK__BUILDER_HPP_
