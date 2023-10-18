// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ReturnLeaseRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RETURN_LEASE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RETURN_LEASE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/return_lease_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ReturnLeaseRequest_lease_is_set
{
public:
  explicit Init_ReturnLeaseRequest_lease_is_set(::bosdyn_msgs::msg::ReturnLeaseRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ReturnLeaseRequest lease_is_set(::bosdyn_msgs::msg::ReturnLeaseRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ReturnLeaseRequest msg_;
};

class Init_ReturnLeaseRequest_lease
{
public:
  explicit Init_ReturnLeaseRequest_lease(::bosdyn_msgs::msg::ReturnLeaseRequest & msg)
  : msg_(msg)
  {}
  Init_ReturnLeaseRequest_lease_is_set lease(::bosdyn_msgs::msg::ReturnLeaseRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_ReturnLeaseRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ReturnLeaseRequest msg_;
};

class Init_ReturnLeaseRequest_header_is_set
{
public:
  explicit Init_ReturnLeaseRequest_header_is_set(::bosdyn_msgs::msg::ReturnLeaseRequest & msg)
  : msg_(msg)
  {}
  Init_ReturnLeaseRequest_lease header_is_set(::bosdyn_msgs::msg::ReturnLeaseRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ReturnLeaseRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::ReturnLeaseRequest msg_;
};

class Init_ReturnLeaseRequest_header
{
public:
  Init_ReturnLeaseRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReturnLeaseRequest_header_is_set header(::bosdyn_msgs::msg::ReturnLeaseRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReturnLeaseRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ReturnLeaseRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ReturnLeaseRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ReturnLeaseRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RETURN_LEASE_REQUEST__BUILDER_HPP_
