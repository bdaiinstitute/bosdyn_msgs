// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmJointMoveCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmJointMoveCommandFeedback_time_to_goal_is_set
{
public:
  explicit Init_ArmJointMoveCommandFeedback_time_to_goal_is_set(::bosdyn_msgs::msg::ArmJointMoveCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmJointMoveCommandFeedback time_to_goal_is_set(::bosdyn_msgs::msg::ArmJointMoveCommandFeedback::_time_to_goal_is_set_type arg)
  {
    msg_.time_to_goal_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointMoveCommandFeedback msg_;
};

class Init_ArmJointMoveCommandFeedback_time_to_goal
{
public:
  explicit Init_ArmJointMoveCommandFeedback_time_to_goal(::bosdyn_msgs::msg::ArmJointMoveCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmJointMoveCommandFeedback_time_to_goal_is_set time_to_goal(::bosdyn_msgs::msg::ArmJointMoveCommandFeedback::_time_to_goal_type arg)
  {
    msg_.time_to_goal = std::move(arg);
    return Init_ArmJointMoveCommandFeedback_time_to_goal_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointMoveCommandFeedback msg_;
};

class Init_ArmJointMoveCommandFeedback_planned_points
{
public:
  explicit Init_ArmJointMoveCommandFeedback_planned_points(::bosdyn_msgs::msg::ArmJointMoveCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmJointMoveCommandFeedback_time_to_goal planned_points(::bosdyn_msgs::msg::ArmJointMoveCommandFeedback::_planned_points_type arg)
  {
    msg_.planned_points = std::move(arg);
    return Init_ArmJointMoveCommandFeedback_time_to_goal(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointMoveCommandFeedback msg_;
};

class Init_ArmJointMoveCommandFeedback_planner_status
{
public:
  explicit Init_ArmJointMoveCommandFeedback_planner_status(::bosdyn_msgs::msg::ArmJointMoveCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmJointMoveCommandFeedback_planned_points planner_status(::bosdyn_msgs::msg::ArmJointMoveCommandFeedback::_planner_status_type arg)
  {
    msg_.planner_status = std::move(arg);
    return Init_ArmJointMoveCommandFeedback_planned_points(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointMoveCommandFeedback msg_;
};

class Init_ArmJointMoveCommandFeedback_status
{
public:
  Init_ArmJointMoveCommandFeedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmJointMoveCommandFeedback_planner_status status(::bosdyn_msgs::msg::ArmJointMoveCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ArmJointMoveCommandFeedback_planner_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointMoveCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmJointMoveCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_ArmJointMoveCommandFeedback_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_FEEDBACK__BUILDER_HPP_
