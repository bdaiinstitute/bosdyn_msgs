// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SignalSchema.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/signal_schema__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SignalSchema_schema_name
{
public:
  explicit Init_SignalSchema_schema_name(::bosdyn_msgs::msg::SignalSchema & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SignalSchema schema_name(::bosdyn_msgs::msg::SignalSchema::_schema_name_type arg)
  {
    msg_.schema_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalSchema msg_;
};

class Init_SignalSchema_vars
{
public:
  Init_SignalSchema_vars()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalSchema_schema_name vars(::bosdyn_msgs::msg::SignalSchema::_vars_type arg)
  {
    msg_.vars = std::move(arg);
    return Init_SignalSchema_schema_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalSchema msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SignalSchema>()
{
  return bosdyn_msgs::msg::builder::Init_SignalSchema_vars();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA__BUILDER_HPP_
