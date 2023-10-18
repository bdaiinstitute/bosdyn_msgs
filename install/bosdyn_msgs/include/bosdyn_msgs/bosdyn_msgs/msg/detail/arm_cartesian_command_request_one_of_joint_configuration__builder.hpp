// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmCartesianCommandRequestOneOfJointConfiguration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST_ONE_OF_JOINT_CONFIGURATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST_ONE_OF_JOINT_CONFIGURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request_one_of_joint_configuration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmCartesianCommandRequestOneOfJointConfiguration_joint_configuration_choice
{
public:
  explicit Init_ArmCartesianCommandRequestOneOfJointConfiguration_joint_configuration_choice(::bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration joint_configuration_choice(::bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration::_joint_configuration_choice_type arg)
  {
    msg_.joint_configuration_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration msg_;
};

class Init_ArmCartesianCommandRequestOneOfJointConfiguration_preferred_joint_configuration
{
public:
  explicit Init_ArmCartesianCommandRequestOneOfJointConfiguration_preferred_joint_configuration(::bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration & msg)
  : msg_(msg)
  {}
  Init_ArmCartesianCommandRequestOneOfJointConfiguration_joint_configuration_choice preferred_joint_configuration(::bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration::_preferred_joint_configuration_type arg)
  {
    msg_.preferred_joint_configuration = std::move(arg);
    return Init_ArmCartesianCommandRequestOneOfJointConfiguration_joint_configuration_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration msg_;
};

class Init_ArmCartesianCommandRequestOneOfJointConfiguration_force_remain_near_current_joint_configuration
{
public:
  Init_ArmCartesianCommandRequestOneOfJointConfiguration_force_remain_near_current_joint_configuration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmCartesianCommandRequestOneOfJointConfiguration_preferred_joint_configuration force_remain_near_current_joint_configuration(::bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration::_force_remain_near_current_joint_configuration_type arg)
  {
    msg_.force_remain_near_current_joint_configuration = std::move(arg);
    return Init_ArmCartesianCommandRequestOneOfJointConfiguration_preferred_joint_configuration(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration>()
{
  return bosdyn_msgs::msg::builder::Init_ArmCartesianCommandRequestOneOfJointConfiguration_force_remain_near_current_joint_configuration();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST_ONE_OF_JOINT_CONFIGURATION__BUILDER_HPP_
