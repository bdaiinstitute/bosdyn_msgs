// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ManipulationApiFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_FEEDBACK_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_FEEDBACK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/manipulation_api_feedback_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ManipulationApiFeedbackResponse_transforms_snapshot_manipulation_data_is_set
{
public:
  explicit Init_ManipulationApiFeedbackResponse_transforms_snapshot_manipulation_data_is_set(::bosdyn_msgs::msg::ManipulationApiFeedbackResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ManipulationApiFeedbackResponse transforms_snapshot_manipulation_data_is_set(::bosdyn_msgs::msg::ManipulationApiFeedbackResponse::_transforms_snapshot_manipulation_data_is_set_type arg)
  {
    msg_.transforms_snapshot_manipulation_data_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiFeedbackResponse msg_;
};

class Init_ManipulationApiFeedbackResponse_transforms_snapshot_manipulation_data
{
public:
  explicit Init_ManipulationApiFeedbackResponse_transforms_snapshot_manipulation_data(::bosdyn_msgs::msg::ManipulationApiFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_ManipulationApiFeedbackResponse_transforms_snapshot_manipulation_data_is_set transforms_snapshot_manipulation_data(::bosdyn_msgs::msg::ManipulationApiFeedbackResponse::_transforms_snapshot_manipulation_data_type arg)
  {
    msg_.transforms_snapshot_manipulation_data = std::move(arg);
    return Init_ManipulationApiFeedbackResponse_transforms_snapshot_manipulation_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiFeedbackResponse msg_;
};

class Init_ManipulationApiFeedbackResponse_current_state
{
public:
  explicit Init_ManipulationApiFeedbackResponse_current_state(::bosdyn_msgs::msg::ManipulationApiFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_ManipulationApiFeedbackResponse_transforms_snapshot_manipulation_data current_state(::bosdyn_msgs::msg::ManipulationApiFeedbackResponse::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return Init_ManipulationApiFeedbackResponse_transforms_snapshot_manipulation_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiFeedbackResponse msg_;
};

class Init_ManipulationApiFeedbackResponse_manipulation_cmd_id
{
public:
  explicit Init_ManipulationApiFeedbackResponse_manipulation_cmd_id(::bosdyn_msgs::msg::ManipulationApiFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_ManipulationApiFeedbackResponse_current_state manipulation_cmd_id(::bosdyn_msgs::msg::ManipulationApiFeedbackResponse::_manipulation_cmd_id_type arg)
  {
    msg_.manipulation_cmd_id = std::move(arg);
    return Init_ManipulationApiFeedbackResponse_current_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiFeedbackResponse msg_;
};

class Init_ManipulationApiFeedbackResponse_header_is_set
{
public:
  explicit Init_ManipulationApiFeedbackResponse_header_is_set(::bosdyn_msgs::msg::ManipulationApiFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_ManipulationApiFeedbackResponse_manipulation_cmd_id header_is_set(::bosdyn_msgs::msg::ManipulationApiFeedbackResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ManipulationApiFeedbackResponse_manipulation_cmd_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiFeedbackResponse msg_;
};

class Init_ManipulationApiFeedbackResponse_header
{
public:
  Init_ManipulationApiFeedbackResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManipulationApiFeedbackResponse_header_is_set header(::bosdyn_msgs::msg::ManipulationApiFeedbackResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ManipulationApiFeedbackResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiFeedbackResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ManipulationApiFeedbackResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ManipulationApiFeedbackResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_FEEDBACK_RESPONSE__BUILDER_HPP_
