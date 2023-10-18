// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AcquireLeaseResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_LEASE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_LEASE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/acquire_lease_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AcquireLeaseResponse_lease_owner_is_set
{
public:
  explicit Init_AcquireLeaseResponse_lease_owner_is_set(::bosdyn_msgs::msg::AcquireLeaseResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AcquireLeaseResponse lease_owner_is_set(::bosdyn_msgs::msg::AcquireLeaseResponse::_lease_owner_is_set_type arg)
  {
    msg_.lease_owner_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireLeaseResponse msg_;
};

class Init_AcquireLeaseResponse_lease_owner
{
public:
  explicit Init_AcquireLeaseResponse_lease_owner(::bosdyn_msgs::msg::AcquireLeaseResponse & msg)
  : msg_(msg)
  {}
  Init_AcquireLeaseResponse_lease_owner_is_set lease_owner(::bosdyn_msgs::msg::AcquireLeaseResponse::_lease_owner_type arg)
  {
    msg_.lease_owner = std::move(arg);
    return Init_AcquireLeaseResponse_lease_owner_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireLeaseResponse msg_;
};

class Init_AcquireLeaseResponse_lease_is_set
{
public:
  explicit Init_AcquireLeaseResponse_lease_is_set(::bosdyn_msgs::msg::AcquireLeaseResponse & msg)
  : msg_(msg)
  {}
  Init_AcquireLeaseResponse_lease_owner lease_is_set(::bosdyn_msgs::msg::AcquireLeaseResponse::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_AcquireLeaseResponse_lease_owner(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireLeaseResponse msg_;
};

class Init_AcquireLeaseResponse_lease
{
public:
  explicit Init_AcquireLeaseResponse_lease(::bosdyn_msgs::msg::AcquireLeaseResponse & msg)
  : msg_(msg)
  {}
  Init_AcquireLeaseResponse_lease_is_set lease(::bosdyn_msgs::msg::AcquireLeaseResponse::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_AcquireLeaseResponse_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireLeaseResponse msg_;
};

class Init_AcquireLeaseResponse_status
{
public:
  explicit Init_AcquireLeaseResponse_status(::bosdyn_msgs::msg::AcquireLeaseResponse & msg)
  : msg_(msg)
  {}
  Init_AcquireLeaseResponse_lease status(::bosdyn_msgs::msg::AcquireLeaseResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AcquireLeaseResponse_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireLeaseResponse msg_;
};

class Init_AcquireLeaseResponse_header_is_set
{
public:
  explicit Init_AcquireLeaseResponse_header_is_set(::bosdyn_msgs::msg::AcquireLeaseResponse & msg)
  : msg_(msg)
  {}
  Init_AcquireLeaseResponse_status header_is_set(::bosdyn_msgs::msg::AcquireLeaseResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_AcquireLeaseResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireLeaseResponse msg_;
};

class Init_AcquireLeaseResponse_header
{
public:
  Init_AcquireLeaseResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquireLeaseResponse_header_is_set header(::bosdyn_msgs::msg::AcquireLeaseResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcquireLeaseResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireLeaseResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AcquireLeaseResponse>()
{
  return bosdyn_msgs::msg::builder::Init_AcquireLeaseResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_LEASE_RESPONSE__BUILDER_HPP_
