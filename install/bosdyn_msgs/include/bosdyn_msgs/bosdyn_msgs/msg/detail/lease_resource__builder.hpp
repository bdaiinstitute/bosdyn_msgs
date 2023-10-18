// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LeaseResource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LEASE_RESOURCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LEASE_RESOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/lease_resource__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LeaseResource_is_stale
{
public:
  explicit Init_LeaseResource_is_stale(::bosdyn_msgs::msg::LeaseResource & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LeaseResource is_stale(::bosdyn_msgs::msg::LeaseResource::_is_stale_type arg)
  {
    msg_.is_stale = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseResource msg_;
};

class Init_LeaseResource_lease_owner_is_set
{
public:
  explicit Init_LeaseResource_lease_owner_is_set(::bosdyn_msgs::msg::LeaseResource & msg)
  : msg_(msg)
  {}
  Init_LeaseResource_is_stale lease_owner_is_set(::bosdyn_msgs::msg::LeaseResource::_lease_owner_is_set_type arg)
  {
    msg_.lease_owner_is_set = std::move(arg);
    return Init_LeaseResource_is_stale(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseResource msg_;
};

class Init_LeaseResource_lease_owner
{
public:
  explicit Init_LeaseResource_lease_owner(::bosdyn_msgs::msg::LeaseResource & msg)
  : msg_(msg)
  {}
  Init_LeaseResource_lease_owner_is_set lease_owner(::bosdyn_msgs::msg::LeaseResource::_lease_owner_type arg)
  {
    msg_.lease_owner = std::move(arg);
    return Init_LeaseResource_lease_owner_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseResource msg_;
};

class Init_LeaseResource_lease_is_set
{
public:
  explicit Init_LeaseResource_lease_is_set(::bosdyn_msgs::msg::LeaseResource & msg)
  : msg_(msg)
  {}
  Init_LeaseResource_lease_owner lease_is_set(::bosdyn_msgs::msg::LeaseResource::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_LeaseResource_lease_owner(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseResource msg_;
};

class Init_LeaseResource_lease
{
public:
  explicit Init_LeaseResource_lease(::bosdyn_msgs::msg::LeaseResource & msg)
  : msg_(msg)
  {}
  Init_LeaseResource_lease_is_set lease(::bosdyn_msgs::msg::LeaseResource::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_LeaseResource_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseResource msg_;
};

class Init_LeaseResource_resource
{
public:
  Init_LeaseResource_resource()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LeaseResource_lease resource(::bosdyn_msgs::msg::LeaseResource::_resource_type arg)
  {
    msg_.resource = std::move(arg);
    return Init_LeaseResource_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseResource msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LeaseResource>()
{
  return bosdyn_msgs::msg::builder::Init_LeaseResource_resource();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LEASE_RESOURCE__BUILDER_HPP_
