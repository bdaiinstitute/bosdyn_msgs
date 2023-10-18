// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ServiceFaultId.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_ID__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/service_fault_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ServiceFaultId_payload_guid
{
public:
  explicit Init_ServiceFaultId_payload_guid(::bosdyn_msgs::msg::ServiceFaultId & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ServiceFaultId payload_guid(::bosdyn_msgs::msg::ServiceFaultId::_payload_guid_type arg)
  {
    msg_.payload_guid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFaultId msg_;
};

class Init_ServiceFaultId_service_name
{
public:
  explicit Init_ServiceFaultId_service_name(::bosdyn_msgs::msg::ServiceFaultId & msg)
  : msg_(msg)
  {}
  Init_ServiceFaultId_payload_guid service_name(::bosdyn_msgs::msg::ServiceFaultId::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_ServiceFaultId_payload_guid(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFaultId msg_;
};

class Init_ServiceFaultId_fault_name
{
public:
  Init_ServiceFaultId_fault_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServiceFaultId_service_name fault_name(::bosdyn_msgs::msg::ServiceFaultId::_fault_name_type arg)
  {
    msg_.fault_name = std::move(arg);
    return Init_ServiceFaultId_service_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFaultId msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ServiceFaultId>()
{
  return bosdyn_msgs::msg::builder::Init_ServiceFaultId_fault_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_ID__BUILDER_HPP_
