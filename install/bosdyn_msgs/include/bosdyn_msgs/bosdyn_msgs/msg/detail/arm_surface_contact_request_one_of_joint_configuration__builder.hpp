// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmSurfaceContactRequestOneOfJointConfiguration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST_ONE_OF_JOINT_CONFIGURATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST_ONE_OF_JOINT_CONFIGURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_surface_contact_request_one_of_joint_configuration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmSurfaceContactRequestOneOfJointConfiguration_joint_configuration_choice
{
public:
  explicit Init_ArmSurfaceContactRequestOneOfJointConfiguration_joint_configuration_choice(::bosdyn_msgs::msg::ArmSurfaceContactRequestOneOfJointConfiguration & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmSurfaceContactRequestOneOfJointConfiguration joint_configuration_choice(::bosdyn_msgs::msg::ArmSurfaceContactRequestOneOfJointConfiguration::_joint_configuration_choice_type arg)
  {
    msg_.joint_configuration_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequestOneOfJointConfiguration msg_;
};

class Init_ArmSurfaceContactRequestOneOfJointConfiguration_preferred_joint_configuration
{
public:
  explicit Init_ArmSurfaceContactRequestOneOfJointConfiguration_preferred_joint_configuration(::bosdyn_msgs::msg::ArmSurfaceContactRequestOneOfJointConfiguration & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactRequestOneOfJointConfiguration_joint_configuration_choice preferred_joint_configuration(::bosdyn_msgs::msg::ArmSurfaceContactRequestOneOfJointConfiguration::_preferred_joint_configuration_type arg)
  {
    msg_.preferred_joint_configuration = std::move(arg);
    return Init_ArmSurfaceContactRequestOneOfJointConfiguration_joint_configuration_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequestOneOfJointConfiguration msg_;
};

class Init_ArmSurfaceContactRequestOneOfJointConfiguration_force_remain_near_current_joint_configuration
{
public:
  Init_ArmSurfaceContactRequestOneOfJointConfiguration_force_remain_near_current_joint_configuration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmSurfaceContactRequestOneOfJointConfiguration_preferred_joint_configuration force_remain_near_current_joint_configuration(::bosdyn_msgs::msg::ArmSurfaceContactRequestOneOfJointConfiguration::_force_remain_near_current_joint_configuration_type arg)
  {
    msg_.force_remain_near_current_joint_configuration = std::move(arg);
    return Init_ArmSurfaceContactRequestOneOfJointConfiguration_preferred_joint_configuration(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactRequestOneOfJointConfiguration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmSurfaceContactRequestOneOfJointConfiguration>()
{
  return bosdyn_msgs::msg::builder::Init_ArmSurfaceContactRequestOneOfJointConfiguration_force_remain_near_current_joint_configuration();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST_ONE_OF_JOINT_CONFIGURATION__BUILDER_HPP_
