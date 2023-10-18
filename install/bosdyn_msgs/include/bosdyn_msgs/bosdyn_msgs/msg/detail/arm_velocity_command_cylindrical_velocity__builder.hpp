// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandCylindricalVelocity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CYLINDRICAL_VELOCITY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CYLINDRICAL_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_velocity_command_cylindrical_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmVelocityCommandCylindricalVelocity_max_linear_velocity_is_set
{
public:
  explicit Init_ArmVelocityCommandCylindricalVelocity_max_linear_velocity_is_set(::bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity max_linear_velocity_is_set(::bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity::_max_linear_velocity_is_set_type arg)
  {
    msg_.max_linear_velocity_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity msg_;
};

class Init_ArmVelocityCommandCylindricalVelocity_max_linear_velocity
{
public:
  explicit Init_ArmVelocityCommandCylindricalVelocity_max_linear_velocity(::bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity & msg)
  : msg_(msg)
  {}
  Init_ArmVelocityCommandCylindricalVelocity_max_linear_velocity_is_set max_linear_velocity(::bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity::_max_linear_velocity_type arg)
  {
    msg_.max_linear_velocity = std::move(arg);
    return Init_ArmVelocityCommandCylindricalVelocity_max_linear_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity msg_;
};

class Init_ArmVelocityCommandCylindricalVelocity_linear_velocity_is_set
{
public:
  explicit Init_ArmVelocityCommandCylindricalVelocity_linear_velocity_is_set(::bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity & msg)
  : msg_(msg)
  {}
  Init_ArmVelocityCommandCylindricalVelocity_max_linear_velocity linear_velocity_is_set(::bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity::_linear_velocity_is_set_type arg)
  {
    msg_.linear_velocity_is_set = std::move(arg);
    return Init_ArmVelocityCommandCylindricalVelocity_max_linear_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity msg_;
};

class Init_ArmVelocityCommandCylindricalVelocity_linear_velocity
{
public:
  Init_ArmVelocityCommandCylindricalVelocity_linear_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmVelocityCommandCylindricalVelocity_linear_velocity_is_set linear_velocity(::bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_ArmVelocityCommandCylindricalVelocity_linear_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity>()
{
  return bosdyn_msgs::msg::builder::Init_ArmVelocityCommandCylindricalVelocity_linear_velocity();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CYLINDRICAL_VELOCITY__BUILDER_HPP_
