// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmJointVelocity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_VELOCITY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_joint_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmJointVelocity_wr1_is_set
{
public:
  explicit Init_ArmJointVelocity_wr1_is_set(::bosdyn_msgs::msg::ArmJointVelocity & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmJointVelocity wr1_is_set(::bosdyn_msgs::msg::ArmJointVelocity::_wr1_is_set_type arg)
  {
    msg_.wr1_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointVelocity msg_;
};

class Init_ArmJointVelocity_wr1
{
public:
  explicit Init_ArmJointVelocity_wr1(::bosdyn_msgs::msg::ArmJointVelocity & msg)
  : msg_(msg)
  {}
  Init_ArmJointVelocity_wr1_is_set wr1(::bosdyn_msgs::msg::ArmJointVelocity::_wr1_type arg)
  {
    msg_.wr1 = std::move(arg);
    return Init_ArmJointVelocity_wr1_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointVelocity msg_;
};

class Init_ArmJointVelocity_wr0_is_set
{
public:
  explicit Init_ArmJointVelocity_wr0_is_set(::bosdyn_msgs::msg::ArmJointVelocity & msg)
  : msg_(msg)
  {}
  Init_ArmJointVelocity_wr1 wr0_is_set(::bosdyn_msgs::msg::ArmJointVelocity::_wr0_is_set_type arg)
  {
    msg_.wr0_is_set = std::move(arg);
    return Init_ArmJointVelocity_wr1(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointVelocity msg_;
};

class Init_ArmJointVelocity_wr0
{
public:
  explicit Init_ArmJointVelocity_wr0(::bosdyn_msgs::msg::ArmJointVelocity & msg)
  : msg_(msg)
  {}
  Init_ArmJointVelocity_wr0_is_set wr0(::bosdyn_msgs::msg::ArmJointVelocity::_wr0_type arg)
  {
    msg_.wr0 = std::move(arg);
    return Init_ArmJointVelocity_wr0_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointVelocity msg_;
};

class Init_ArmJointVelocity_el1_is_set
{
public:
  explicit Init_ArmJointVelocity_el1_is_set(::bosdyn_msgs::msg::ArmJointVelocity & msg)
  : msg_(msg)
  {}
  Init_ArmJointVelocity_wr0 el1_is_set(::bosdyn_msgs::msg::ArmJointVelocity::_el1_is_set_type arg)
  {
    msg_.el1_is_set = std::move(arg);
    return Init_ArmJointVelocity_wr0(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointVelocity msg_;
};

class Init_ArmJointVelocity_el1
{
public:
  explicit Init_ArmJointVelocity_el1(::bosdyn_msgs::msg::ArmJointVelocity & msg)
  : msg_(msg)
  {}
  Init_ArmJointVelocity_el1_is_set el1(::bosdyn_msgs::msg::ArmJointVelocity::_el1_type arg)
  {
    msg_.el1 = std::move(arg);
    return Init_ArmJointVelocity_el1_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointVelocity msg_;
};

class Init_ArmJointVelocity_el0_is_set
{
public:
  explicit Init_ArmJointVelocity_el0_is_set(::bosdyn_msgs::msg::ArmJointVelocity & msg)
  : msg_(msg)
  {}
  Init_ArmJointVelocity_el1 el0_is_set(::bosdyn_msgs::msg::ArmJointVelocity::_el0_is_set_type arg)
  {
    msg_.el0_is_set = std::move(arg);
    return Init_ArmJointVelocity_el1(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointVelocity msg_;
};

class Init_ArmJointVelocity_el0
{
public:
  explicit Init_ArmJointVelocity_el0(::bosdyn_msgs::msg::ArmJointVelocity & msg)
  : msg_(msg)
  {}
  Init_ArmJointVelocity_el0_is_set el0(::bosdyn_msgs::msg::ArmJointVelocity::_el0_type arg)
  {
    msg_.el0 = std::move(arg);
    return Init_ArmJointVelocity_el0_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointVelocity msg_;
};

class Init_ArmJointVelocity_sh1_is_set
{
public:
  explicit Init_ArmJointVelocity_sh1_is_set(::bosdyn_msgs::msg::ArmJointVelocity & msg)
  : msg_(msg)
  {}
  Init_ArmJointVelocity_el0 sh1_is_set(::bosdyn_msgs::msg::ArmJointVelocity::_sh1_is_set_type arg)
  {
    msg_.sh1_is_set = std::move(arg);
    return Init_ArmJointVelocity_el0(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointVelocity msg_;
};

class Init_ArmJointVelocity_sh1
{
public:
  explicit Init_ArmJointVelocity_sh1(::bosdyn_msgs::msg::ArmJointVelocity & msg)
  : msg_(msg)
  {}
  Init_ArmJointVelocity_sh1_is_set sh1(::bosdyn_msgs::msg::ArmJointVelocity::_sh1_type arg)
  {
    msg_.sh1 = std::move(arg);
    return Init_ArmJointVelocity_sh1_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointVelocity msg_;
};

class Init_ArmJointVelocity_sh0_is_set
{
public:
  explicit Init_ArmJointVelocity_sh0_is_set(::bosdyn_msgs::msg::ArmJointVelocity & msg)
  : msg_(msg)
  {}
  Init_ArmJointVelocity_sh1 sh0_is_set(::bosdyn_msgs::msg::ArmJointVelocity::_sh0_is_set_type arg)
  {
    msg_.sh0_is_set = std::move(arg);
    return Init_ArmJointVelocity_sh1(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointVelocity msg_;
};

class Init_ArmJointVelocity_sh0
{
public:
  Init_ArmJointVelocity_sh0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmJointVelocity_sh0_is_set sh0(::bosdyn_msgs::msg::ArmJointVelocity::_sh0_type arg)
  {
    msg_.sh0 = std::move(arg);
    return Init_ArmJointVelocity_sh0_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmJointVelocity>()
{
  return bosdyn_msgs::msg::builder::Init_ArmJointVelocity_sh0();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_VELOCITY__BUILDER_HPP_
