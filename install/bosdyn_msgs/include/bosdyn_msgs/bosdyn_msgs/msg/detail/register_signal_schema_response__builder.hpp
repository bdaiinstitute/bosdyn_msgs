// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RegisterSignalSchemaResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGISTER_SIGNAL_SCHEMA_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGISTER_SIGNAL_SCHEMA_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/register_signal_schema_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RegisterSignalSchemaResponse_schema_id
{
public:
  explicit Init_RegisterSignalSchemaResponse_schema_id(::bosdyn_msgs::msg::RegisterSignalSchemaResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RegisterSignalSchemaResponse schema_id(::bosdyn_msgs::msg::RegisterSignalSchemaResponse::_schema_id_type arg)
  {
    msg_.schema_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterSignalSchemaResponse msg_;
};

class Init_RegisterSignalSchemaResponse_header_is_set
{
public:
  explicit Init_RegisterSignalSchemaResponse_header_is_set(::bosdyn_msgs::msg::RegisterSignalSchemaResponse & msg)
  : msg_(msg)
  {}
  Init_RegisterSignalSchemaResponse_schema_id header_is_set(::bosdyn_msgs::msg::RegisterSignalSchemaResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RegisterSignalSchemaResponse_schema_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterSignalSchemaResponse msg_;
};

class Init_RegisterSignalSchemaResponse_header
{
public:
  Init_RegisterSignalSchemaResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterSignalSchemaResponse_header_is_set header(::bosdyn_msgs::msg::RegisterSignalSchemaResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RegisterSignalSchemaResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterSignalSchemaResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RegisterSignalSchemaResponse>()
{
  return bosdyn_msgs::msg::builder::Init_RegisterSignalSchemaResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGISTER_SIGNAL_SCHEMA_RESPONSE__BUILDER_HPP_
