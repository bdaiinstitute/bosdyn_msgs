// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Wrench.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WRENCH__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WRENCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/wrench__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Wrench_torque_is_set
{
public:
  explicit Init_Wrench_torque_is_set(::bosdyn_msgs::msg::Wrench & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Wrench torque_is_set(::bosdyn_msgs::msg::Wrench::_torque_is_set_type arg)
  {
    msg_.torque_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Wrench msg_;
};

class Init_Wrench_torque
{
public:
  explicit Init_Wrench_torque(::bosdyn_msgs::msg::Wrench & msg)
  : msg_(msg)
  {}
  Init_Wrench_torque_is_set torque(::bosdyn_msgs::msg::Wrench::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_Wrench_torque_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Wrench msg_;
};

class Init_Wrench_force_is_set
{
public:
  explicit Init_Wrench_force_is_set(::bosdyn_msgs::msg::Wrench & msg)
  : msg_(msg)
  {}
  Init_Wrench_torque force_is_set(::bosdyn_msgs::msg::Wrench::_force_is_set_type arg)
  {
    msg_.force_is_set = std::move(arg);
    return Init_Wrench_torque(msg_);
  }

private:
  ::bosdyn_msgs::msg::Wrench msg_;
};

class Init_Wrench_force
{
public:
  Init_Wrench_force()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wrench_force_is_set force(::bosdyn_msgs::msg::Wrench::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_Wrench_force_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Wrench msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Wrench>()
{
  return bosdyn_msgs::msg::builder::Init_Wrench_force();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WRENCH__BUILDER_HPP_
