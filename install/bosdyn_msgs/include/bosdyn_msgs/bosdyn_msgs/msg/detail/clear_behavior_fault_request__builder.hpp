// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ClearBehaviorFaultRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/clear_behavior_fault_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ClearBehaviorFaultRequest_behavior_fault_id
{
public:
  explicit Init_ClearBehaviorFaultRequest_behavior_fault_id(::bosdyn_msgs::msg::ClearBehaviorFaultRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ClearBehaviorFaultRequest behavior_fault_id(::bosdyn_msgs::msg::ClearBehaviorFaultRequest::_behavior_fault_id_type arg)
  {
    msg_.behavior_fault_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaultRequest msg_;
};

class Init_ClearBehaviorFaultRequest_lease_is_set
{
public:
  explicit Init_ClearBehaviorFaultRequest_lease_is_set(::bosdyn_msgs::msg::ClearBehaviorFaultRequest & msg)
  : msg_(msg)
  {}
  Init_ClearBehaviorFaultRequest_behavior_fault_id lease_is_set(::bosdyn_msgs::msg::ClearBehaviorFaultRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_ClearBehaviorFaultRequest_behavior_fault_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaultRequest msg_;
};

class Init_ClearBehaviorFaultRequest_lease
{
public:
  explicit Init_ClearBehaviorFaultRequest_lease(::bosdyn_msgs::msg::ClearBehaviorFaultRequest & msg)
  : msg_(msg)
  {}
  Init_ClearBehaviorFaultRequest_lease_is_set lease(::bosdyn_msgs::msg::ClearBehaviorFaultRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_ClearBehaviorFaultRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaultRequest msg_;
};

class Init_ClearBehaviorFaultRequest_header_is_set
{
public:
  explicit Init_ClearBehaviorFaultRequest_header_is_set(::bosdyn_msgs::msg::ClearBehaviorFaultRequest & msg)
  : msg_(msg)
  {}
  Init_ClearBehaviorFaultRequest_lease header_is_set(::bosdyn_msgs::msg::ClearBehaviorFaultRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ClearBehaviorFaultRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaultRequest msg_;
};

class Init_ClearBehaviorFaultRequest_header
{
public:
  Init_ClearBehaviorFaultRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClearBehaviorFaultRequest_header_is_set header(::bosdyn_msgs::msg::ClearBehaviorFaultRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ClearBehaviorFaultRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaultRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ClearBehaviorFaultRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ClearBehaviorFaultRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULT_REQUEST__BUILDER_HPP_
