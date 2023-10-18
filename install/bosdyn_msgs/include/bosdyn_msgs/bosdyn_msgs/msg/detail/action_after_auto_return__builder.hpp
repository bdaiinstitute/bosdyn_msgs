// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionAfterAutoReturn.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_AUTO_RETURN__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_AUTO_RETURN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_after_auto_return__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionAfterAutoReturn_params_is_set
{
public:
  explicit Init_ActionAfterAutoReturn_params_is_set(::bosdyn_msgs::msg::ActionAfterAutoReturn & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionAfterAutoReturn params_is_set(::bosdyn_msgs::msg::ActionAfterAutoReturn::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfterAutoReturn msg_;
};

class Init_ActionAfterAutoReturn_params
{
public:
  explicit Init_ActionAfterAutoReturn_params(::bosdyn_msgs::msg::ActionAfterAutoReturn & msg)
  : msg_(msg)
  {}
  Init_ActionAfterAutoReturn_params_is_set params(::bosdyn_msgs::msg::ActionAfterAutoReturn::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_ActionAfterAutoReturn_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfterAutoReturn msg_;
};

class Init_ActionAfterAutoReturn_leases
{
public:
  Init_ActionAfterAutoReturn_leases()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionAfterAutoReturn_params leases(::bosdyn_msgs::msg::ActionAfterAutoReturn::_leases_type arg)
  {
    msg_.leases = std::move(arg);
    return Init_ActionAfterAutoReturn_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfterAutoReturn msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionAfterAutoReturn>()
{
  return bosdyn_msgs::msg::builder::Init_ActionAfterAutoReturn_leases();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_AUTO_RETURN__BUILDER_HPP_
