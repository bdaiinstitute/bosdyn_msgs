// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetEventsCommentsRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_EVENTS_COMMENTS_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_EVENTS_COMMENTS_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_events_comments_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetEventsCommentsRequest_event_comment_request_is_set
{
public:
  explicit Init_GetEventsCommentsRequest_event_comment_request_is_set(::bosdyn_msgs::msg::GetEventsCommentsRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetEventsCommentsRequest event_comment_request_is_set(::bosdyn_msgs::msg::GetEventsCommentsRequest::_event_comment_request_is_set_type arg)
  {
    msg_.event_comment_request_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetEventsCommentsRequest msg_;
};

class Init_GetEventsCommentsRequest_event_comment_request
{
public:
  explicit Init_GetEventsCommentsRequest_event_comment_request(::bosdyn_msgs::msg::GetEventsCommentsRequest & msg)
  : msg_(msg)
  {}
  Init_GetEventsCommentsRequest_event_comment_request_is_set event_comment_request(::bosdyn_msgs::msg::GetEventsCommentsRequest::_event_comment_request_type arg)
  {
    msg_.event_comment_request = std::move(arg);
    return Init_GetEventsCommentsRequest_event_comment_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetEventsCommentsRequest msg_;
};

class Init_GetEventsCommentsRequest_header_is_set
{
public:
  explicit Init_GetEventsCommentsRequest_header_is_set(::bosdyn_msgs::msg::GetEventsCommentsRequest & msg)
  : msg_(msg)
  {}
  Init_GetEventsCommentsRequest_event_comment_request header_is_set(::bosdyn_msgs::msg::GetEventsCommentsRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetEventsCommentsRequest_event_comment_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetEventsCommentsRequest msg_;
};

class Init_GetEventsCommentsRequest_header
{
public:
  Init_GetEventsCommentsRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEventsCommentsRequest_header_is_set header(::bosdyn_msgs::msg::GetEventsCommentsRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetEventsCommentsRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetEventsCommentsRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetEventsCommentsRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetEventsCommentsRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_EVENTS_COMMENTS_REQUEST__BUILDER_HPP_
