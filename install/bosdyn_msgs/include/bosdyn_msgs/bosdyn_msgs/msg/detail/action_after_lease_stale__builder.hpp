// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionAfterLeaseStale.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_LEASE_STALE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_LEASE_STALE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_after_lease_stale__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionAfterLeaseStale_leases
{
public:
  Init_ActionAfterLeaseStale_leases()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::ActionAfterLeaseStale leases(::bosdyn_msgs::msg::ActionAfterLeaseStale::_leases_type arg)
  {
    msg_.leases = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfterLeaseStale msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionAfterLeaseStale>()
{
  return bosdyn_msgs::msg::builder::Init_ActionAfterLeaseStale_leases();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_LEASE_STALE__BUILDER_HPP_
