// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EventsComments.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/events_comments__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EventsComments_operator_comments_limited
{
public:
  explicit Init_EventsComments_operator_comments_limited(::bosdyn_msgs::msg::EventsComments & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EventsComments operator_comments_limited(::bosdyn_msgs::msg::EventsComments::_operator_comments_limited_type arg)
  {
    msg_.operator_comments_limited = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventsComments msg_;
};

class Init_EventsComments_events_limited
{
public:
  explicit Init_EventsComments_events_limited(::bosdyn_msgs::msg::EventsComments & msg)
  : msg_(msg)
  {}
  Init_EventsComments_operator_comments_limited events_limited(::bosdyn_msgs::msg::EventsComments::_events_limited_type arg)
  {
    msg_.events_limited = std::move(arg);
    return Init_EventsComments_operator_comments_limited(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventsComments msg_;
};

class Init_EventsComments_operator_comments
{
public:
  explicit Init_EventsComments_operator_comments(::bosdyn_msgs::msg::EventsComments & msg)
  : msg_(msg)
  {}
  Init_EventsComments_events_limited operator_comments(::bosdyn_msgs::msg::EventsComments::_operator_comments_type arg)
  {
    msg_.operator_comments = std::move(arg);
    return Init_EventsComments_events_limited(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventsComments msg_;
};

class Init_EventsComments_events
{
public:
  explicit Init_EventsComments_events(::bosdyn_msgs::msg::EventsComments & msg)
  : msg_(msg)
  {}
  Init_EventsComments_operator_comments events(::bosdyn_msgs::msg::EventsComments::_events_type arg)
  {
    msg_.events = std::move(arg);
    return Init_EventsComments_operator_comments(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventsComments msg_;
};

class Init_EventsComments_time_range_is_set
{
public:
  explicit Init_EventsComments_time_range_is_set(::bosdyn_msgs::msg::EventsComments & msg)
  : msg_(msg)
  {}
  Init_EventsComments_events time_range_is_set(::bosdyn_msgs::msg::EventsComments::_time_range_is_set_type arg)
  {
    msg_.time_range_is_set = std::move(arg);
    return Init_EventsComments_events(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventsComments msg_;
};

class Init_EventsComments_time_range
{
public:
  Init_EventsComments_time_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventsComments_time_range_is_set time_range(::bosdyn_msgs::msg::EventsComments::_time_range_type arg)
  {
    msg_.time_range = std::move(arg);
    return Init_EventsComments_time_range_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventsComments msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EventsComments>()
{
  return bosdyn_msgs::msg::builder::Init_EventsComments_time_range();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS__BUILDER_HPP_
