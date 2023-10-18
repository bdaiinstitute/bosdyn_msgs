// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AddLogAnnotationRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ADD_LOG_ANNOTATION_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ADD_LOG_ANNOTATION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/add_log_annotation_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AddLogAnnotationRequest_annotations_is_set
{
public:
  explicit Init_AddLogAnnotationRequest_annotations_is_set(::bosdyn_msgs::msg::AddLogAnnotationRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AddLogAnnotationRequest annotations_is_set(::bosdyn_msgs::msg::AddLogAnnotationRequest::_annotations_is_set_type arg)
  {
    msg_.annotations_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AddLogAnnotationRequest msg_;
};

class Init_AddLogAnnotationRequest_annotations
{
public:
  explicit Init_AddLogAnnotationRequest_annotations(::bosdyn_msgs::msg::AddLogAnnotationRequest & msg)
  : msg_(msg)
  {}
  Init_AddLogAnnotationRequest_annotations_is_set annotations(::bosdyn_msgs::msg::AddLogAnnotationRequest::_annotations_type arg)
  {
    msg_.annotations = std::move(arg);
    return Init_AddLogAnnotationRequest_annotations_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AddLogAnnotationRequest msg_;
};

class Init_AddLogAnnotationRequest_header_is_set
{
public:
  explicit Init_AddLogAnnotationRequest_header_is_set(::bosdyn_msgs::msg::AddLogAnnotationRequest & msg)
  : msg_(msg)
  {}
  Init_AddLogAnnotationRequest_annotations header_is_set(::bosdyn_msgs::msg::AddLogAnnotationRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_AddLogAnnotationRequest_annotations(msg_);
  }

private:
  ::bosdyn_msgs::msg::AddLogAnnotationRequest msg_;
};

class Init_AddLogAnnotationRequest_header
{
public:
  Init_AddLogAnnotationRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddLogAnnotationRequest_header_is_set header(::bosdyn_msgs::msg::AddLogAnnotationRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AddLogAnnotationRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AddLogAnnotationRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AddLogAnnotationRequest>()
{
  return bosdyn_msgs::msg::builder::Init_AddLogAnnotationRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ADD_LOG_ANNOTATION_REQUEST__BUILDER_HPP_
