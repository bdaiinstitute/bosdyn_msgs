// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataBufferStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_BUFFER_STATUS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_BUFFER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_buffer_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataBufferStatus_blob_specs
{
public:
  explicit Init_DataBufferStatus_blob_specs(::bosdyn_msgs::msg::DataBufferStatus & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DataBufferStatus blob_specs(::bosdyn_msgs::msg::DataBufferStatus::_blob_specs_type arg)
  {
    msg_.blob_specs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataBufferStatus msg_;
};

class Init_DataBufferStatus_num_events
{
public:
  explicit Init_DataBufferStatus_num_events(::bosdyn_msgs::msg::DataBufferStatus & msg)
  : msg_(msg)
  {}
  Init_DataBufferStatus_blob_specs num_events(::bosdyn_msgs::msg::DataBufferStatus::_num_events_type arg)
  {
    msg_.num_events = std::move(arg);
    return Init_DataBufferStatus_blob_specs(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataBufferStatus msg_;
};

class Init_DataBufferStatus_num_comments
{
public:
  explicit Init_DataBufferStatus_num_comments(::bosdyn_msgs::msg::DataBufferStatus & msg)
  : msg_(msg)
  {}
  Init_DataBufferStatus_num_events num_comments(::bosdyn_msgs::msg::DataBufferStatus::_num_comments_type arg)
  {
    msg_.num_comments = std::move(arg);
    return Init_DataBufferStatus_num_events(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataBufferStatus msg_;
};

class Init_DataBufferStatus_data_buffer_total_bytes
{
public:
  explicit Init_DataBufferStatus_data_buffer_total_bytes(::bosdyn_msgs::msg::DataBufferStatus & msg)
  : msg_(msg)
  {}
  Init_DataBufferStatus_num_comments data_buffer_total_bytes(::bosdyn_msgs::msg::DataBufferStatus::_data_buffer_total_bytes_type arg)
  {
    msg_.data_buffer_total_bytes = std::move(arg);
    return Init_DataBufferStatus_num_comments(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataBufferStatus msg_;
};

class Init_DataBufferStatus_num_data_buffer_pages
{
public:
  Init_DataBufferStatus_num_data_buffer_pages()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataBufferStatus_data_buffer_total_bytes num_data_buffer_pages(::bosdyn_msgs::msg::DataBufferStatus::_num_data_buffer_pages_type arg)
  {
    msg_.num_data_buffer_pages = std::move(arg);
    return Init_DataBufferStatus_data_buffer_total_bytes(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataBufferStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataBufferStatus>()
{
  return bosdyn_msgs::msg::builder::Init_DataBufferStatus_num_data_buffer_pages();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_BUFFER_STATUS__BUILDER_HPP_
