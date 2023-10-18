// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TriggerServiceFaultRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TRIGGER_SERVICE_FAULT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TRIGGER_SERVICE_FAULT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/trigger_service_fault_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TriggerServiceFaultRequest_fault_is_set
{
public:
  explicit Init_TriggerServiceFaultRequest_fault_is_set(::bosdyn_msgs::msg::TriggerServiceFaultRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TriggerServiceFaultRequest fault_is_set(::bosdyn_msgs::msg::TriggerServiceFaultRequest::_fault_is_set_type arg)
  {
    msg_.fault_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TriggerServiceFaultRequest msg_;
};

class Init_TriggerServiceFaultRequest_fault
{
public:
  explicit Init_TriggerServiceFaultRequest_fault(::bosdyn_msgs::msg::TriggerServiceFaultRequest & msg)
  : msg_(msg)
  {}
  Init_TriggerServiceFaultRequest_fault_is_set fault(::bosdyn_msgs::msg::TriggerServiceFaultRequest::_fault_type arg)
  {
    msg_.fault = std::move(arg);
    return Init_TriggerServiceFaultRequest_fault_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TriggerServiceFaultRequest msg_;
};

class Init_TriggerServiceFaultRequest_header_is_set
{
public:
  explicit Init_TriggerServiceFaultRequest_header_is_set(::bosdyn_msgs::msg::TriggerServiceFaultRequest & msg)
  : msg_(msg)
  {}
  Init_TriggerServiceFaultRequest_fault header_is_set(::bosdyn_msgs::msg::TriggerServiceFaultRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_TriggerServiceFaultRequest_fault(msg_);
  }

private:
  ::bosdyn_msgs::msg::TriggerServiceFaultRequest msg_;
};

class Init_TriggerServiceFaultRequest_header
{
public:
  Init_TriggerServiceFaultRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriggerServiceFaultRequest_header_is_set header(::bosdyn_msgs::msg::TriggerServiceFaultRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TriggerServiceFaultRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TriggerServiceFaultRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TriggerServiceFaultRequest>()
{
  return bosdyn_msgs::msg::builder::Init_TriggerServiceFaultRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TRIGGER_SERVICE_FAULT_REQUEST__BUILDER_HPP_
