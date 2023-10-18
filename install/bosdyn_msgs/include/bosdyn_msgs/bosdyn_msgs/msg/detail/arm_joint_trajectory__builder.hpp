// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmJointTrajectory_maximum_acceleration_is_set
{
public:
  explicit Init_ArmJointTrajectory_maximum_acceleration_is_set(::bosdyn_msgs::msg::ArmJointTrajectory & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmJointTrajectory maximum_acceleration_is_set(::bosdyn_msgs::msg::ArmJointTrajectory::_maximum_acceleration_is_set_type arg)
  {
    msg_.maximum_acceleration_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointTrajectory msg_;
};

class Init_ArmJointTrajectory_maximum_acceleration
{
public:
  explicit Init_ArmJointTrajectory_maximum_acceleration(::bosdyn_msgs::msg::ArmJointTrajectory & msg)
  : msg_(msg)
  {}
  Init_ArmJointTrajectory_maximum_acceleration_is_set maximum_acceleration(::bosdyn_msgs::msg::ArmJointTrajectory::_maximum_acceleration_type arg)
  {
    msg_.maximum_acceleration = std::move(arg);
    return Init_ArmJointTrajectory_maximum_acceleration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointTrajectory msg_;
};

class Init_ArmJointTrajectory_maximum_velocity_is_set
{
public:
  explicit Init_ArmJointTrajectory_maximum_velocity_is_set(::bosdyn_msgs::msg::ArmJointTrajectory & msg)
  : msg_(msg)
  {}
  Init_ArmJointTrajectory_maximum_acceleration maximum_velocity_is_set(::bosdyn_msgs::msg::ArmJointTrajectory::_maximum_velocity_is_set_type arg)
  {
    msg_.maximum_velocity_is_set = std::move(arg);
    return Init_ArmJointTrajectory_maximum_acceleration(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointTrajectory msg_;
};

class Init_ArmJointTrajectory_maximum_velocity
{
public:
  explicit Init_ArmJointTrajectory_maximum_velocity(::bosdyn_msgs::msg::ArmJointTrajectory & msg)
  : msg_(msg)
  {}
  Init_ArmJointTrajectory_maximum_velocity_is_set maximum_velocity(::bosdyn_msgs::msg::ArmJointTrajectory::_maximum_velocity_type arg)
  {
    msg_.maximum_velocity = std::move(arg);
    return Init_ArmJointTrajectory_maximum_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointTrajectory msg_;
};

class Init_ArmJointTrajectory_reference_time_is_set
{
public:
  explicit Init_ArmJointTrajectory_reference_time_is_set(::bosdyn_msgs::msg::ArmJointTrajectory & msg)
  : msg_(msg)
  {}
  Init_ArmJointTrajectory_maximum_velocity reference_time_is_set(::bosdyn_msgs::msg::ArmJointTrajectory::_reference_time_is_set_type arg)
  {
    msg_.reference_time_is_set = std::move(arg);
    return Init_ArmJointTrajectory_maximum_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointTrajectory msg_;
};

class Init_ArmJointTrajectory_reference_time
{
public:
  explicit Init_ArmJointTrajectory_reference_time(::bosdyn_msgs::msg::ArmJointTrajectory & msg)
  : msg_(msg)
  {}
  Init_ArmJointTrajectory_reference_time_is_set reference_time(::bosdyn_msgs::msg::ArmJointTrajectory::_reference_time_type arg)
  {
    msg_.reference_time = std::move(arg);
    return Init_ArmJointTrajectory_reference_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointTrajectory msg_;
};

class Init_ArmJointTrajectory_points
{
public:
  Init_ArmJointTrajectory_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmJointTrajectory_reference_time points(::bosdyn_msgs::msg::ArmJointTrajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_ArmJointTrajectory_reference_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmJointTrajectory>()
{
  return bosdyn_msgs::msg::builder::Init_ArmJointTrajectory_points();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY__BUILDER_HPP_
