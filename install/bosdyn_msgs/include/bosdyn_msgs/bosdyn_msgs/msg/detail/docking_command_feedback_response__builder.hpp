// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DockingCommandFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_FEEDBACK_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_FEEDBACK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/docking_command_feedback_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DockingCommandFeedbackResponse_status
{
public:
  explicit Init_DockingCommandFeedbackResponse_status(::bosdyn_msgs::msg::DockingCommandFeedbackResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DockingCommandFeedbackResponse status(::bosdyn_msgs::msg::DockingCommandFeedbackResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandFeedbackResponse msg_;
};

class Init_DockingCommandFeedbackResponse_lease_use_result_is_set
{
public:
  explicit Init_DockingCommandFeedbackResponse_lease_use_result_is_set(::bosdyn_msgs::msg::DockingCommandFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_DockingCommandFeedbackResponse_status lease_use_result_is_set(::bosdyn_msgs::msg::DockingCommandFeedbackResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return Init_DockingCommandFeedbackResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandFeedbackResponse msg_;
};

class Init_DockingCommandFeedbackResponse_lease_use_result
{
public:
  explicit Init_DockingCommandFeedbackResponse_lease_use_result(::bosdyn_msgs::msg::DockingCommandFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_DockingCommandFeedbackResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::DockingCommandFeedbackResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_DockingCommandFeedbackResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandFeedbackResponse msg_;
};

class Init_DockingCommandFeedbackResponse_header_is_set
{
public:
  explicit Init_DockingCommandFeedbackResponse_header_is_set(::bosdyn_msgs::msg::DockingCommandFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_DockingCommandFeedbackResponse_lease_use_result header_is_set(::bosdyn_msgs::msg::DockingCommandFeedbackResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DockingCommandFeedbackResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandFeedbackResponse msg_;
};

class Init_DockingCommandFeedbackResponse_header
{
public:
  Init_DockingCommandFeedbackResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockingCommandFeedbackResponse_header_is_set header(::bosdyn_msgs::msg::DockingCommandFeedbackResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DockingCommandFeedbackResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandFeedbackResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DockingCommandFeedbackResponse>()
{
  return bosdyn_msgs::msg::builder::Init_DockingCommandFeedbackResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_FEEDBACK_RESPONSE__BUILDER_HPP_
