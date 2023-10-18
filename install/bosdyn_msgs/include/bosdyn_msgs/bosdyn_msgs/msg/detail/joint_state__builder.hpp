// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/joint_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_JointState_load_is_set
{
public:
  explicit Init_JointState_load_is_set(::bosdyn_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::JointState load_is_set(::bosdyn_msgs::msg::JointState::_load_is_set_type arg)
  {
    msg_.load_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointState msg_;
};

class Init_JointState_load
{
public:
  explicit Init_JointState_load(::bosdyn_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_load_is_set load(::bosdyn_msgs::msg::JointState::_load_type arg)
  {
    msg_.load = std::move(arg);
    return Init_JointState_load_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointState msg_;
};

class Init_JointState_acceleration_is_set
{
public:
  explicit Init_JointState_acceleration_is_set(::bosdyn_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_load acceleration_is_set(::bosdyn_msgs::msg::JointState::_acceleration_is_set_type arg)
  {
    msg_.acceleration_is_set = std::move(arg);
    return Init_JointState_load(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointState msg_;
};

class Init_JointState_acceleration
{
public:
  explicit Init_JointState_acceleration(::bosdyn_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_acceleration_is_set acceleration(::bosdyn_msgs::msg::JointState::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_JointState_acceleration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointState msg_;
};

class Init_JointState_velocity_is_set
{
public:
  explicit Init_JointState_velocity_is_set(::bosdyn_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_acceleration velocity_is_set(::bosdyn_msgs::msg::JointState::_velocity_is_set_type arg)
  {
    msg_.velocity_is_set = std::move(arg);
    return Init_JointState_acceleration(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointState msg_;
};

class Init_JointState_velocity
{
public:
  explicit Init_JointState_velocity(::bosdyn_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_velocity_is_set velocity(::bosdyn_msgs::msg::JointState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointState_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointState msg_;
};

class Init_JointState_position_is_set
{
public:
  explicit Init_JointState_position_is_set(::bosdyn_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_velocity position_is_set(::bosdyn_msgs::msg::JointState::_position_is_set_type arg)
  {
    msg_.position_is_set = std::move(arg);
    return Init_JointState_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointState msg_;
};

class Init_JointState_position
{
public:
  explicit Init_JointState_position(::bosdyn_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_position_is_set position(::bosdyn_msgs::msg::JointState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_JointState_position_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointState msg_;
};

class Init_JointState_name
{
public:
  Init_JointState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointState_position name(::bosdyn_msgs::msg::JointState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointState_position(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::JointState>()
{
  return bosdyn_msgs::msg::builder::Init_JointState_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
