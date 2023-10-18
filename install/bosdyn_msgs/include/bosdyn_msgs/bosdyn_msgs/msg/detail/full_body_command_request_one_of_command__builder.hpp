// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FullBodyCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/full_body_command_request_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FullBodyCommandRequestOneOfCommand_command_choice
{
public:
  explicit Init_FullBodyCommandRequestOneOfCommand_command_choice(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand command_choice(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand::_command_choice_type arg)
  {
    msg_.command_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand msg_;
};

class Init_FullBodyCommandRequestOneOfCommand_constrained_manipulation_request
{
public:
  explicit Init_FullBodyCommandRequestOneOfCommand_constrained_manipulation_request(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_FullBodyCommandRequestOneOfCommand_command_choice constrained_manipulation_request(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand::_constrained_manipulation_request_type arg)
  {
    msg_.constrained_manipulation_request = std::move(arg);
    return Init_FullBodyCommandRequestOneOfCommand_command_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand msg_;
};

class Init_FullBodyCommandRequestOneOfCommand_payload_estimation_request
{
public:
  explicit Init_FullBodyCommandRequestOneOfCommand_payload_estimation_request(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_FullBodyCommandRequestOneOfCommand_constrained_manipulation_request payload_estimation_request(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand::_payload_estimation_request_type arg)
  {
    msg_.payload_estimation_request = std::move(arg);
    return Init_FullBodyCommandRequestOneOfCommand_constrained_manipulation_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand msg_;
};

class Init_FullBodyCommandRequestOneOfCommand_battery_change_pose_request
{
public:
  explicit Init_FullBodyCommandRequestOneOfCommand_battery_change_pose_request(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_FullBodyCommandRequestOneOfCommand_payload_estimation_request battery_change_pose_request(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand::_battery_change_pose_request_type arg)
  {
    msg_.battery_change_pose_request = std::move(arg);
    return Init_FullBodyCommandRequestOneOfCommand_payload_estimation_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand msg_;
};

class Init_FullBodyCommandRequestOneOfCommand_safe_power_off_request
{
public:
  explicit Init_FullBodyCommandRequestOneOfCommand_safe_power_off_request(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_FullBodyCommandRequestOneOfCommand_battery_change_pose_request safe_power_off_request(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand::_safe_power_off_request_type arg)
  {
    msg_.safe_power_off_request = std::move(arg);
    return Init_FullBodyCommandRequestOneOfCommand_battery_change_pose_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand msg_;
};

class Init_FullBodyCommandRequestOneOfCommand_selfright_request
{
public:
  explicit Init_FullBodyCommandRequestOneOfCommand_selfright_request(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_FullBodyCommandRequestOneOfCommand_safe_power_off_request selfright_request(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand::_selfright_request_type arg)
  {
    msg_.selfright_request = std::move(arg);
    return Init_FullBodyCommandRequestOneOfCommand_safe_power_off_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand msg_;
};

class Init_FullBodyCommandRequestOneOfCommand_freeze_request
{
public:
  explicit Init_FullBodyCommandRequestOneOfCommand_freeze_request(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_FullBodyCommandRequestOneOfCommand_selfright_request freeze_request(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand::_freeze_request_type arg)
  {
    msg_.freeze_request = std::move(arg);
    return Init_FullBodyCommandRequestOneOfCommand_selfright_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand msg_;
};

class Init_FullBodyCommandRequestOneOfCommand_stop_request
{
public:
  Init_FullBodyCommandRequestOneOfCommand_stop_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullBodyCommandRequestOneOfCommand_freeze_request stop_request(::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand::_stop_request_type arg)
  {
    msg_.stop_request = std::move(arg);
    return Init_FullBodyCommandRequestOneOfCommand_freeze_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand>()
{
  return bosdyn_msgs::msg::builder::Init_FullBodyCommandRequestOneOfCommand_stop_request();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_
