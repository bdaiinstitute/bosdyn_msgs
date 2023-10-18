// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListCaptureActionsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_CAPTURE_ACTIONS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_CAPTURE_ACTIONS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_capture_actions_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListCaptureActionsResponse_action_ids
{
public:
  explicit Init_ListCaptureActionsResponse_action_ids(::bosdyn_msgs::msg::ListCaptureActionsResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListCaptureActionsResponse action_ids(::bosdyn_msgs::msg::ListCaptureActionsResponse::_action_ids_type arg)
  {
    msg_.action_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListCaptureActionsResponse msg_;
};

class Init_ListCaptureActionsResponse_header_is_set
{
public:
  explicit Init_ListCaptureActionsResponse_header_is_set(::bosdyn_msgs::msg::ListCaptureActionsResponse & msg)
  : msg_(msg)
  {}
  Init_ListCaptureActionsResponse_action_ids header_is_set(::bosdyn_msgs::msg::ListCaptureActionsResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListCaptureActionsResponse_action_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListCaptureActionsResponse msg_;
};

class Init_ListCaptureActionsResponse_header
{
public:
  Init_ListCaptureActionsResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListCaptureActionsResponse_header_is_set header(::bosdyn_msgs::msg::ListCaptureActionsResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListCaptureActionsResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListCaptureActionsResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListCaptureActionsResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ListCaptureActionsResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_CAPTURE_ACTIONS_RESPONSE__BUILDER_HPP_
