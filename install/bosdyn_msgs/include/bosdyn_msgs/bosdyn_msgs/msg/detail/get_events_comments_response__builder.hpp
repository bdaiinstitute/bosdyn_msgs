// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetEventsCommentsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_EVENTS_COMMENTS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_EVENTS_COMMENTS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_events_comments_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetEventsCommentsResponse_events_comments_is_set
{
public:
  explicit Init_GetEventsCommentsResponse_events_comments_is_set(::bosdyn_msgs::msg::GetEventsCommentsResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetEventsCommentsResponse events_comments_is_set(::bosdyn_msgs::msg::GetEventsCommentsResponse::_events_comments_is_set_type arg)
  {
    msg_.events_comments_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetEventsCommentsResponse msg_;
};

class Init_GetEventsCommentsResponse_events_comments
{
public:
  explicit Init_GetEventsCommentsResponse_events_comments(::bosdyn_msgs::msg::GetEventsCommentsResponse & msg)
  : msg_(msg)
  {}
  Init_GetEventsCommentsResponse_events_comments_is_set events_comments(::bosdyn_msgs::msg::GetEventsCommentsResponse::_events_comments_type arg)
  {
    msg_.events_comments = std::move(arg);
    return Init_GetEventsCommentsResponse_events_comments_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetEventsCommentsResponse msg_;
};

class Init_GetEventsCommentsResponse_header_is_set
{
public:
  explicit Init_GetEventsCommentsResponse_header_is_set(::bosdyn_msgs::msg::GetEventsCommentsResponse & msg)
  : msg_(msg)
  {}
  Init_GetEventsCommentsResponse_events_comments header_is_set(::bosdyn_msgs::msg::GetEventsCommentsResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetEventsCommentsResponse_events_comments(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetEventsCommentsResponse msg_;
};

class Init_GetEventsCommentsResponse_header
{
public:
  Init_GetEventsCommentsResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEventsCommentsResponse_header_is_set header(::bosdyn_msgs::msg::GetEventsCommentsResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetEventsCommentsResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetEventsCommentsResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetEventsCommentsResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetEventsCommentsResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_EVENTS_COMMENTS_RESPONSE__BUILDER_HPP_
