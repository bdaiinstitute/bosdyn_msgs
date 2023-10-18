// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AcquireLeaseRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_LEASE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_LEASE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/acquire_lease_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AcquireLeaseRequest_resource
{
public:
  explicit Init_AcquireLeaseRequest_resource(::bosdyn_msgs::msg::AcquireLeaseRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AcquireLeaseRequest resource(::bosdyn_msgs::msg::AcquireLeaseRequest::_resource_type arg)
  {
    msg_.resource = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireLeaseRequest msg_;
};

class Init_AcquireLeaseRequest_header_is_set
{
public:
  explicit Init_AcquireLeaseRequest_header_is_set(::bosdyn_msgs::msg::AcquireLeaseRequest & msg)
  : msg_(msg)
  {}
  Init_AcquireLeaseRequest_resource header_is_set(::bosdyn_msgs::msg::AcquireLeaseRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_AcquireLeaseRequest_resource(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireLeaseRequest msg_;
};

class Init_AcquireLeaseRequest_header
{
public:
  Init_AcquireLeaseRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquireLeaseRequest_header_is_set header(::bosdyn_msgs::msg::AcquireLeaseRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcquireLeaseRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireLeaseRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AcquireLeaseRequest>()
{
  return bosdyn_msgs::msg::builder::Init_AcquireLeaseRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_LEASE_REQUEST__BUILDER_HPP_
