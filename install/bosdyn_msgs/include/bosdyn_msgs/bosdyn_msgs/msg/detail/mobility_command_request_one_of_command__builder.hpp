// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MobilityCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/mobility_command_request_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MobilityCommandRequestOneOfCommand_command_choice
{
public:
  explicit Init_MobilityCommandRequestOneOfCommand_command_choice(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand command_choice(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand::_command_choice_type arg)
  {
    msg_.command_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand msg_;
};

class Init_MobilityCommandRequestOneOfCommand_follow_arm_request
{
public:
  explicit Init_MobilityCommandRequestOneOfCommand_follow_arm_request(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_MobilityCommandRequestOneOfCommand_command_choice follow_arm_request(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand::_follow_arm_request_type arg)
  {
    msg_.follow_arm_request = std::move(arg);
    return Init_MobilityCommandRequestOneOfCommand_command_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand msg_;
};

class Init_MobilityCommandRequestOneOfCommand_stop_request
{
public:
  explicit Init_MobilityCommandRequestOneOfCommand_stop_request(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_MobilityCommandRequestOneOfCommand_follow_arm_request stop_request(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand::_stop_request_type arg)
  {
    msg_.stop_request = std::move(arg);
    return Init_MobilityCommandRequestOneOfCommand_follow_arm_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand msg_;
};

class Init_MobilityCommandRequestOneOfCommand_stance_request
{
public:
  explicit Init_MobilityCommandRequestOneOfCommand_stance_request(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_MobilityCommandRequestOneOfCommand_stop_request stance_request(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand::_stance_request_type arg)
  {
    msg_.stance_request = std::move(arg);
    return Init_MobilityCommandRequestOneOfCommand_stop_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand msg_;
};

class Init_MobilityCommandRequestOneOfCommand_stand_request
{
public:
  explicit Init_MobilityCommandRequestOneOfCommand_stand_request(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_MobilityCommandRequestOneOfCommand_stance_request stand_request(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand::_stand_request_type arg)
  {
    msg_.stand_request = std::move(arg);
    return Init_MobilityCommandRequestOneOfCommand_stance_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand msg_;
};

class Init_MobilityCommandRequestOneOfCommand_sit_request
{
public:
  explicit Init_MobilityCommandRequestOneOfCommand_sit_request(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_MobilityCommandRequestOneOfCommand_stand_request sit_request(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand::_sit_request_type arg)
  {
    msg_.sit_request = std::move(arg);
    return Init_MobilityCommandRequestOneOfCommand_stand_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand msg_;
};

class Init_MobilityCommandRequestOneOfCommand_se2_velocity_request
{
public:
  explicit Init_MobilityCommandRequestOneOfCommand_se2_velocity_request(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_MobilityCommandRequestOneOfCommand_sit_request se2_velocity_request(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand::_se2_velocity_request_type arg)
  {
    msg_.se2_velocity_request = std::move(arg);
    return Init_MobilityCommandRequestOneOfCommand_sit_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand msg_;
};

class Init_MobilityCommandRequestOneOfCommand_se2_trajectory_request
{
public:
  Init_MobilityCommandRequestOneOfCommand_se2_trajectory_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MobilityCommandRequestOneOfCommand_se2_velocity_request se2_trajectory_request(::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand::_se2_trajectory_request_type arg)
  {
    msg_.se2_trajectory_request = std::move(arg);
    return Init_MobilityCommandRequestOneOfCommand_se2_velocity_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand>()
{
  return bosdyn_msgs::msg::builder::Init_MobilityCommandRequestOneOfCommand_se2_trajectory_request();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_
