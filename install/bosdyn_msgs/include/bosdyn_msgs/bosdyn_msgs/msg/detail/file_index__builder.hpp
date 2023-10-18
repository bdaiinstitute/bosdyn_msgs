// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FileIndex.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FILE_INDEX__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FILE_INDEX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/file_index__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FileIndex_series_identifier_hashes
{
public:
  explicit Init_FileIndex_series_identifier_hashes(::bosdyn_msgs::msg::FileIndex & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FileIndex series_identifier_hashes(::bosdyn_msgs::msg::FileIndex::_series_identifier_hashes_type arg)
  {
    msg_.series_identifier_hashes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FileIndex msg_;
};

class Init_FileIndex_series_block_index_offsets
{
public:
  explicit Init_FileIndex_series_block_index_offsets(::bosdyn_msgs::msg::FileIndex & msg)
  : msg_(msg)
  {}
  Init_FileIndex_series_identifier_hashes series_block_index_offsets(::bosdyn_msgs::msg::FileIndex::_series_block_index_offsets_type arg)
  {
    msg_.series_block_index_offsets = std::move(arg);
    return Init_FileIndex_series_identifier_hashes(msg_);
  }

private:
  ::bosdyn_msgs::msg::FileIndex msg_;
};

class Init_FileIndex_series_identifiers
{
public:
  Init_FileIndex_series_identifiers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FileIndex_series_block_index_offsets series_identifiers(::bosdyn_msgs::msg::FileIndex::_series_identifiers_type arg)
  {
    msg_.series_identifiers = std::move(arg);
    return Init_FileIndex_series_block_index_offsets(msg_);
  }

private:
  ::bosdyn_msgs::msg::FileIndex msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FileIndex>()
{
  return bosdyn_msgs::msg::builder::Init_FileIndex_series_identifiers();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FILE_INDEX__BUILDER_HPP_
