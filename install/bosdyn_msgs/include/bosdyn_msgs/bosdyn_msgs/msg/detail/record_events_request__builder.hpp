// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RecordEventsRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_EVENTS_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_EVENTS_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/record_events_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RecordEventsRequest_events
{
public:
  explicit Init_RecordEventsRequest_events(::bosdyn_msgs::msg::RecordEventsRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RecordEventsRequest events(::bosdyn_msgs::msg::RecordEventsRequest::_events_type arg)
  {
    msg_.events = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordEventsRequest msg_;
};

class Init_RecordEventsRequest_header_is_set
{
public:
  explicit Init_RecordEventsRequest_header_is_set(::bosdyn_msgs::msg::RecordEventsRequest & msg)
  : msg_(msg)
  {}
  Init_RecordEventsRequest_events header_is_set(::bosdyn_msgs::msg::RecordEventsRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RecordEventsRequest_events(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordEventsRequest msg_;
};

class Init_RecordEventsRequest_header
{
public:
  Init_RecordEventsRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordEventsRequest_header_is_set header(::bosdyn_msgs::msg::RecordEventsRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RecordEventsRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordEventsRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RecordEventsRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RecordEventsRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_EVENTS_REQUEST__BUILDER_HPP_
