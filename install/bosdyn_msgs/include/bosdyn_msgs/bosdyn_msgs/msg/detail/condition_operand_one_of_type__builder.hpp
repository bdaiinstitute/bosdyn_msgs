// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ConditionOperandOneOfType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONDITION_OPERAND_ONE_OF_TYPE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONDITION_OPERAND_ONE_OF_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/condition_operand_one_of_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ConditionOperandOneOfType_type_choice
{
public:
  explicit Init_ConditionOperandOneOfType_type_choice(::bosdyn_msgs::msg::ConditionOperandOneOfType & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ConditionOperandOneOfType type_choice(::bosdyn_msgs::msg::ConditionOperandOneOfType::_type_choice_type arg)
  {
    msg_.type_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConditionOperandOneOfType msg_;
};

class Init_ConditionOperandOneOfType_constant
{
public:
  explicit Init_ConditionOperandOneOfType_constant(::bosdyn_msgs::msg::ConditionOperandOneOfType & msg)
  : msg_(msg)
  {}
  Init_ConditionOperandOneOfType_type_choice constant(::bosdyn_msgs::msg::ConditionOperandOneOfType::_constant_type arg)
  {
    msg_.constant = std::move(arg);
    return Init_ConditionOperandOneOfType_type_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConditionOperandOneOfType msg_;
};

class Init_ConditionOperandOneOfType_var
{
public:
  Init_ConditionOperandOneOfType_var()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConditionOperandOneOfType_constant var(::bosdyn_msgs::msg::ConditionOperandOneOfType::_var_type arg)
  {
    msg_.var = std::move(arg);
    return Init_ConditionOperandOneOfType_constant(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConditionOperandOneOfType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ConditionOperandOneOfType>()
{
  return bosdyn_msgs::msg::builder::Init_ConditionOperandOneOfType_var();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONDITION_OPERAND_ONE_OF_TYPE__BUILDER_HPP_
