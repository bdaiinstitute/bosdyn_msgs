// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Policy.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POLICY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POLICY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/policy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Policy_user_id
{
public:
  explicit Init_Policy_user_id(::bosdyn_msgs::msg::Policy & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Policy user_id(::bosdyn_msgs::msg::Policy::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Policy msg_;
};

class Init_Policy_associated_leases
{
public:
  explicit Init_Policy_associated_leases(::bosdyn_msgs::msg::Policy & msg)
  : msg_(msg)
  {}
  Init_Policy_user_id associated_leases(::bosdyn_msgs::msg::Policy::_associated_leases_type arg)
  {
    msg_.associated_leases = std::move(arg);
    return Init_Policy_user_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::Policy msg_;
};

class Init_Policy_actions
{
public:
  explicit Init_Policy_actions(::bosdyn_msgs::msg::Policy & msg)
  : msg_(msg)
  {}
  Init_Policy_associated_leases actions(::bosdyn_msgs::msg::Policy::_actions_type arg)
  {
    msg_.actions = std::move(arg);
    return Init_Policy_associated_leases(msg_);
  }

private:
  ::bosdyn_msgs::msg::Policy msg_;
};

class Init_Policy_name
{
public:
  Init_Policy_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Policy_actions name(::bosdyn_msgs::msg::Policy::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Policy_actions(msg_);
  }

private:
  ::bosdyn_msgs::msg::Policy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Policy>()
{
  return bosdyn_msgs::msg::builder::Init_Policy_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POLICY__BUILDER_HPP_
