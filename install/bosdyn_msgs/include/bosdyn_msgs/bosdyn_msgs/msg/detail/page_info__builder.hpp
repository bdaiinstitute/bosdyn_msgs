// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PageInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAGE_INFO__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAGE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/page_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PageInfo_request_preserve
{
public:
  explicit Init_PageInfo_request_preserve(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PageInfo request_preserve(::bosdyn_msgs::msg::PageInfo::_request_preserve_type arg)
  {
    msg_.request_preserve = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_download_started_timestamp_is_set
{
public:
  explicit Init_PageInfo_download_started_timestamp_is_set(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_request_preserve download_started_timestamp_is_set(::bosdyn_msgs::msg::PageInfo::_download_started_timestamp_is_set_type arg)
  {
    msg_.download_started_timestamp_is_set = std::move(arg);
    return Init_PageInfo_request_preserve(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_download_started_timestamp
{
public:
  explicit Init_PageInfo_download_started_timestamp(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_download_started_timestamp_is_set download_started_timestamp(::bosdyn_msgs::msg::PageInfo::_download_started_timestamp_type arg)
  {
    msg_.download_started_timestamp = std::move(arg);
    return Init_PageInfo_download_started_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_deleted_timestamp_is_set
{
public:
  explicit Init_PageInfo_deleted_timestamp_is_set(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_download_started_timestamp deleted_timestamp_is_set(::bosdyn_msgs::msg::PageInfo::_deleted_timestamp_is_set_type arg)
  {
    msg_.deleted_timestamp_is_set = std::move(arg);
    return Init_PageInfo_download_started_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_deleted_timestamp
{
public:
  explicit Init_PageInfo_deleted_timestamp(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_deleted_timestamp_is_set deleted_timestamp(::bosdyn_msgs::msg::PageInfo::_deleted_timestamp_type arg)
  {
    msg_.deleted_timestamp = std::move(arg);
    return Init_PageInfo_deleted_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_is_downloaded
{
public:
  explicit Init_PageInfo_is_downloaded(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_deleted_timestamp is_downloaded(::bosdyn_msgs::msg::PageInfo::_is_downloaded_type arg)
  {
    msg_.is_downloaded = std::move(arg);
    return Init_PageInfo_deleted_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_is_open
{
public:
  explicit Init_PageInfo_is_open(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_is_downloaded is_open(::bosdyn_msgs::msg::PageInfo::_is_open_type arg)
  {
    msg_.is_open = std::move(arg);
    return Init_PageInfo_is_downloaded(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_compression
{
public:
  explicit Init_PageInfo_compression(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_is_open compression(::bosdyn_msgs::msg::PageInfo::_compression_type arg)
  {
    msg_.compression = std::move(arg);
    return Init_PageInfo_is_open(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_format
{
public:
  explicit Init_PageInfo_format(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_compression format(::bosdyn_msgs::msg::PageInfo::_format_type arg)
  {
    msg_.format = std::move(arg);
    return Init_PageInfo_compression(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_total_bytes
{
public:
  explicit Init_PageInfo_total_bytes(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_format total_bytes(::bosdyn_msgs::msg::PageInfo::_total_bytes_type arg)
  {
    msg_.total_bytes = std::move(arg);
    return Init_PageInfo_format(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_num_ticks
{
public:
  explicit Init_PageInfo_num_ticks(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_total_bytes num_ticks(::bosdyn_msgs::msg::PageInfo::_num_ticks_type arg)
  {
    msg_.num_ticks = std::move(arg);
    return Init_PageInfo_total_bytes(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_time_range_is_set
{
public:
  explicit Init_PageInfo_time_range_is_set(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_num_ticks time_range_is_set(::bosdyn_msgs::msg::PageInfo::_time_range_is_set_type arg)
  {
    msg_.time_range_is_set = std::move(arg);
    return Init_PageInfo_num_ticks(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_time_range
{
public:
  explicit Init_PageInfo_time_range(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_time_range_is_set time_range(::bosdyn_msgs::msg::PageInfo::_time_range_type arg)
  {
    msg_.time_range = std::move(arg);
    return Init_PageInfo_time_range_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_source
{
public:
  explicit Init_PageInfo_source(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_time_range source(::bosdyn_msgs::msg::PageInfo::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_PageInfo_time_range(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_path
{
public:
  explicit Init_PageInfo_path(::bosdyn_msgs::msg::PageInfo & msg)
  : msg_(msg)
  {}
  Init_PageInfo_source path(::bosdyn_msgs::msg::PageInfo::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_PageInfo_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

class Init_PageInfo_id
{
public:
  Init_PageInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PageInfo_path id(::bosdyn_msgs::msg::PageInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_PageInfo_path(msg_);
  }

private:
  ::bosdyn_msgs::msg::PageInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PageInfo>()
{
  return bosdyn_msgs::msg::builder::Init_PageInfo_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAGE_INFO__BUILDER_HPP_
