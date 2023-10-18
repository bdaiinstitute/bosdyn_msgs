// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataQuery.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataQuery_comments
{
public:
  explicit Init_DataQuery_comments(::bosdyn_msgs::msg::DataQuery & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DataQuery comments(::bosdyn_msgs::msg::DataQuery::_comments_type arg)
  {
    msg_.comments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataQuery msg_;
};

class Init_DataQuery_events
{
public:
  explicit Init_DataQuery_events(::bosdyn_msgs::msg::DataQuery & msg)
  : msg_(msg)
  {}
  Init_DataQuery_comments events(::bosdyn_msgs::msg::DataQuery::_events_type arg)
  {
    msg_.events = std::move(arg);
    return Init_DataQuery_comments(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataQuery msg_;
};

class Init_DataQuery_text_messages
{
public:
  explicit Init_DataQuery_text_messages(::bosdyn_msgs::msg::DataQuery & msg)
  : msg_(msg)
  {}
  Init_DataQuery_events text_messages(::bosdyn_msgs::msg::DataQuery::_text_messages_type arg)
  {
    msg_.text_messages = std::move(arg);
    return Init_DataQuery_events(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataQuery msg_;
};

class Init_DataQuery_blobs
{
public:
  explicit Init_DataQuery_blobs(::bosdyn_msgs::msg::DataQuery & msg)
  : msg_(msg)
  {}
  Init_DataQuery_text_messages blobs(::bosdyn_msgs::msg::DataQuery::_blobs_type arg)
  {
    msg_.blobs = std::move(arg);
    return Init_DataQuery_text_messages(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataQuery msg_;
};

class Init_DataQuery_time_range_is_set
{
public:
  explicit Init_DataQuery_time_range_is_set(::bosdyn_msgs::msg::DataQuery & msg)
  : msg_(msg)
  {}
  Init_DataQuery_blobs time_range_is_set(::bosdyn_msgs::msg::DataQuery::_time_range_is_set_type arg)
  {
    msg_.time_range_is_set = std::move(arg);
    return Init_DataQuery_blobs(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataQuery msg_;
};

class Init_DataQuery_time_range
{
public:
  Init_DataQuery_time_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataQuery_time_range_is_set time_range(::bosdyn_msgs::msg::DataQuery::_time_range_type arg)
  {
    msg_.time_range = std::move(arg);
    return Init_DataQuery_time_range_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataQuery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataQuery>()
{
  return bosdyn_msgs::msg::builder::Init_DataQuery_time_range();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY__BUILDER_HPP_
