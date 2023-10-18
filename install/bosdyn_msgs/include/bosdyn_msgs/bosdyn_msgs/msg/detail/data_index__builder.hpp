// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataIndex.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_INDEX__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_INDEX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_index__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataIndex_comments_is_set
{
public:
  explicit Init_DataIndex_comments_is_set(::bosdyn_msgs::msg::DataIndex & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DataIndex comments_is_set(::bosdyn_msgs::msg::DataIndex::_comments_is_set_type arg)
  {
    msg_.comments_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIndex msg_;
};

class Init_DataIndex_comments
{
public:
  explicit Init_DataIndex_comments(::bosdyn_msgs::msg::DataIndex & msg)
  : msg_(msg)
  {}
  Init_DataIndex_comments_is_set comments(::bosdyn_msgs::msg::DataIndex::_comments_type arg)
  {
    msg_.comments = std::move(arg);
    return Init_DataIndex_comments_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIndex msg_;
};

class Init_DataIndex_events_is_set
{
public:
  explicit Init_DataIndex_events_is_set(::bosdyn_msgs::msg::DataIndex & msg)
  : msg_(msg)
  {}
  Init_DataIndex_comments events_is_set(::bosdyn_msgs::msg::DataIndex::_events_is_set_type arg)
  {
    msg_.events_is_set = std::move(arg);
    return Init_DataIndex_comments(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIndex msg_;
};

class Init_DataIndex_events
{
public:
  explicit Init_DataIndex_events(::bosdyn_msgs::msg::DataIndex & msg)
  : msg_(msg)
  {}
  Init_DataIndex_events_is_set events(::bosdyn_msgs::msg::DataIndex::_events_type arg)
  {
    msg_.events = std::move(arg);
    return Init_DataIndex_events_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIndex msg_;
};

class Init_DataIndex_text_messages_is_set
{
public:
  explicit Init_DataIndex_text_messages_is_set(::bosdyn_msgs::msg::DataIndex & msg)
  : msg_(msg)
  {}
  Init_DataIndex_events text_messages_is_set(::bosdyn_msgs::msg::DataIndex::_text_messages_is_set_type arg)
  {
    msg_.text_messages_is_set = std::move(arg);
    return Init_DataIndex_events(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIndex msg_;
};

class Init_DataIndex_text_messages
{
public:
  explicit Init_DataIndex_text_messages(::bosdyn_msgs::msg::DataIndex & msg)
  : msg_(msg)
  {}
  Init_DataIndex_text_messages_is_set text_messages(::bosdyn_msgs::msg::DataIndex::_text_messages_type arg)
  {
    msg_.text_messages = std::move(arg);
    return Init_DataIndex_text_messages_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIndex msg_;
};

class Init_DataIndex_blobs
{
public:
  explicit Init_DataIndex_blobs(::bosdyn_msgs::msg::DataIndex & msg)
  : msg_(msg)
  {}
  Init_DataIndex_text_messages blobs(::bosdyn_msgs::msg::DataIndex::_blobs_type arg)
  {
    msg_.blobs = std::move(arg);
    return Init_DataIndex_text_messages(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIndex msg_;
};

class Init_DataIndex_time_range_is_set
{
public:
  explicit Init_DataIndex_time_range_is_set(::bosdyn_msgs::msg::DataIndex & msg)
  : msg_(msg)
  {}
  Init_DataIndex_blobs time_range_is_set(::bosdyn_msgs::msg::DataIndex::_time_range_is_set_type arg)
  {
    msg_.time_range_is_set = std::move(arg);
    return Init_DataIndex_blobs(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIndex msg_;
};

class Init_DataIndex_time_range
{
public:
  Init_DataIndex_time_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataIndex_time_range_is_set time_range(::bosdyn_msgs::msg::DataIndex::_time_range_type arg)
  {
    msg_.time_range = std::move(arg);
    return Init_DataIndex_time_range_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIndex msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataIndex>()
{
  return bosdyn_msgs::msg::builder::Init_DataIndex_time_range();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_INDEX__BUILDER_HPP_
