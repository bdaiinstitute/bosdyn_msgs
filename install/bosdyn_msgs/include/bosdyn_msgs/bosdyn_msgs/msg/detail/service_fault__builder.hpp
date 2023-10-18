// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ServiceFault.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/service_fault__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ServiceFault_duration_is_set
{
public:
  explicit Init_ServiceFault_duration_is_set(::bosdyn_msgs::msg::ServiceFault & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ServiceFault duration_is_set(::bosdyn_msgs::msg::ServiceFault::_duration_is_set_type arg)
  {
    msg_.duration_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFault msg_;
};

class Init_ServiceFault_duration
{
public:
  explicit Init_ServiceFault_duration(::bosdyn_msgs::msg::ServiceFault & msg)
  : msg_(msg)
  {}
  Init_ServiceFault_duration_is_set duration(::bosdyn_msgs::msg::ServiceFault::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_ServiceFault_duration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFault msg_;
};

class Init_ServiceFault_onset_timestamp_is_set
{
public:
  explicit Init_ServiceFault_onset_timestamp_is_set(::bosdyn_msgs::msg::ServiceFault & msg)
  : msg_(msg)
  {}
  Init_ServiceFault_duration onset_timestamp_is_set(::bosdyn_msgs::msg::ServiceFault::_onset_timestamp_is_set_type arg)
  {
    msg_.onset_timestamp_is_set = std::move(arg);
    return Init_ServiceFault_duration(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFault msg_;
};

class Init_ServiceFault_onset_timestamp
{
public:
  explicit Init_ServiceFault_onset_timestamp(::bosdyn_msgs::msg::ServiceFault & msg)
  : msg_(msg)
  {}
  Init_ServiceFault_onset_timestamp_is_set onset_timestamp(::bosdyn_msgs::msg::ServiceFault::_onset_timestamp_type arg)
  {
    msg_.onset_timestamp = std::move(arg);
    return Init_ServiceFault_onset_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFault msg_;
};

class Init_ServiceFault_severity
{
public:
  explicit Init_ServiceFault_severity(::bosdyn_msgs::msg::ServiceFault & msg)
  : msg_(msg)
  {}
  Init_ServiceFault_onset_timestamp severity(::bosdyn_msgs::msg::ServiceFault::_severity_type arg)
  {
    msg_.severity = std::move(arg);
    return Init_ServiceFault_onset_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFault msg_;
};

class Init_ServiceFault_attributes
{
public:
  explicit Init_ServiceFault_attributes(::bosdyn_msgs::msg::ServiceFault & msg)
  : msg_(msg)
  {}
  Init_ServiceFault_severity attributes(::bosdyn_msgs::msg::ServiceFault::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return Init_ServiceFault_severity(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFault msg_;
};

class Init_ServiceFault_error_message
{
public:
  explicit Init_ServiceFault_error_message(::bosdyn_msgs::msg::ServiceFault & msg)
  : msg_(msg)
  {}
  Init_ServiceFault_attributes error_message(::bosdyn_msgs::msg::ServiceFault::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_ServiceFault_attributes(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFault msg_;
};

class Init_ServiceFault_fault_id_is_set
{
public:
  explicit Init_ServiceFault_fault_id_is_set(::bosdyn_msgs::msg::ServiceFault & msg)
  : msg_(msg)
  {}
  Init_ServiceFault_error_message fault_id_is_set(::bosdyn_msgs::msg::ServiceFault::_fault_id_is_set_type arg)
  {
    msg_.fault_id_is_set = std::move(arg);
    return Init_ServiceFault_error_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFault msg_;
};

class Init_ServiceFault_fault_id
{
public:
  Init_ServiceFault_fault_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServiceFault_fault_id_is_set fault_id(::bosdyn_msgs::msg::ServiceFault::_fault_id_type arg)
  {
    msg_.fault_id = std::move(arg);
    return Init_ServiceFault_fault_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFault msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ServiceFault>()
{
  return bosdyn_msgs::msg::builder::Init_ServiceFault_fault_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT__BUILDER_HPP_
