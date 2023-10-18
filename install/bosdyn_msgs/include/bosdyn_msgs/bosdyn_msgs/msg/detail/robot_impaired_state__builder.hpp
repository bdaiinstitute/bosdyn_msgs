// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotImpairedState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_IMPAIRED_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_IMPAIRED_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_impaired_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotImpairedState_behavior_faults
{
public:
  explicit Init_RobotImpairedState_behavior_faults(::bosdyn_msgs::msg::RobotImpairedState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotImpairedState behavior_faults(::bosdyn_msgs::msg::RobotImpairedState::_behavior_faults_type arg)
  {
    msg_.behavior_faults = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotImpairedState msg_;
};

class Init_RobotImpairedState_service_faults
{
public:
  explicit Init_RobotImpairedState_service_faults(::bosdyn_msgs::msg::RobotImpairedState & msg)
  : msg_(msg)
  {}
  Init_RobotImpairedState_behavior_faults service_faults(::bosdyn_msgs::msg::RobotImpairedState::_service_faults_type arg)
  {
    msg_.service_faults = std::move(arg);
    return Init_RobotImpairedState_behavior_faults(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotImpairedState msg_;
};

class Init_RobotImpairedState_system_faults
{
public:
  explicit Init_RobotImpairedState_system_faults(::bosdyn_msgs::msg::RobotImpairedState & msg)
  : msg_(msg)
  {}
  Init_RobotImpairedState_service_faults system_faults(::bosdyn_msgs::msg::RobotImpairedState::_system_faults_type arg)
  {
    msg_.system_faults = std::move(arg);
    return Init_RobotImpairedState_service_faults(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotImpairedState msg_;
};

class Init_RobotImpairedState_impaired_status
{
public:
  Init_RobotImpairedState_impaired_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotImpairedState_system_faults impaired_status(::bosdyn_msgs::msg::RobotImpairedState::_impaired_status_type arg)
  {
    msg_.impaired_status = std::move(arg);
    return Init_RobotImpairedState_system_faults(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotImpairedState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotImpairedState>()
{
  return bosdyn_msgs::msg::builder::Init_RobotImpairedState_impaired_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_IMPAIRED_STATE__BUILDER_HPP_
