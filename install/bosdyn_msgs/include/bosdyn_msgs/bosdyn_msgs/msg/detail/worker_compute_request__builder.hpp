// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WorkerComputeRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WORKER_COMPUTE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WORKER_COMPUTE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/worker_compute_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WorkerComputeRequest_input_data_is_set
{
public:
  explicit Init_WorkerComputeRequest_input_data_is_set(::bosdyn_msgs::msg::WorkerComputeRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WorkerComputeRequest input_data_is_set(::bosdyn_msgs::msg::WorkerComputeRequest::_input_data_is_set_type arg)
  {
    msg_.input_data_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorkerComputeRequest msg_;
};

class Init_WorkerComputeRequest_input_data
{
public:
  explicit Init_WorkerComputeRequest_input_data(::bosdyn_msgs::msg::WorkerComputeRequest & msg)
  : msg_(msg)
  {}
  Init_WorkerComputeRequest_input_data_is_set input_data(::bosdyn_msgs::msg::WorkerComputeRequest::_input_data_type arg)
  {
    msg_.input_data = std::move(arg);
    return Init_WorkerComputeRequest_input_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorkerComputeRequest msg_;
};

class Init_WorkerComputeRequest_header_is_set
{
public:
  explicit Init_WorkerComputeRequest_header_is_set(::bosdyn_msgs::msg::WorkerComputeRequest & msg)
  : msg_(msg)
  {}
  Init_WorkerComputeRequest_input_data header_is_set(::bosdyn_msgs::msg::WorkerComputeRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_WorkerComputeRequest_input_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorkerComputeRequest msg_;
};

class Init_WorkerComputeRequest_header
{
public:
  Init_WorkerComputeRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorkerComputeRequest_header_is_set header(::bosdyn_msgs::msg::WorkerComputeRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WorkerComputeRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorkerComputeRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WorkerComputeRequest>()
{
  return bosdyn_msgs::msg::builder::Init_WorkerComputeRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WORKER_COMPUTE_REQUEST__BUILDER_HPP_
