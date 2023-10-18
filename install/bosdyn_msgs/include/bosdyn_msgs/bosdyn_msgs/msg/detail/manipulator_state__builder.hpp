// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ManipulatorState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/manipulator_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ManipulatorState_carry_state
{
public:
  explicit Init_ManipulatorState_carry_state(::bosdyn_msgs::msg::ManipulatorState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ManipulatorState carry_state(::bosdyn_msgs::msg::ManipulatorState::_carry_state_type arg)
  {
    msg_.carry_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulatorState msg_;
};

class Init_ManipulatorState_velocity_of_hand_in_odom_is_set
{
public:
  explicit Init_ManipulatorState_velocity_of_hand_in_odom_is_set(::bosdyn_msgs::msg::ManipulatorState & msg)
  : msg_(msg)
  {}
  Init_ManipulatorState_carry_state velocity_of_hand_in_odom_is_set(::bosdyn_msgs::msg::ManipulatorState::_velocity_of_hand_in_odom_is_set_type arg)
  {
    msg_.velocity_of_hand_in_odom_is_set = std::move(arg);
    return Init_ManipulatorState_carry_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulatorState msg_;
};

class Init_ManipulatorState_velocity_of_hand_in_odom
{
public:
  explicit Init_ManipulatorState_velocity_of_hand_in_odom(::bosdyn_msgs::msg::ManipulatorState & msg)
  : msg_(msg)
  {}
  Init_ManipulatorState_velocity_of_hand_in_odom_is_set velocity_of_hand_in_odom(::bosdyn_msgs::msg::ManipulatorState::_velocity_of_hand_in_odom_type arg)
  {
    msg_.velocity_of_hand_in_odom = std::move(arg);
    return Init_ManipulatorState_velocity_of_hand_in_odom_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulatorState msg_;
};

class Init_ManipulatorState_velocity_of_hand_in_vision_is_set
{
public:
  explicit Init_ManipulatorState_velocity_of_hand_in_vision_is_set(::bosdyn_msgs::msg::ManipulatorState & msg)
  : msg_(msg)
  {}
  Init_ManipulatorState_velocity_of_hand_in_odom velocity_of_hand_in_vision_is_set(::bosdyn_msgs::msg::ManipulatorState::_velocity_of_hand_in_vision_is_set_type arg)
  {
    msg_.velocity_of_hand_in_vision_is_set = std::move(arg);
    return Init_ManipulatorState_velocity_of_hand_in_odom(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulatorState msg_;
};

class Init_ManipulatorState_velocity_of_hand_in_vision
{
public:
  explicit Init_ManipulatorState_velocity_of_hand_in_vision(::bosdyn_msgs::msg::ManipulatorState & msg)
  : msg_(msg)
  {}
  Init_ManipulatorState_velocity_of_hand_in_vision_is_set velocity_of_hand_in_vision(::bosdyn_msgs::msg::ManipulatorState::_velocity_of_hand_in_vision_type arg)
  {
    msg_.velocity_of_hand_in_vision = std::move(arg);
    return Init_ManipulatorState_velocity_of_hand_in_vision_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulatorState msg_;
};

class Init_ManipulatorState_stow_state
{
public:
  explicit Init_ManipulatorState_stow_state(::bosdyn_msgs::msg::ManipulatorState & msg)
  : msg_(msg)
  {}
  Init_ManipulatorState_velocity_of_hand_in_vision stow_state(::bosdyn_msgs::msg::ManipulatorState::_stow_state_type arg)
  {
    msg_.stow_state = std::move(arg);
    return Init_ManipulatorState_velocity_of_hand_in_vision(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulatorState msg_;
};

class Init_ManipulatorState_estimated_end_effector_force_in_hand_is_set
{
public:
  explicit Init_ManipulatorState_estimated_end_effector_force_in_hand_is_set(::bosdyn_msgs::msg::ManipulatorState & msg)
  : msg_(msg)
  {}
  Init_ManipulatorState_stow_state estimated_end_effector_force_in_hand_is_set(::bosdyn_msgs::msg::ManipulatorState::_estimated_end_effector_force_in_hand_is_set_type arg)
  {
    msg_.estimated_end_effector_force_in_hand_is_set = std::move(arg);
    return Init_ManipulatorState_stow_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulatorState msg_;
};

class Init_ManipulatorState_estimated_end_effector_force_in_hand
{
public:
  explicit Init_ManipulatorState_estimated_end_effector_force_in_hand(::bosdyn_msgs::msg::ManipulatorState & msg)
  : msg_(msg)
  {}
  Init_ManipulatorState_estimated_end_effector_force_in_hand_is_set estimated_end_effector_force_in_hand(::bosdyn_msgs::msg::ManipulatorState::_estimated_end_effector_force_in_hand_type arg)
  {
    msg_.estimated_end_effector_force_in_hand = std::move(arg);
    return Init_ManipulatorState_estimated_end_effector_force_in_hand_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulatorState msg_;
};

class Init_ManipulatorState_is_gripper_holding_item
{
public:
  explicit Init_ManipulatorState_is_gripper_holding_item(::bosdyn_msgs::msg::ManipulatorState & msg)
  : msg_(msg)
  {}
  Init_ManipulatorState_estimated_end_effector_force_in_hand is_gripper_holding_item(::bosdyn_msgs::msg::ManipulatorState::_is_gripper_holding_item_type arg)
  {
    msg_.is_gripper_holding_item = std::move(arg);
    return Init_ManipulatorState_estimated_end_effector_force_in_hand(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulatorState msg_;
};

class Init_ManipulatorState_gripper_open_percentage
{
public:
  Init_ManipulatorState_gripper_open_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManipulatorState_is_gripper_holding_item gripper_open_percentage(::bosdyn_msgs::msg::ManipulatorState::_gripper_open_percentage_type arg)
  {
    msg_.gripper_open_percentage = std::move(arg);
    return Init_ManipulatorState_is_gripper_holding_item(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulatorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ManipulatorState>()
{
  return bosdyn_msgs::msg::builder::Init_ManipulatorState_gripper_open_percentage();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE__BUILDER_HPP_
