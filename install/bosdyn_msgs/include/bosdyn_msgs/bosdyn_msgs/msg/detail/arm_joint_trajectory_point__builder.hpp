// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmJointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY_POINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_joint_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmJointTrajectoryPoint_time_since_reference_is_set
{
public:
  explicit Init_ArmJointTrajectoryPoint_time_since_reference_is_set(::bosdyn_msgs::msg::ArmJointTrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmJointTrajectoryPoint time_since_reference_is_set(::bosdyn_msgs::msg::ArmJointTrajectoryPoint::_time_since_reference_is_set_type arg)
  {
    msg_.time_since_reference_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointTrajectoryPoint msg_;
};

class Init_ArmJointTrajectoryPoint_time_since_reference
{
public:
  explicit Init_ArmJointTrajectoryPoint_time_since_reference(::bosdyn_msgs::msg::ArmJointTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_ArmJointTrajectoryPoint_time_since_reference_is_set time_since_reference(::bosdyn_msgs::msg::ArmJointTrajectoryPoint::_time_since_reference_type arg)
  {
    msg_.time_since_reference = std::move(arg);
    return Init_ArmJointTrajectoryPoint_time_since_reference_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointTrajectoryPoint msg_;
};

class Init_ArmJointTrajectoryPoint_velocity_is_set
{
public:
  explicit Init_ArmJointTrajectoryPoint_velocity_is_set(::bosdyn_msgs::msg::ArmJointTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_ArmJointTrajectoryPoint_time_since_reference velocity_is_set(::bosdyn_msgs::msg::ArmJointTrajectoryPoint::_velocity_is_set_type arg)
  {
    msg_.velocity_is_set = std::move(arg);
    return Init_ArmJointTrajectoryPoint_time_since_reference(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointTrajectoryPoint msg_;
};

class Init_ArmJointTrajectoryPoint_velocity
{
public:
  explicit Init_ArmJointTrajectoryPoint_velocity(::bosdyn_msgs::msg::ArmJointTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_ArmJointTrajectoryPoint_velocity_is_set velocity(::bosdyn_msgs::msg::ArmJointTrajectoryPoint::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ArmJointTrajectoryPoint_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointTrajectoryPoint msg_;
};

class Init_ArmJointTrajectoryPoint_position_is_set
{
public:
  explicit Init_ArmJointTrajectoryPoint_position_is_set(::bosdyn_msgs::msg::ArmJointTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_ArmJointTrajectoryPoint_velocity position_is_set(::bosdyn_msgs::msg::ArmJointTrajectoryPoint::_position_is_set_type arg)
  {
    msg_.position_is_set = std::move(arg);
    return Init_ArmJointTrajectoryPoint_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointTrajectoryPoint msg_;
};

class Init_ArmJointTrajectoryPoint_position
{
public:
  Init_ArmJointTrajectoryPoint_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmJointTrajectoryPoint_position_is_set position(::bosdyn_msgs::msg::ArmJointTrajectoryPoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ArmJointTrajectoryPoint_position_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointTrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmJointTrajectoryPoint>()
{
  return bosdyn_msgs::msg::builder::Init_ArmJointTrajectoryPoint_position();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY_POINT__BUILDER_HPP_
