// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SeriesBlockIndexBlockEntry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX_BLOCK_ENTRY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX_BLOCK_ENTRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/series_block_index_block_entry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SeriesBlockIndexBlockEntry_additional_indexes
{
public:
  explicit Init_SeriesBlockIndexBlockEntry_additional_indexes(::bosdyn_msgs::msg::SeriesBlockIndexBlockEntry & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SeriesBlockIndexBlockEntry additional_indexes(::bosdyn_msgs::msg::SeriesBlockIndexBlockEntry::_additional_indexes_type arg)
  {
    msg_.additional_indexes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesBlockIndexBlockEntry msg_;
};

class Init_SeriesBlockIndexBlockEntry_file_offset
{
public:
  explicit Init_SeriesBlockIndexBlockEntry_file_offset(::bosdyn_msgs::msg::SeriesBlockIndexBlockEntry & msg)
  : msg_(msg)
  {}
  Init_SeriesBlockIndexBlockEntry_additional_indexes file_offset(::bosdyn_msgs::msg::SeriesBlockIndexBlockEntry::_file_offset_type arg)
  {
    msg_.file_offset = std::move(arg);
    return Init_SeriesBlockIndexBlockEntry_additional_indexes(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesBlockIndexBlockEntry msg_;
};

class Init_SeriesBlockIndexBlockEntry_timestamp_is_set
{
public:
  explicit Init_SeriesBlockIndexBlockEntry_timestamp_is_set(::bosdyn_msgs::msg::SeriesBlockIndexBlockEntry & msg)
  : msg_(msg)
  {}
  Init_SeriesBlockIndexBlockEntry_file_offset timestamp_is_set(::bosdyn_msgs::msg::SeriesBlockIndexBlockEntry::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_SeriesBlockIndexBlockEntry_file_offset(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesBlockIndexBlockEntry msg_;
};

class Init_SeriesBlockIndexBlockEntry_timestamp
{
public:
  Init_SeriesBlockIndexBlockEntry_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SeriesBlockIndexBlockEntry_timestamp_is_set timestamp(::bosdyn_msgs::msg::SeriesBlockIndexBlockEntry::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SeriesBlockIndexBlockEntry_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesBlockIndexBlockEntry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SeriesBlockIndexBlockEntry>()
{
  return bosdyn_msgs::msg::builder::Init_SeriesBlockIndexBlockEntry_timestamp();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX_BLOCK_ENTRY__BUILDER_HPP_
