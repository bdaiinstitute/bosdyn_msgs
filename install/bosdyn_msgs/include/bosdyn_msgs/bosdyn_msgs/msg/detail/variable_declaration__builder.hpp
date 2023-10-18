// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/VariableDeclaration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VARIABLE_DECLARATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VARIABLE_DECLARATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/variable_declaration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_VariableDeclaration_type
{
public:
  explicit Init_VariableDeclaration_type(::bosdyn_msgs::msg::VariableDeclaration & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::VariableDeclaration type(::bosdyn_msgs::msg::VariableDeclaration::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::VariableDeclaration msg_;
};

class Init_VariableDeclaration_name
{
public:
  Init_VariableDeclaration_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VariableDeclaration_type name(::bosdyn_msgs::msg::VariableDeclaration::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_VariableDeclaration_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::VariableDeclaration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::VariableDeclaration>()
{
  return bosdyn_msgs::msg::builder::Init_VariableDeclaration_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VARIABLE_DECLARATION__BUILDER_HPP_
