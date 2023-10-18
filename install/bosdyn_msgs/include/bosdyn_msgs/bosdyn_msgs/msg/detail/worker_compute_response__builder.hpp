// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WorkerComputeResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WORKER_COMPUTE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WORKER_COMPUTE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/worker_compute_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WorkerComputeResponse_output_images
{
public:
  explicit Init_WorkerComputeResponse_output_images(::bosdyn_msgs::msg::WorkerComputeResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WorkerComputeResponse output_images(::bosdyn_msgs::msg::WorkerComputeResponse::_output_images_type arg)
  {
    msg_.output_images = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorkerComputeResponse msg_;
};

class Init_WorkerComputeResponse_custom_param_error_is_set
{
public:
  explicit Init_WorkerComputeResponse_custom_param_error_is_set(::bosdyn_msgs::msg::WorkerComputeResponse & msg)
  : msg_(msg)
  {}
  Init_WorkerComputeResponse_output_images custom_param_error_is_set(::bosdyn_msgs::msg::WorkerComputeResponse::_custom_param_error_is_set_type arg)
  {
    msg_.custom_param_error_is_set = std::move(arg);
    return Init_WorkerComputeResponse_output_images(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorkerComputeResponse msg_;
};

class Init_WorkerComputeResponse_custom_param_error
{
public:
  explicit Init_WorkerComputeResponse_custom_param_error(::bosdyn_msgs::msg::WorkerComputeResponse & msg)
  : msg_(msg)
  {}
  Init_WorkerComputeResponse_custom_param_error_is_set custom_param_error(::bosdyn_msgs::msg::WorkerComputeResponse::_custom_param_error_type arg)
  {
    msg_.custom_param_error = std::move(arg);
    return Init_WorkerComputeResponse_custom_param_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorkerComputeResponse msg_;
};

class Init_WorkerComputeResponse_status
{
public:
  explicit Init_WorkerComputeResponse_status(::bosdyn_msgs::msg::WorkerComputeResponse & msg)
  : msg_(msg)
  {}
  Init_WorkerComputeResponse_custom_param_error status(::bosdyn_msgs::msg::WorkerComputeResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_WorkerComputeResponse_custom_param_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorkerComputeResponse msg_;
};

class Init_WorkerComputeResponse_header_is_set
{
public:
  explicit Init_WorkerComputeResponse_header_is_set(::bosdyn_msgs::msg::WorkerComputeResponse & msg)
  : msg_(msg)
  {}
  Init_WorkerComputeResponse_status header_is_set(::bosdyn_msgs::msg::WorkerComputeResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_WorkerComputeResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorkerComputeResponse msg_;
};

class Init_WorkerComputeResponse_header
{
public:
  Init_WorkerComputeResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorkerComputeResponse_header_is_set header(::bosdyn_msgs::msg::WorkerComputeResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WorkerComputeResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorkerComputeResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WorkerComputeResponse>()
{
  return bosdyn_msgs::msg::builder::Init_WorkerComputeResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WORKER_COMPUTE_RESPONSE__BUILDER_HPP_
