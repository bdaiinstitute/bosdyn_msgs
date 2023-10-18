// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TakeLeaseResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TAKE_LEASE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TAKE_LEASE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/take_lease_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TakeLeaseResponse_lease_owner_is_set
{
public:
  explicit Init_TakeLeaseResponse_lease_owner_is_set(::bosdyn_msgs::msg::TakeLeaseResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TakeLeaseResponse lease_owner_is_set(::bosdyn_msgs::msg::TakeLeaseResponse::_lease_owner_is_set_type arg)
  {
    msg_.lease_owner_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TakeLeaseResponse msg_;
};

class Init_TakeLeaseResponse_lease_owner
{
public:
  explicit Init_TakeLeaseResponse_lease_owner(::bosdyn_msgs::msg::TakeLeaseResponse & msg)
  : msg_(msg)
  {}
  Init_TakeLeaseResponse_lease_owner_is_set lease_owner(::bosdyn_msgs::msg::TakeLeaseResponse::_lease_owner_type arg)
  {
    msg_.lease_owner = std::move(arg);
    return Init_TakeLeaseResponse_lease_owner_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TakeLeaseResponse msg_;
};

class Init_TakeLeaseResponse_lease_is_set
{
public:
  explicit Init_TakeLeaseResponse_lease_is_set(::bosdyn_msgs::msg::TakeLeaseResponse & msg)
  : msg_(msg)
  {}
  Init_TakeLeaseResponse_lease_owner lease_is_set(::bosdyn_msgs::msg::TakeLeaseResponse::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_TakeLeaseResponse_lease_owner(msg_);
  }

private:
  ::bosdyn_msgs::msg::TakeLeaseResponse msg_;
};

class Init_TakeLeaseResponse_lease
{
public:
  explicit Init_TakeLeaseResponse_lease(::bosdyn_msgs::msg::TakeLeaseResponse & msg)
  : msg_(msg)
  {}
  Init_TakeLeaseResponse_lease_is_set lease(::bosdyn_msgs::msg::TakeLeaseResponse::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_TakeLeaseResponse_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TakeLeaseResponse msg_;
};

class Init_TakeLeaseResponse_status
{
public:
  explicit Init_TakeLeaseResponse_status(::bosdyn_msgs::msg::TakeLeaseResponse & msg)
  : msg_(msg)
  {}
  Init_TakeLeaseResponse_lease status(::bosdyn_msgs::msg::TakeLeaseResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TakeLeaseResponse_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::TakeLeaseResponse msg_;
};

class Init_TakeLeaseResponse_header_is_set
{
public:
  explicit Init_TakeLeaseResponse_header_is_set(::bosdyn_msgs::msg::TakeLeaseResponse & msg)
  : msg_(msg)
  {}
  Init_TakeLeaseResponse_status header_is_set(::bosdyn_msgs::msg::TakeLeaseResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_TakeLeaseResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::TakeLeaseResponse msg_;
};

class Init_TakeLeaseResponse_header
{
public:
  Init_TakeLeaseResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TakeLeaseResponse_header_is_set header(::bosdyn_msgs::msg::TakeLeaseResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TakeLeaseResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TakeLeaseResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TakeLeaseResponse>()
{
  return bosdyn_msgs::msg::builder::Init_TakeLeaseResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TAKE_LEASE_RESPONSE__BUILDER_HPP_
