// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TARGET__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Target_relocalize_is_set
{
public:
  explicit Init_Target_relocalize_is_set(::bosdyn_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Target relocalize_is_set(::bosdyn_msgs::msg::Target::_relocalize_is_set_type arg)
  {
    msg_.relocalize_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Target msg_;
};

class Init_Target_relocalize
{
public:
  explicit Init_Target_relocalize(::bosdyn_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_relocalize_is_set relocalize(::bosdyn_msgs::msg::Target::_relocalize_type arg)
  {
    msg_.relocalize = std::move(arg);
    return Init_Target_relocalize_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Target msg_;
};

class Init_Target_target
{
public:
  Init_Target_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Target_relocalize target(::bosdyn_msgs::msg::Target::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_Target_relocalize(msg_);
  }

private:
  ::bosdyn_msgs::msg::Target msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Target>()
{
  return bosdyn_msgs::msg::builder::Init_Target_target();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TARGET__BUILDER_HPP_
