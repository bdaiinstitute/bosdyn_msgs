// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EventsCommentsSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/events_comments_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EventsCommentsSpec_max_comments
{
public:
  explicit Init_EventsCommentsSpec_max_comments(::bosdyn_msgs::msg::EventsCommentsSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EventsCommentsSpec max_comments(::bosdyn_msgs::msg::EventsCommentsSpec::_max_comments_type arg)
  {
    msg_.max_comments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventsCommentsSpec msg_;
};

class Init_EventsCommentsSpec_max_events
{
public:
  explicit Init_EventsCommentsSpec_max_events(::bosdyn_msgs::msg::EventsCommentsSpec & msg)
  : msg_(msg)
  {}
  Init_EventsCommentsSpec_max_comments max_events(::bosdyn_msgs::msg::EventsCommentsSpec::_max_events_type arg)
  {
    msg_.max_events = std::move(arg);
    return Init_EventsCommentsSpec_max_comments(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventsCommentsSpec msg_;
};

class Init_EventsCommentsSpec_comments
{
public:
  explicit Init_EventsCommentsSpec_comments(::bosdyn_msgs::msg::EventsCommentsSpec & msg)
  : msg_(msg)
  {}
  Init_EventsCommentsSpec_max_events comments(::bosdyn_msgs::msg::EventsCommentsSpec::_comments_type arg)
  {
    msg_.comments = std::move(arg);
    return Init_EventsCommentsSpec_max_events(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventsCommentsSpec msg_;
};

class Init_EventsCommentsSpec_events
{
public:
  explicit Init_EventsCommentsSpec_events(::bosdyn_msgs::msg::EventsCommentsSpec & msg)
  : msg_(msg)
  {}
  Init_EventsCommentsSpec_comments events(::bosdyn_msgs::msg::EventsCommentsSpec::_events_type arg)
  {
    msg_.events = std::move(arg);
    return Init_EventsCommentsSpec_comments(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventsCommentsSpec msg_;
};

class Init_EventsCommentsSpec_time_range_is_set
{
public:
  explicit Init_EventsCommentsSpec_time_range_is_set(::bosdyn_msgs::msg::EventsCommentsSpec & msg)
  : msg_(msg)
  {}
  Init_EventsCommentsSpec_events time_range_is_set(::bosdyn_msgs::msg::EventsCommentsSpec::_time_range_is_set_type arg)
  {
    msg_.time_range_is_set = std::move(arg);
    return Init_EventsCommentsSpec_events(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventsCommentsSpec msg_;
};

class Init_EventsCommentsSpec_time_range
{
public:
  Init_EventsCommentsSpec_time_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventsCommentsSpec_time_range_is_set time_range(::bosdyn_msgs::msg::EventsCommentsSpec::_time_range_type arg)
  {
    msg_.time_range = std::move(arg);
    return Init_EventsCommentsSpec_time_range_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventsCommentsSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EventsCommentsSpec>()
{
  return bosdyn_msgs::msg::builder::Init_EventsCommentsSpec_time_range();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS_SPEC__BUILDER_HPP_
