// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmJointPosition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_POSITION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_joint_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmJointPosition_wr1_is_set
{
public:
  explicit Init_ArmJointPosition_wr1_is_set(::bosdyn_msgs::msg::ArmJointPosition & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmJointPosition wr1_is_set(::bosdyn_msgs::msg::ArmJointPosition::_wr1_is_set_type arg)
  {
    msg_.wr1_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointPosition msg_;
};

class Init_ArmJointPosition_wr1
{
public:
  explicit Init_ArmJointPosition_wr1(::bosdyn_msgs::msg::ArmJointPosition & msg)
  : msg_(msg)
  {}
  Init_ArmJointPosition_wr1_is_set wr1(::bosdyn_msgs::msg::ArmJointPosition::_wr1_type arg)
  {
    msg_.wr1 = std::move(arg);
    return Init_ArmJointPosition_wr1_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointPosition msg_;
};

class Init_ArmJointPosition_wr0_is_set
{
public:
  explicit Init_ArmJointPosition_wr0_is_set(::bosdyn_msgs::msg::ArmJointPosition & msg)
  : msg_(msg)
  {}
  Init_ArmJointPosition_wr1 wr0_is_set(::bosdyn_msgs::msg::ArmJointPosition::_wr0_is_set_type arg)
  {
    msg_.wr0_is_set = std::move(arg);
    return Init_ArmJointPosition_wr1(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointPosition msg_;
};

class Init_ArmJointPosition_wr0
{
public:
  explicit Init_ArmJointPosition_wr0(::bosdyn_msgs::msg::ArmJointPosition & msg)
  : msg_(msg)
  {}
  Init_ArmJointPosition_wr0_is_set wr0(::bosdyn_msgs::msg::ArmJointPosition::_wr0_type arg)
  {
    msg_.wr0 = std::move(arg);
    return Init_ArmJointPosition_wr0_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointPosition msg_;
};

class Init_ArmJointPosition_el1_is_set
{
public:
  explicit Init_ArmJointPosition_el1_is_set(::bosdyn_msgs::msg::ArmJointPosition & msg)
  : msg_(msg)
  {}
  Init_ArmJointPosition_wr0 el1_is_set(::bosdyn_msgs::msg::ArmJointPosition::_el1_is_set_type arg)
  {
    msg_.el1_is_set = std::move(arg);
    return Init_ArmJointPosition_wr0(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointPosition msg_;
};

class Init_ArmJointPosition_el1
{
public:
  explicit Init_ArmJointPosition_el1(::bosdyn_msgs::msg::ArmJointPosition & msg)
  : msg_(msg)
  {}
  Init_ArmJointPosition_el1_is_set el1(::bosdyn_msgs::msg::ArmJointPosition::_el1_type arg)
  {
    msg_.el1 = std::move(arg);
    return Init_ArmJointPosition_el1_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointPosition msg_;
};

class Init_ArmJointPosition_el0_is_set
{
public:
  explicit Init_ArmJointPosition_el0_is_set(::bosdyn_msgs::msg::ArmJointPosition & msg)
  : msg_(msg)
  {}
  Init_ArmJointPosition_el1 el0_is_set(::bosdyn_msgs::msg::ArmJointPosition::_el0_is_set_type arg)
  {
    msg_.el0_is_set = std::move(arg);
    return Init_ArmJointPosition_el1(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointPosition msg_;
};

class Init_ArmJointPosition_el0
{
public:
  explicit Init_ArmJointPosition_el0(::bosdyn_msgs::msg::ArmJointPosition & msg)
  : msg_(msg)
  {}
  Init_ArmJointPosition_el0_is_set el0(::bosdyn_msgs::msg::ArmJointPosition::_el0_type arg)
  {
    msg_.el0 = std::move(arg);
    return Init_ArmJointPosition_el0_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointPosition msg_;
};

class Init_ArmJointPosition_sh1_is_set
{
public:
  explicit Init_ArmJointPosition_sh1_is_set(::bosdyn_msgs::msg::ArmJointPosition & msg)
  : msg_(msg)
  {}
  Init_ArmJointPosition_el0 sh1_is_set(::bosdyn_msgs::msg::ArmJointPosition::_sh1_is_set_type arg)
  {
    msg_.sh1_is_set = std::move(arg);
    return Init_ArmJointPosition_el0(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointPosition msg_;
};

class Init_ArmJointPosition_sh1
{
public:
  explicit Init_ArmJointPosition_sh1(::bosdyn_msgs::msg::ArmJointPosition & msg)
  : msg_(msg)
  {}
  Init_ArmJointPosition_sh1_is_set sh1(::bosdyn_msgs::msg::ArmJointPosition::_sh1_type arg)
  {
    msg_.sh1 = std::move(arg);
    return Init_ArmJointPosition_sh1_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointPosition msg_;
};

class Init_ArmJointPosition_sh0_is_set
{
public:
  explicit Init_ArmJointPosition_sh0_is_set(::bosdyn_msgs::msg::ArmJointPosition & msg)
  : msg_(msg)
  {}
  Init_ArmJointPosition_sh1 sh0_is_set(::bosdyn_msgs::msg::ArmJointPosition::_sh0_is_set_type arg)
  {
    msg_.sh0_is_set = std::move(arg);
    return Init_ArmJointPosition_sh1(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointPosition msg_;
};

class Init_ArmJointPosition_sh0
{
public:
  Init_ArmJointPosition_sh0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmJointPosition_sh0_is_set sh0(::bosdyn_msgs::msg::ArmJointPosition::_sh0_type arg)
  {
    msg_.sh0 = std::move(arg);
    return Init_ArmJointPosition_sh0_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmJointPosition>()
{
  return bosdyn_msgs::msg::builder::Init_ArmJointPosition_sh0();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_POSITION__BUILDER_HPP_
