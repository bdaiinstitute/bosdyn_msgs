// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GazeCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/gaze_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GazeCommandFeedback_hand_roll_to_target_roll_measured
{
public:
  explicit Init_GazeCommandFeedback_hand_roll_to_target_roll_measured(::bosdyn_msgs::msg::GazeCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GazeCommandFeedback hand_roll_to_target_roll_measured(::bosdyn_msgs::msg::GazeCommandFeedback::_hand_roll_to_target_roll_measured_type arg)
  {
    msg_.hand_roll_to_target_roll_measured = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandFeedback msg_;
};

class Init_GazeCommandFeedback_hand_roll_at_goal
{
public:
  explicit Init_GazeCommandFeedback_hand_roll_at_goal(::bosdyn_msgs::msg::GazeCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_GazeCommandFeedback_hand_roll_to_target_roll_measured hand_roll_at_goal(::bosdyn_msgs::msg::GazeCommandFeedback::_hand_roll_at_goal_type arg)
  {
    msg_.hand_roll_at_goal = std::move(arg);
    return Init_GazeCommandFeedback_hand_roll_to_target_roll_measured(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandFeedback msg_;
};

class Init_GazeCommandFeedback_hand_distance_to_goal_measured
{
public:
  explicit Init_GazeCommandFeedback_hand_distance_to_goal_measured(::bosdyn_msgs::msg::GazeCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_GazeCommandFeedback_hand_roll_at_goal hand_distance_to_goal_measured(::bosdyn_msgs::msg::GazeCommandFeedback::_hand_distance_to_goal_measured_type arg)
  {
    msg_.hand_distance_to_goal_measured = std::move(arg);
    return Init_GazeCommandFeedback_hand_roll_at_goal(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandFeedback msg_;
};

class Init_GazeCommandFeedback_hand_position_at_goal
{
public:
  explicit Init_GazeCommandFeedback_hand_position_at_goal(::bosdyn_msgs::msg::GazeCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_GazeCommandFeedback_hand_distance_to_goal_measured hand_position_at_goal(::bosdyn_msgs::msg::GazeCommandFeedback::_hand_position_at_goal_type arg)
  {
    msg_.hand_position_at_goal = std::move(arg);
    return Init_GazeCommandFeedback_hand_distance_to_goal_measured(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandFeedback msg_;
};

class Init_GazeCommandFeedback_gaze_to_target_rotation_measured
{
public:
  explicit Init_GazeCommandFeedback_gaze_to_target_rotation_measured(::bosdyn_msgs::msg::GazeCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_GazeCommandFeedback_hand_position_at_goal gaze_to_target_rotation_measured(::bosdyn_msgs::msg::GazeCommandFeedback::_gaze_to_target_rotation_measured_type arg)
  {
    msg_.gaze_to_target_rotation_measured = std::move(arg);
    return Init_GazeCommandFeedback_hand_position_at_goal(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandFeedback msg_;
};

class Init_GazeCommandFeedback_gazing_at_target
{
public:
  explicit Init_GazeCommandFeedback_gazing_at_target(::bosdyn_msgs::msg::GazeCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_GazeCommandFeedback_gaze_to_target_rotation_measured gazing_at_target(::bosdyn_msgs::msg::GazeCommandFeedback::_gazing_at_target_type arg)
  {
    msg_.gazing_at_target = std::move(arg);
    return Init_GazeCommandFeedback_gaze_to_target_rotation_measured(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandFeedback msg_;
};

class Init_GazeCommandFeedback_status
{
public:
  Init_GazeCommandFeedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GazeCommandFeedback_gazing_at_target status(::bosdyn_msgs::msg::GazeCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GazeCommandFeedback_gazing_at_target(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GazeCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_GazeCommandFeedback_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_FEEDBACK__BUILDER_HPP_
