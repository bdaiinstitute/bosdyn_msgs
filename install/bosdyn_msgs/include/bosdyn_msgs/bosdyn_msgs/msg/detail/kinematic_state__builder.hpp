// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KINEMATIC_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KINEMATIC_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/kinematic_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_KinematicState_velocity_of_body_in_odom_is_set
{
public:
  explicit Init_KinematicState_velocity_of_body_in_odom_is_set(::bosdyn_msgs::msg::KinematicState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::KinematicState velocity_of_body_in_odom_is_set(::bosdyn_msgs::msg::KinematicState::_velocity_of_body_in_odom_is_set_type arg)
  {
    msg_.velocity_of_body_in_odom_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::KinematicState msg_;
};

class Init_KinematicState_velocity_of_body_in_odom
{
public:
  explicit Init_KinematicState_velocity_of_body_in_odom(::bosdyn_msgs::msg::KinematicState & msg)
  : msg_(msg)
  {}
  Init_KinematicState_velocity_of_body_in_odom_is_set velocity_of_body_in_odom(::bosdyn_msgs::msg::KinematicState::_velocity_of_body_in_odom_type arg)
  {
    msg_.velocity_of_body_in_odom = std::move(arg);
    return Init_KinematicState_velocity_of_body_in_odom_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::KinematicState msg_;
};

class Init_KinematicState_velocity_of_body_in_vision_is_set
{
public:
  explicit Init_KinematicState_velocity_of_body_in_vision_is_set(::bosdyn_msgs::msg::KinematicState & msg)
  : msg_(msg)
  {}
  Init_KinematicState_velocity_of_body_in_odom velocity_of_body_in_vision_is_set(::bosdyn_msgs::msg::KinematicState::_velocity_of_body_in_vision_is_set_type arg)
  {
    msg_.velocity_of_body_in_vision_is_set = std::move(arg);
    return Init_KinematicState_velocity_of_body_in_odom(msg_);
  }

private:
  ::bosdyn_msgs::msg::KinematicState msg_;
};

class Init_KinematicState_velocity_of_body_in_vision
{
public:
  explicit Init_KinematicState_velocity_of_body_in_vision(::bosdyn_msgs::msg::KinematicState & msg)
  : msg_(msg)
  {}
  Init_KinematicState_velocity_of_body_in_vision_is_set velocity_of_body_in_vision(::bosdyn_msgs::msg::KinematicState::_velocity_of_body_in_vision_type arg)
  {
    msg_.velocity_of_body_in_vision = std::move(arg);
    return Init_KinematicState_velocity_of_body_in_vision_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::KinematicState msg_;
};

class Init_KinematicState_transforms_snapshot_is_set
{
public:
  explicit Init_KinematicState_transforms_snapshot_is_set(::bosdyn_msgs::msg::KinematicState & msg)
  : msg_(msg)
  {}
  Init_KinematicState_velocity_of_body_in_vision transforms_snapshot_is_set(::bosdyn_msgs::msg::KinematicState::_transforms_snapshot_is_set_type arg)
  {
    msg_.transforms_snapshot_is_set = std::move(arg);
    return Init_KinematicState_velocity_of_body_in_vision(msg_);
  }

private:
  ::bosdyn_msgs::msg::KinematicState msg_;
};

class Init_KinematicState_transforms_snapshot
{
public:
  explicit Init_KinematicState_transforms_snapshot(::bosdyn_msgs::msg::KinematicState & msg)
  : msg_(msg)
  {}
  Init_KinematicState_transforms_snapshot_is_set transforms_snapshot(::bosdyn_msgs::msg::KinematicState::_transforms_snapshot_type arg)
  {
    msg_.transforms_snapshot = std::move(arg);
    return Init_KinematicState_transforms_snapshot_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::KinematicState msg_;
};

class Init_KinematicState_acquisition_timestamp_is_set
{
public:
  explicit Init_KinematicState_acquisition_timestamp_is_set(::bosdyn_msgs::msg::KinematicState & msg)
  : msg_(msg)
  {}
  Init_KinematicState_transforms_snapshot acquisition_timestamp_is_set(::bosdyn_msgs::msg::KinematicState::_acquisition_timestamp_is_set_type arg)
  {
    msg_.acquisition_timestamp_is_set = std::move(arg);
    return Init_KinematicState_transforms_snapshot(msg_);
  }

private:
  ::bosdyn_msgs::msg::KinematicState msg_;
};

class Init_KinematicState_acquisition_timestamp
{
public:
  explicit Init_KinematicState_acquisition_timestamp(::bosdyn_msgs::msg::KinematicState & msg)
  : msg_(msg)
  {}
  Init_KinematicState_acquisition_timestamp_is_set acquisition_timestamp(::bosdyn_msgs::msg::KinematicState::_acquisition_timestamp_type arg)
  {
    msg_.acquisition_timestamp = std::move(arg);
    return Init_KinematicState_acquisition_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::KinematicState msg_;
};

class Init_KinematicState_joint_states
{
public:
  Init_KinematicState_joint_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KinematicState_acquisition_timestamp joint_states(::bosdyn_msgs::msg::KinematicState::_joint_states_type arg)
  {
    msg_.joint_states = std::move(arg);
    return Init_KinematicState_acquisition_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::KinematicState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::KinematicState>()
{
  return bosdyn_msgs::msg::builder::Init_KinematicState_joint_states();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KINEMATIC_STATE__BUILDER_HPP_
