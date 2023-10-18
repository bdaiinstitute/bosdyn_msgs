// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/process_anchoring_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessAnchoringRequest_stream_intermediate_results
{
public:
  explicit Init_ProcessAnchoringRequest_stream_intermediate_results(::bosdyn_msgs::msg::ProcessAnchoringRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ProcessAnchoringRequest stream_intermediate_results(::bosdyn_msgs::msg::ProcessAnchoringRequest::_stream_intermediate_results_type arg)
  {
    msg_.stream_intermediate_results = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequest msg_;
};

class Init_ProcessAnchoringRequest_modify_anchoring_on_server
{
public:
  explicit Init_ProcessAnchoringRequest_modify_anchoring_on_server(::bosdyn_msgs::msg::ProcessAnchoringRequest & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequest_stream_intermediate_results modify_anchoring_on_server(::bosdyn_msgs::msg::ProcessAnchoringRequest::_modify_anchoring_on_server_type arg)
  {
    msg_.modify_anchoring_on_server = std::move(arg);
    return Init_ProcessAnchoringRequest_stream_intermediate_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequest msg_;
};

class Init_ProcessAnchoringRequest_initial_hint_is_set
{
public:
  explicit Init_ProcessAnchoringRequest_initial_hint_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequest & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequest_modify_anchoring_on_server initial_hint_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequest::_initial_hint_is_set_type arg)
  {
    msg_.initial_hint_is_set = std::move(arg);
    return Init_ProcessAnchoringRequest_modify_anchoring_on_server(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequest msg_;
};

class Init_ProcessAnchoringRequest_initial_hint
{
public:
  explicit Init_ProcessAnchoringRequest_initial_hint(::bosdyn_msgs::msg::ProcessAnchoringRequest & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequest_initial_hint_is_set initial_hint(::bosdyn_msgs::msg::ProcessAnchoringRequest::_initial_hint_type arg)
  {
    msg_.initial_hint = std::move(arg);
    return Init_ProcessAnchoringRequest_initial_hint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequest msg_;
};

class Init_ProcessAnchoringRequest_params_is_set
{
public:
  explicit Init_ProcessAnchoringRequest_params_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequest & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequest_initial_hint params_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequest::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return Init_ProcessAnchoringRequest_initial_hint(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequest msg_;
};

class Init_ProcessAnchoringRequest_params
{
public:
  explicit Init_ProcessAnchoringRequest_params(::bosdyn_msgs::msg::ProcessAnchoringRequest & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequest_params_is_set params(::bosdyn_msgs::msg::ProcessAnchoringRequest::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_ProcessAnchoringRequest_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequest msg_;
};

class Init_ProcessAnchoringRequest_header_is_set
{
public:
  explicit Init_ProcessAnchoringRequest_header_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequest & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequest_params header_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ProcessAnchoringRequest_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequest msg_;
};

class Init_ProcessAnchoringRequest_header
{
public:
  Init_ProcessAnchoringRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessAnchoringRequest_header_is_set header(::bosdyn_msgs::msg::ProcessAnchoringRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ProcessAnchoringRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ProcessAnchoringRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ProcessAnchoringRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST__BUILDER_HPP_
