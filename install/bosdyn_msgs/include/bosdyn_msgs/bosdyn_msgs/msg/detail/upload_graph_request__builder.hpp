// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UploadGraphRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/upload_graph_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UploadGraphRequest_treat_validation_warnings_as_errors
{
public:
  explicit Init_UploadGraphRequest_treat_validation_warnings_as_errors(::bosdyn_msgs::msg::UploadGraphRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UploadGraphRequest treat_validation_warnings_as_errors(::bosdyn_msgs::msg::UploadGraphRequest::_treat_validation_warnings_as_errors_type arg)
  {
    msg_.treat_validation_warnings_as_errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphRequest msg_;
};

class Init_UploadGraphRequest_generate_new_anchoring
{
public:
  explicit Init_UploadGraphRequest_generate_new_anchoring(::bosdyn_msgs::msg::UploadGraphRequest & msg)
  : msg_(msg)
  {}
  Init_UploadGraphRequest_treat_validation_warnings_as_errors generate_new_anchoring(::bosdyn_msgs::msg::UploadGraphRequest::_generate_new_anchoring_type arg)
  {
    msg_.generate_new_anchoring = std::move(arg);
    return Init_UploadGraphRequest_treat_validation_warnings_as_errors(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphRequest msg_;
};

class Init_UploadGraphRequest_lease_is_set
{
public:
  explicit Init_UploadGraphRequest_lease_is_set(::bosdyn_msgs::msg::UploadGraphRequest & msg)
  : msg_(msg)
  {}
  Init_UploadGraphRequest_generate_new_anchoring lease_is_set(::bosdyn_msgs::msg::UploadGraphRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_UploadGraphRequest_generate_new_anchoring(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphRequest msg_;
};

class Init_UploadGraphRequest_lease
{
public:
  explicit Init_UploadGraphRequest_lease(::bosdyn_msgs::msg::UploadGraphRequest & msg)
  : msg_(msg)
  {}
  Init_UploadGraphRequest_lease_is_set lease(::bosdyn_msgs::msg::UploadGraphRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_UploadGraphRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphRequest msg_;
};

class Init_UploadGraphRequest_graph_is_set
{
public:
  explicit Init_UploadGraphRequest_graph_is_set(::bosdyn_msgs::msg::UploadGraphRequest & msg)
  : msg_(msg)
  {}
  Init_UploadGraphRequest_lease graph_is_set(::bosdyn_msgs::msg::UploadGraphRequest::_graph_is_set_type arg)
  {
    msg_.graph_is_set = std::move(arg);
    return Init_UploadGraphRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphRequest msg_;
};

class Init_UploadGraphRequest_graph
{
public:
  explicit Init_UploadGraphRequest_graph(::bosdyn_msgs::msg::UploadGraphRequest & msg)
  : msg_(msg)
  {}
  Init_UploadGraphRequest_graph_is_set graph(::bosdyn_msgs::msg::UploadGraphRequest::_graph_type arg)
  {
    msg_.graph = std::move(arg);
    return Init_UploadGraphRequest_graph_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphRequest msg_;
};

class Init_UploadGraphRequest_header_is_set
{
public:
  explicit Init_UploadGraphRequest_header_is_set(::bosdyn_msgs::msg::UploadGraphRequest & msg)
  : msg_(msg)
  {}
  Init_UploadGraphRequest_graph header_is_set(::bosdyn_msgs::msg::UploadGraphRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_UploadGraphRequest_graph(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphRequest msg_;
};

class Init_UploadGraphRequest_header
{
public:
  Init_UploadGraphRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UploadGraphRequest_header_is_set header(::bosdyn_msgs::msg::UploadGraphRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UploadGraphRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UploadGraphRequest>()
{
  return bosdyn_msgs::msg::builder::Init_UploadGraphRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_REQUEST__BUILDER_HPP_
