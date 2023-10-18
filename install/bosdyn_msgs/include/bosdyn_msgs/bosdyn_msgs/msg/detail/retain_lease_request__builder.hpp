// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RetainLeaseRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RETAIN_LEASE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RETAIN_LEASE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/retain_lease_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RetainLeaseRequest_lease_is_set
{
public:
  explicit Init_RetainLeaseRequest_lease_is_set(::bosdyn_msgs::msg::RetainLeaseRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RetainLeaseRequest lease_is_set(::bosdyn_msgs::msg::RetainLeaseRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetainLeaseRequest msg_;
};

class Init_RetainLeaseRequest_lease
{
public:
  explicit Init_RetainLeaseRequest_lease(::bosdyn_msgs::msg::RetainLeaseRequest & msg)
  : msg_(msg)
  {}
  Init_RetainLeaseRequest_lease_is_set lease(::bosdyn_msgs::msg::RetainLeaseRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_RetainLeaseRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetainLeaseRequest msg_;
};

class Init_RetainLeaseRequest_header_is_set
{
public:
  explicit Init_RetainLeaseRequest_header_is_set(::bosdyn_msgs::msg::RetainLeaseRequest & msg)
  : msg_(msg)
  {}
  Init_RetainLeaseRequest_lease header_is_set(::bosdyn_msgs::msg::RetainLeaseRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RetainLeaseRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetainLeaseRequest msg_;
};

class Init_RetainLeaseRequest_header
{
public:
  Init_RetainLeaseRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RetainLeaseRequest_header_is_set header(::bosdyn_msgs::msg::RetainLeaseRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RetainLeaseRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetainLeaseRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RetainLeaseRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RetainLeaseRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RETAIN_LEASE_REQUEST__BUILDER_HPP_
