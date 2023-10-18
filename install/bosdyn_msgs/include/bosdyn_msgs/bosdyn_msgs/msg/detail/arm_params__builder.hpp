// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmParams_disable_body_force_limiter_is_set
{
public:
  explicit Init_ArmParams_disable_body_force_limiter_is_set(::bosdyn_msgs::msg::ArmParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmParams disable_body_force_limiter_is_set(::bosdyn_msgs::msg::ArmParams::_disable_body_force_limiter_is_set_type arg)
  {
    msg_.disable_body_force_limiter_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmParams msg_;
};

class Init_ArmParams_disable_body_force_limiter
{
public:
  Init_ArmParams_disable_body_force_limiter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmParams_disable_body_force_limiter_is_set disable_body_force_limiter(::bosdyn_msgs::msg::ArmParams::_disable_body_force_limiter_type arg)
  {
    msg_.disable_body_force_limiter = std::move(arg);
    return Init_ArmParams_disable_body_force_limiter_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmParams>()
{
  return bosdyn_msgs::msg::builder::Init_ArmParams_disable_body_force_limiter();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_PARAMS__BUILDER_HPP_
