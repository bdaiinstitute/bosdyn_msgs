// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SystemFault.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SYSTEM_FAULT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SYSTEM_FAULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/system_fault__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemFault_severity
{
public:
  explicit Init_SystemFault_severity(::bosdyn_msgs::msg::SystemFault & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SystemFault severity(::bosdyn_msgs::msg::SystemFault::_severity_type arg)
  {
    msg_.severity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SystemFault msg_;
};

class Init_SystemFault_attributes
{
public:
  explicit Init_SystemFault_attributes(::bosdyn_msgs::msg::SystemFault & msg)
  : msg_(msg)
  {}
  Init_SystemFault_severity attributes(::bosdyn_msgs::msg::SystemFault::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return Init_SystemFault_severity(msg_);
  }

private:
  ::bosdyn_msgs::msg::SystemFault msg_;
};

class Init_SystemFault_error_message
{
public:
  explicit Init_SystemFault_error_message(::bosdyn_msgs::msg::SystemFault & msg)
  : msg_(msg)
  {}
  Init_SystemFault_attributes error_message(::bosdyn_msgs::msg::SystemFault::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_SystemFault_attributes(msg_);
  }

private:
  ::bosdyn_msgs::msg::SystemFault msg_;
};

class Init_SystemFault_uid
{
public:
  explicit Init_SystemFault_uid(::bosdyn_msgs::msg::SystemFault & msg)
  : msg_(msg)
  {}
  Init_SystemFault_error_message uid(::bosdyn_msgs::msg::SystemFault::_uid_type arg)
  {
    msg_.uid = std::move(arg);
    return Init_SystemFault_error_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::SystemFault msg_;
};

class Init_SystemFault_code
{
public:
  explicit Init_SystemFault_code(::bosdyn_msgs::msg::SystemFault & msg)
  : msg_(msg)
  {}
  Init_SystemFault_uid code(::bosdyn_msgs::msg::SystemFault::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_SystemFault_uid(msg_);
  }

private:
  ::bosdyn_msgs::msg::SystemFault msg_;
};

class Init_SystemFault_duration_is_set
{
public:
  explicit Init_SystemFault_duration_is_set(::bosdyn_msgs::msg::SystemFault & msg)
  : msg_(msg)
  {}
  Init_SystemFault_code duration_is_set(::bosdyn_msgs::msg::SystemFault::_duration_is_set_type arg)
  {
    msg_.duration_is_set = std::move(arg);
    return Init_SystemFault_code(msg_);
  }

private:
  ::bosdyn_msgs::msg::SystemFault msg_;
};

class Init_SystemFault_duration
{
public:
  explicit Init_SystemFault_duration(::bosdyn_msgs::msg::SystemFault & msg)
  : msg_(msg)
  {}
  Init_SystemFault_duration_is_set duration(::bosdyn_msgs::msg::SystemFault::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_SystemFault_duration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SystemFault msg_;
};

class Init_SystemFault_onset_timestamp_is_set
{
public:
  explicit Init_SystemFault_onset_timestamp_is_set(::bosdyn_msgs::msg::SystemFault & msg)
  : msg_(msg)
  {}
  Init_SystemFault_duration onset_timestamp_is_set(::bosdyn_msgs::msg::SystemFault::_onset_timestamp_is_set_type arg)
  {
    msg_.onset_timestamp_is_set = std::move(arg);
    return Init_SystemFault_duration(msg_);
  }

private:
  ::bosdyn_msgs::msg::SystemFault msg_;
};

class Init_SystemFault_onset_timestamp
{
public:
  explicit Init_SystemFault_onset_timestamp(::bosdyn_msgs::msg::SystemFault & msg)
  : msg_(msg)
  {}
  Init_SystemFault_onset_timestamp_is_set onset_timestamp(::bosdyn_msgs::msg::SystemFault::_onset_timestamp_type arg)
  {
    msg_.onset_timestamp = std::move(arg);
    return Init_SystemFault_onset_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SystemFault msg_;
};

class Init_SystemFault_name
{
public:
  Init_SystemFault_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemFault_onset_timestamp name(::bosdyn_msgs::msg::SystemFault::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SystemFault_onset_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::SystemFault msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SystemFault>()
{
  return bosdyn_msgs::msg::builder::Init_SystemFault_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SYSTEM_FAULT__BUILDER_HPP_
