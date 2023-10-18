// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RegisterSignalSchemaRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGISTER_SIGNAL_SCHEMA_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGISTER_SIGNAL_SCHEMA_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/register_signal_schema_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RegisterSignalSchemaRequest_schema_is_set
{
public:
  explicit Init_RegisterSignalSchemaRequest_schema_is_set(::bosdyn_msgs::msg::RegisterSignalSchemaRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RegisterSignalSchemaRequest schema_is_set(::bosdyn_msgs::msg::RegisterSignalSchemaRequest::_schema_is_set_type arg)
  {
    msg_.schema_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterSignalSchemaRequest msg_;
};

class Init_RegisterSignalSchemaRequest_schema
{
public:
  explicit Init_RegisterSignalSchemaRequest_schema(::bosdyn_msgs::msg::RegisterSignalSchemaRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterSignalSchemaRequest_schema_is_set schema(::bosdyn_msgs::msg::RegisterSignalSchemaRequest::_schema_type arg)
  {
    msg_.schema = std::move(arg);
    return Init_RegisterSignalSchemaRequest_schema_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterSignalSchemaRequest msg_;
};

class Init_RegisterSignalSchemaRequest_header_is_set
{
public:
  explicit Init_RegisterSignalSchemaRequest_header_is_set(::bosdyn_msgs::msg::RegisterSignalSchemaRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterSignalSchemaRequest_schema header_is_set(::bosdyn_msgs::msg::RegisterSignalSchemaRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RegisterSignalSchemaRequest_schema(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterSignalSchemaRequest msg_;
};

class Init_RegisterSignalSchemaRequest_header
{
public:
  Init_RegisterSignalSchemaRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterSignalSchemaRequest_header_is_set header(::bosdyn_msgs::msg::RegisterSignalSchemaRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RegisterSignalSchemaRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterSignalSchemaRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RegisterSignalSchemaRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RegisterSignalSchemaRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGISTER_SIGNAL_SCHEMA_REQUEST__BUILDER_HPP_
