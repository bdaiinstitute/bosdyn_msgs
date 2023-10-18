// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmCartesianCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_cartesian_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmCartesianCommandFeedback_measured_rot_distance_to_goal
{
public:
  explicit Init_ArmCartesianCommandFeedback_measured_rot_distance_to_goal(::bosdyn_msgs::msg::ArmCartesianCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmCartesianCommandFeedback measured_rot_distance_to_goal(::bosdyn_msgs::msg::ArmCartesianCommandFeedback::_measured_rot_distance_to_goal_type arg)
  {
    msg_.measured_rot_distance_to_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandFeedback msg_;
};

class Init_ArmCartesianCommandFeedback_measured_pos_distance_to_goal
{
public:
  explicit Init_ArmCartesianCommandFeedback_measured_pos_distance_to_goal(::bosdyn_msgs::msg::ArmCartesianCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandFeedback_measured_rot_distance_to_goal measured_pos_distance_to_goal(::bosdyn_msgs::msg::ArmCartesianCommandFeedback::_measured_pos_distance_to_goal_type arg)
  {
    msg_.measured_pos_distance_to_goal = std::move(arg);
    return Init_ArmCartesianCommandFeedback_measured_rot_distance_to_goal(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandFeedback msg_;
};

class Init_ArmCartesianCommandFeedback_measured_rot_tracking_error
{
public:
  explicit Init_ArmCartesianCommandFeedback_measured_rot_tracking_error(::bosdyn_msgs::msg::ArmCartesianCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandFeedback_measured_pos_distance_to_goal measured_rot_tracking_error(::bosdyn_msgs::msg::ArmCartesianCommandFeedback::_measured_rot_tracking_error_type arg)
  {
    msg_.measured_rot_tracking_error = std::move(arg);
    return Init_ArmCartesianCommandFeedback_measured_pos_distance_to_goal(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandFeedback msg_;
};

class Init_ArmCartesianCommandFeedback_measured_pos_tracking_error
{
public:
  explicit Init_ArmCartesianCommandFeedback_measured_pos_tracking_error(::bosdyn_msgs::msg::ArmCartesianCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandFeedback_measured_rot_tracking_error measured_pos_tracking_error(::bosdyn_msgs::msg::ArmCartesianCommandFeedback::_measured_pos_tracking_error_type arg)
  {
    msg_.measured_pos_tracking_error = std::move(arg);
    return Init_ArmCartesianCommandFeedback_measured_rot_tracking_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandFeedback msg_;
};

class Init_ArmCartesianCommandFeedback_status
{
public:
  Init_ArmCartesianCommandFeedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmCartesianCommandFeedback_measured_pos_tracking_error status(::bosdyn_msgs::msg::ArmCartesianCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ArmCartesianCommandFeedback_measured_pos_tracking_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmCartesianCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_ArmCartesianCommandFeedback_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_FEEDBACK__BUILDER_HPP_
