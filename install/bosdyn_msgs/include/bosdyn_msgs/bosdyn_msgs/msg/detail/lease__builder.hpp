// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Lease.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LEASE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LEASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/lease__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Lease_client_names
{
public:
  explicit Init_Lease_client_names(::bosdyn_msgs::msg::Lease & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Lease client_names(::bosdyn_msgs::msg::Lease::_client_names_type arg)
  {
    msg_.client_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Lease msg_;
};

class Init_Lease_sequence
{
public:
  explicit Init_Lease_sequence(::bosdyn_msgs::msg::Lease & msg)
  : msg_(msg)
  {}
  Init_Lease_client_names sequence(::bosdyn_msgs::msg::Lease::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_Lease_client_names(msg_);
  }

private:
  ::bosdyn_msgs::msg::Lease msg_;
};

class Init_Lease_epoch
{
public:
  explicit Init_Lease_epoch(::bosdyn_msgs::msg::Lease & msg)
  : msg_(msg)
  {}
  Init_Lease_sequence epoch(::bosdyn_msgs::msg::Lease::_epoch_type arg)
  {
    msg_.epoch = std::move(arg);
    return Init_Lease_sequence(msg_);
  }

private:
  ::bosdyn_msgs::msg::Lease msg_;
};

class Init_Lease_resource
{
public:
  Init_Lease_resource()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lease_epoch resource(::bosdyn_msgs::msg::Lease::_resource_type arg)
  {
    msg_.resource = std::move(arg);
    return Init_Lease_epoch(msg_);
  }

private:
  ::bosdyn_msgs::msg::Lease msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Lease>()
{
  return bosdyn_msgs::msg::builder::Init_Lease_resource();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LEASE__BUILDER_HPP_
