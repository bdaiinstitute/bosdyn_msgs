// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/update_callback_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UpdateCallbackRequest_stage
{
public:
  explicit Init_UpdateCallbackRequest_stage(::bosdyn_msgs::msg::UpdateCallbackRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UpdateCallbackRequest stage(::bosdyn_msgs::msg::UpdateCallbackRequest::_stage_type arg)
  {
    msg_.stage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackRequest msg_;
};

class Init_UpdateCallbackRequest_end_time_is_set
{
public:
  explicit Init_UpdateCallbackRequest_end_time_is_set(::bosdyn_msgs::msg::UpdateCallbackRequest & msg)
  : msg_(msg)
  {}
  Init_UpdateCallbackRequest_stage end_time_is_set(::bosdyn_msgs::msg::UpdateCallbackRequest::_end_time_is_set_type arg)
  {
    msg_.end_time_is_set = std::move(arg);
    return Init_UpdateCallbackRequest_stage(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackRequest msg_;
};

class Init_UpdateCallbackRequest_end_time
{
public:
  explicit Init_UpdateCallbackRequest_end_time(::bosdyn_msgs::msg::UpdateCallbackRequest & msg)
  : msg_(msg)
  {}
  Init_UpdateCallbackRequest_end_time_is_set end_time(::bosdyn_msgs::msg::UpdateCallbackRequest::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_UpdateCallbackRequest_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackRequest msg_;
};

class Init_UpdateCallbackRequest_command_id
{
public:
  explicit Init_UpdateCallbackRequest_command_id(::bosdyn_msgs::msg::UpdateCallbackRequest & msg)
  : msg_(msg)
  {}
  Init_UpdateCallbackRequest_end_time command_id(::bosdyn_msgs::msg::UpdateCallbackRequest::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return Init_UpdateCallbackRequest_end_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackRequest msg_;
};

class Init_UpdateCallbackRequest_header_is_set
{
public:
  explicit Init_UpdateCallbackRequest_header_is_set(::bosdyn_msgs::msg::UpdateCallbackRequest & msg)
  : msg_(msg)
  {}
  Init_UpdateCallbackRequest_command_id header_is_set(::bosdyn_msgs::msg::UpdateCallbackRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_UpdateCallbackRequest_command_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackRequest msg_;
};

class Init_UpdateCallbackRequest_header
{
public:
  Init_UpdateCallbackRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateCallbackRequest_header_is_set header(::bosdyn_msgs::msg::UpdateCallbackRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UpdateCallbackRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UpdateCallbackRequest>()
{
  return bosdyn_msgs::msg::builder::Init_UpdateCallbackRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_REQUEST__BUILDER_HPP_
