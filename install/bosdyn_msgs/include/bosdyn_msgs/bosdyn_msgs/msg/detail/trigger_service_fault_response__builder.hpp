// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TriggerServiceFaultResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TRIGGER_SERVICE_FAULT_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TRIGGER_SERVICE_FAULT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/trigger_service_fault_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TriggerServiceFaultResponse_status
{
public:
  explicit Init_TriggerServiceFaultResponse_status(::bosdyn_msgs::msg::TriggerServiceFaultResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TriggerServiceFaultResponse status(::bosdyn_msgs::msg::TriggerServiceFaultResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TriggerServiceFaultResponse msg_;
};

class Init_TriggerServiceFaultResponse_header_is_set
{
public:
  explicit Init_TriggerServiceFaultResponse_header_is_set(::bosdyn_msgs::msg::TriggerServiceFaultResponse & msg)
  : msg_(msg)
  {}
  Init_TriggerServiceFaultResponse_status header_is_set(::bosdyn_msgs::msg::TriggerServiceFaultResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_TriggerServiceFaultResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::TriggerServiceFaultResponse msg_;
};

class Init_TriggerServiceFaultResponse_header
{
public:
  Init_TriggerServiceFaultResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriggerServiceFaultResponse_header_is_set header(::bosdyn_msgs::msg::TriggerServiceFaultResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TriggerServiceFaultResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TriggerServiceFaultResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TriggerServiceFaultResponse>()
{
  return bosdyn_msgs::msg::builder::Init_TriggerServiceFaultResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TRIGGER_SERVICE_FAULT_RESPONSE__BUILDER_HPP_
