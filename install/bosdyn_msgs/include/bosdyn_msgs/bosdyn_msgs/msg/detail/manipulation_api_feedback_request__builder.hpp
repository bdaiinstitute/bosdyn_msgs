// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ManipulationApiFeedbackRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_FEEDBACK_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_FEEDBACK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/manipulation_api_feedback_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ManipulationApiFeedbackRequest_manipulation_cmd_id
{
public:
  explicit Init_ManipulationApiFeedbackRequest_manipulation_cmd_id(::bosdyn_msgs::msg::ManipulationApiFeedbackRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ManipulationApiFeedbackRequest manipulation_cmd_id(::bosdyn_msgs::msg::ManipulationApiFeedbackRequest::_manipulation_cmd_id_type arg)
  {
    msg_.manipulation_cmd_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiFeedbackRequest msg_;
};

class Init_ManipulationApiFeedbackRequest_header_is_set
{
public:
  explicit Init_ManipulationApiFeedbackRequest_header_is_set(::bosdyn_msgs::msg::ManipulationApiFeedbackRequest & msg)
  : msg_(msg)
  {}
  Init_ManipulationApiFeedbackRequest_manipulation_cmd_id header_is_set(::bosdyn_msgs::msg::ManipulationApiFeedbackRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ManipulationApiFeedbackRequest_manipulation_cmd_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiFeedbackRequest msg_;
};

class Init_ManipulationApiFeedbackRequest_header
{
public:
  Init_ManipulationApiFeedbackRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManipulationApiFeedbackRequest_header_is_set header(::bosdyn_msgs::msg::ManipulationApiFeedbackRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ManipulationApiFeedbackRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiFeedbackRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ManipulationApiFeedbackRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ManipulationApiFeedbackRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_FEEDBACK_REQUEST__BUILDER_HPP_
