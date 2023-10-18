// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ClearServiceFaultRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLEAR_SERVICE_FAULT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLEAR_SERVICE_FAULT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/clear_service_fault_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ClearServiceFaultRequest_clear_all_payload_faults
{
public:
  explicit Init_ClearServiceFaultRequest_clear_all_payload_faults(::bosdyn_msgs::msg::ClearServiceFaultRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ClearServiceFaultRequest clear_all_payload_faults(::bosdyn_msgs::msg::ClearServiceFaultRequest::_clear_all_payload_faults_type arg)
  {
    msg_.clear_all_payload_faults = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearServiceFaultRequest msg_;
};

class Init_ClearServiceFaultRequest_clear_all_service_faults
{
public:
  explicit Init_ClearServiceFaultRequest_clear_all_service_faults(::bosdyn_msgs::msg::ClearServiceFaultRequest & msg)
  : msg_(msg)
  {}
  Init_ClearServiceFaultRequest_clear_all_payload_faults clear_all_service_faults(::bosdyn_msgs::msg::ClearServiceFaultRequest::_clear_all_service_faults_type arg)
  {
    msg_.clear_all_service_faults = std::move(arg);
    return Init_ClearServiceFaultRequest_clear_all_payload_faults(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearServiceFaultRequest msg_;
};

class Init_ClearServiceFaultRequest_fault_id_is_set
{
public:
  explicit Init_ClearServiceFaultRequest_fault_id_is_set(::bosdyn_msgs::msg::ClearServiceFaultRequest & msg)
  : msg_(msg)
  {}
  Init_ClearServiceFaultRequest_clear_all_service_faults fault_id_is_set(::bosdyn_msgs::msg::ClearServiceFaultRequest::_fault_id_is_set_type arg)
  {
    msg_.fault_id_is_set = std::move(arg);
    return Init_ClearServiceFaultRequest_clear_all_service_faults(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearServiceFaultRequest msg_;
};

class Init_ClearServiceFaultRequest_fault_id
{
public:
  explicit Init_ClearServiceFaultRequest_fault_id(::bosdyn_msgs::msg::ClearServiceFaultRequest & msg)
  : msg_(msg)
  {}
  Init_ClearServiceFaultRequest_fault_id_is_set fault_id(::bosdyn_msgs::msg::ClearServiceFaultRequest::_fault_id_type arg)
  {
    msg_.fault_id = std::move(arg);
    return Init_ClearServiceFaultRequest_fault_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearServiceFaultRequest msg_;
};

class Init_ClearServiceFaultRequest_header_is_set
{
public:
  explicit Init_ClearServiceFaultRequest_header_is_set(::bosdyn_msgs::msg::ClearServiceFaultRequest & msg)
  : msg_(msg)
  {}
  Init_ClearServiceFaultRequest_fault_id header_is_set(::bosdyn_msgs::msg::ClearServiceFaultRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ClearServiceFaultRequest_fault_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearServiceFaultRequest msg_;
};

class Init_ClearServiceFaultRequest_header
{
public:
  Init_ClearServiceFaultRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClearServiceFaultRequest_header_is_set header(::bosdyn_msgs::msg::ClearServiceFaultRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ClearServiceFaultRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearServiceFaultRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ClearServiceFaultRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ClearServiceFaultRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLEAR_SERVICE_FAULT_REQUEST__BUILDER_HPP_
