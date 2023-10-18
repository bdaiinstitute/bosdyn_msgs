// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataChunk.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_CHUNK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_CHUNK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_chunk__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataChunk_data
{
public:
  explicit Init_DataChunk_data(::bosdyn_msgs::msg::DataChunk & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DataChunk data(::bosdyn_msgs::msg::DataChunk::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataChunk msg_;
};

class Init_DataChunk_total_size
{
public:
  Init_DataChunk_total_size()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataChunk_data total_size(::bosdyn_msgs::msg::DataChunk::_total_size_type arg)
  {
    msg_.total_size = std::move(arg);
    return Init_DataChunk_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataChunk msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataChunk>()
{
  return bosdyn_msgs::msg::builder::Init_DataChunk_total_size();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_CHUNK__BUILDER_HPP_
