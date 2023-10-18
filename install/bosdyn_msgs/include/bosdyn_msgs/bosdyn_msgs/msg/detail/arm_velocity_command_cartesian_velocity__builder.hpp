// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandCartesianVelocity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CARTESIAN_VELOCITY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CARTESIAN_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_velocity_command_cartesian_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmVelocityCommandCartesianVelocity_velocity_in_frame_name_is_set
{
public:
  explicit Init_ArmVelocityCommandCartesianVelocity_velocity_in_frame_name_is_set(::bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity velocity_in_frame_name_is_set(::bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity::_velocity_in_frame_name_is_set_type arg)
  {
    msg_.velocity_in_frame_name_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity msg_;
};

class Init_ArmVelocityCommandCartesianVelocity_velocity_in_frame_name
{
public:
  explicit Init_ArmVelocityCommandCartesianVelocity_velocity_in_frame_name(::bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity & msg)
  : msg_(msg)
  {}
  Init_ArmVelocityCommandCartesianVelocity_velocity_in_frame_name_is_set velocity_in_frame_name(::bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity::_velocity_in_frame_name_type arg)
  {
    msg_.velocity_in_frame_name = std::move(arg);
    return Init_ArmVelocityCommandCartesianVelocity_velocity_in_frame_name_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity msg_;
};

class Init_ArmVelocityCommandCartesianVelocity_frame_name
{
public:
  Init_ArmVelocityCommandCartesianVelocity_frame_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmVelocityCommandCartesianVelocity_velocity_in_frame_name frame_name(::bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity::_frame_name_type arg)
  {
    msg_.frame_name = std::move(arg);
    return Init_ArmVelocityCommandCartesianVelocity_velocity_in_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity>()
{
  return bosdyn_msgs::msg::builder::Init_ArmVelocityCommandCartesianVelocity_frame_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CARTESIAN_VELOCITY__BUILDER_HPP_
