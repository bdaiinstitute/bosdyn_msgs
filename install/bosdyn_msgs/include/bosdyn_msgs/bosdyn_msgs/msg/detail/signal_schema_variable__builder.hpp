// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SignalSchemaVariable.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_VARIABLE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_VARIABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/signal_schema_variable__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SignalSchemaVariable_is_time
{
public:
  explicit Init_SignalSchemaVariable_is_time(::bosdyn_msgs::msg::SignalSchemaVariable & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SignalSchemaVariable is_time(::bosdyn_msgs::msg::SignalSchemaVariable::_is_time_type arg)
  {
    msg_.is_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalSchemaVariable msg_;
};

class Init_SignalSchemaVariable_type
{
public:
  explicit Init_SignalSchemaVariable_type(::bosdyn_msgs::msg::SignalSchemaVariable & msg)
  : msg_(msg)
  {}
  Init_SignalSchemaVariable_is_time type(::bosdyn_msgs::msg::SignalSchemaVariable::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SignalSchemaVariable_is_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalSchemaVariable msg_;
};

class Init_SignalSchemaVariable_name
{
public:
  Init_SignalSchemaVariable_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalSchemaVariable_type name(::bosdyn_msgs::msg::SignalSchemaVariable::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SignalSchemaVariable_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalSchemaVariable msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SignalSchemaVariable>()
{
  return bosdyn_msgs::msg::builder::Init_SignalSchemaVariable_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_VARIABLE__BUILDER_HPP_
