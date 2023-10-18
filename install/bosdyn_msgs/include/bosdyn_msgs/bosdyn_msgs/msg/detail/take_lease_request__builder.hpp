// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TakeLeaseRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TAKE_LEASE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TAKE_LEASE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/take_lease_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TakeLeaseRequest_resource
{
public:
  explicit Init_TakeLeaseRequest_resource(::bosdyn_msgs::msg::TakeLeaseRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TakeLeaseRequest resource(::bosdyn_msgs::msg::TakeLeaseRequest::_resource_type arg)
  {
    msg_.resource = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TakeLeaseRequest msg_;
};

class Init_TakeLeaseRequest_header_is_set
{
public:
  explicit Init_TakeLeaseRequest_header_is_set(::bosdyn_msgs::msg::TakeLeaseRequest & msg)
  : msg_(msg)
  {}
  Init_TakeLeaseRequest_resource header_is_set(::bosdyn_msgs::msg::TakeLeaseRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_TakeLeaseRequest_resource(msg_);
  }

private:
  ::bosdyn_msgs::msg::TakeLeaseRequest msg_;
};

class Init_TakeLeaseRequest_header
{
public:
  Init_TakeLeaseRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TakeLeaseRequest_header_is_set header(::bosdyn_msgs::msg::TakeLeaseRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TakeLeaseRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TakeLeaseRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TakeLeaseRequest>()
{
  return bosdyn_msgs::msg::builder::Init_TakeLeaseRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TAKE_LEASE_REQUEST__BUILDER_HPP_
