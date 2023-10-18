// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SeriesBlockIndex.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/series_block_index__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SeriesBlockIndex_total_bytes
{
public:
  explicit Init_SeriesBlockIndex_total_bytes(::bosdyn_msgs::msg::SeriesBlockIndex & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SeriesBlockIndex total_bytes(::bosdyn_msgs::msg::SeriesBlockIndex::_total_bytes_type arg)
  {
    msg_.total_bytes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesBlockIndex msg_;
};

class Init_SeriesBlockIndex_block_entries
{
public:
  explicit Init_SeriesBlockIndex_block_entries(::bosdyn_msgs::msg::SeriesBlockIndex & msg)
  : msg_(msg)
  {}
  Init_SeriesBlockIndex_total_bytes block_entries(::bosdyn_msgs::msg::SeriesBlockIndex::_block_entries_type arg)
  {
    msg_.block_entries = std::move(arg);
    return Init_SeriesBlockIndex_total_bytes(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesBlockIndex msg_;
};

class Init_SeriesBlockIndex_descriptor_file_offset
{
public:
  explicit Init_SeriesBlockIndex_descriptor_file_offset(::bosdyn_msgs::msg::SeriesBlockIndex & msg)
  : msg_(msg)
  {}
  Init_SeriesBlockIndex_block_entries descriptor_file_offset(::bosdyn_msgs::msg::SeriesBlockIndex::_descriptor_file_offset_type arg)
  {
    msg_.descriptor_file_offset = std::move(arg);
    return Init_SeriesBlockIndex_block_entries(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesBlockIndex msg_;
};

class Init_SeriesBlockIndex_series_index
{
public:
  Init_SeriesBlockIndex_series_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SeriesBlockIndex_descriptor_file_offset series_index(::bosdyn_msgs::msg::SeriesBlockIndex::_series_index_type arg)
  {
    msg_.series_index = std::move(arg);
    return Init_SeriesBlockIndex_descriptor_file_offset(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesBlockIndex msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SeriesBlockIndex>()
{
  return bosdyn_msgs::msg::builder::Init_SeriesBlockIndex_series_index();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX__BUILDER_HPP_
