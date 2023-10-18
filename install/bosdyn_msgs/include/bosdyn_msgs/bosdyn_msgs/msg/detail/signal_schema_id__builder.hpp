// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SignalSchemaId.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_ID__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/signal_schema_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SignalSchemaId_schema_is_set
{
public:
  explicit Init_SignalSchemaId_schema_is_set(::bosdyn_msgs::msg::SignalSchemaId & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SignalSchemaId schema_is_set(::bosdyn_msgs::msg::SignalSchemaId::_schema_is_set_type arg)
  {
    msg_.schema_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalSchemaId msg_;
};

class Init_SignalSchemaId_schema
{
public:
  explicit Init_SignalSchemaId_schema(::bosdyn_msgs::msg::SignalSchemaId & msg)
  : msg_(msg)
  {}
  Init_SignalSchemaId_schema_is_set schema(::bosdyn_msgs::msg::SignalSchemaId::_schema_type arg)
  {
    msg_.schema = std::move(arg);
    return Init_SignalSchemaId_schema_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalSchemaId msg_;
};

class Init_SignalSchemaId_schema_id
{
public:
  Init_SignalSchemaId_schema_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalSchemaId_schema schema_id(::bosdyn_msgs::msg::SignalSchemaId::_schema_id_type arg)
  {
    msg_.schema_id = std::move(arg);
    return Init_SignalSchemaId_schema(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalSchemaId msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SignalSchemaId>()
{
  return bosdyn_msgs::msg::builder::Init_SignalSchemaId_schema_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_ID__BUILDER_HPP_
