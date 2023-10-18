// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DockingCommandFeedbackRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_FEEDBACK_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_FEEDBACK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/docking_command_feedback_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DockingCommandFeedbackRequest_update_docking_params_is_set
{
public:
  explicit Init_DockingCommandFeedbackRequest_update_docking_params_is_set(::bosdyn_msgs::msg::DockingCommandFeedbackRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DockingCommandFeedbackRequest update_docking_params_is_set(::bosdyn_msgs::msg::DockingCommandFeedbackRequest::_update_docking_params_is_set_type arg)
  {
    msg_.update_docking_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandFeedbackRequest msg_;
};

class Init_DockingCommandFeedbackRequest_update_docking_params
{
public:
  explicit Init_DockingCommandFeedbackRequest_update_docking_params(::bosdyn_msgs::msg::DockingCommandFeedbackRequest & msg)
  : msg_(msg)
  {}
  Init_DockingCommandFeedbackRequest_update_docking_params_is_set update_docking_params(::bosdyn_msgs::msg::DockingCommandFeedbackRequest::_update_docking_params_type arg)
  {
    msg_.update_docking_params = std::move(arg);
    return Init_DockingCommandFeedbackRequest_update_docking_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandFeedbackRequest msg_;
};

class Init_DockingCommandFeedbackRequest_docking_command_id
{
public:
  explicit Init_DockingCommandFeedbackRequest_docking_command_id(::bosdyn_msgs::msg::DockingCommandFeedbackRequest & msg)
  : msg_(msg)
  {}
  Init_DockingCommandFeedbackRequest_update_docking_params docking_command_id(::bosdyn_msgs::msg::DockingCommandFeedbackRequest::_docking_command_id_type arg)
  {
    msg_.docking_command_id = std::move(arg);
    return Init_DockingCommandFeedbackRequest_update_docking_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandFeedbackRequest msg_;
};

class Init_DockingCommandFeedbackRequest_header_is_set
{
public:
  explicit Init_DockingCommandFeedbackRequest_header_is_set(::bosdyn_msgs::msg::DockingCommandFeedbackRequest & msg)
  : msg_(msg)
  {}
  Init_DockingCommandFeedbackRequest_docking_command_id header_is_set(::bosdyn_msgs::msg::DockingCommandFeedbackRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DockingCommandFeedbackRequest_docking_command_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandFeedbackRequest msg_;
};

class Init_DockingCommandFeedbackRequest_header
{
public:
  Init_DockingCommandFeedbackRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockingCommandFeedbackRequest_header_is_set header(::bosdyn_msgs::msg::DockingCommandFeedbackRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DockingCommandFeedbackRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandFeedbackRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DockingCommandFeedbackRequest>()
{
  return bosdyn_msgs::msg::builder::Init_DockingCommandFeedbackRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_FEEDBACK_REQUEST__BUILDER_HPP_
