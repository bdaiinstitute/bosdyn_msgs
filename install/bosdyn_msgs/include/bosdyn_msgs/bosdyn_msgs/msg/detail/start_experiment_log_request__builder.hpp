// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StartExperimentLogRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__START_EXPERIMENT_LOG_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__START_EXPERIMENT_LOG_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/start_experiment_log_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StartExperimentLogRequest_keep_alive_is_set
{
public:
  explicit Init_StartExperimentLogRequest_keep_alive_is_set(::bosdyn_msgs::msg::StartExperimentLogRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StartExperimentLogRequest keep_alive_is_set(::bosdyn_msgs::msg::StartExperimentLogRequest::_keep_alive_is_set_type arg)
  {
    msg_.keep_alive_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartExperimentLogRequest msg_;
};

class Init_StartExperimentLogRequest_keep_alive
{
public:
  explicit Init_StartExperimentLogRequest_keep_alive(::bosdyn_msgs::msg::StartExperimentLogRequest & msg)
  : msg_(msg)
  {}
  Init_StartExperimentLogRequest_keep_alive_is_set keep_alive(::bosdyn_msgs::msg::StartExperimentLogRequest::_keep_alive_type arg)
  {
    msg_.keep_alive = std::move(arg);
    return Init_StartExperimentLogRequest_keep_alive_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartExperimentLogRequest msg_;
};

class Init_StartExperimentLogRequest_header_is_set
{
public:
  explicit Init_StartExperimentLogRequest_header_is_set(::bosdyn_msgs::msg::StartExperimentLogRequest & msg)
  : msg_(msg)
  {}
  Init_StartExperimentLogRequest_keep_alive header_is_set(::bosdyn_msgs::msg::StartExperimentLogRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StartExperimentLogRequest_keep_alive(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartExperimentLogRequest msg_;
};

class Init_StartExperimentLogRequest_header
{
public:
  Init_StartExperimentLogRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartExperimentLogRequest_header_is_set header(::bosdyn_msgs::msg::StartExperimentLogRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StartExperimentLogRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartExperimentLogRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StartExperimentLogRequest>()
{
  return bosdyn_msgs::msg::builder::Init_StartExperimentLogRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__START_EXPERIMENT_LOG_REQUEST__BUILDER_HPP_
