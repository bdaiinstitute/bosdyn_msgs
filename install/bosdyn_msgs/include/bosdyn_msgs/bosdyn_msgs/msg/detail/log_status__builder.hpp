// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LogStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOG_STATUS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOG_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/log_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LogStatus_type
{
public:
  explicit Init_LogStatus_type(::bosdyn_msgs::msg::LogStatus & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LogStatus type(::bosdyn_msgs::msg::LogStatus::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogStatus msg_;
};

class Init_LogStatus_status
{
public:
  explicit Init_LogStatus_status(::bosdyn_msgs::msg::LogStatus & msg)
  : msg_(msg)
  {}
  Init_LogStatus_type status(::bosdyn_msgs::msg::LogStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LogStatus_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogStatus msg_;
};

class Init_LogStatus_id
{
public:
  Init_LogStatus_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogStatus_status id(::bosdyn_msgs::msg::LogStatus::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LogStatus_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LogStatus>()
{
  return bosdyn_msgs::msg::builder::Init_LogStatus_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOG_STATUS__BUILDER_HPP_
