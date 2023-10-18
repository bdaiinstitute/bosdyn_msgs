// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FileFormatDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_DESCRIPTOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_DESCRIPTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/file_format_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FileFormatDescriptor_checksum_num_bytes
{
public:
  explicit Init_FileFormatDescriptor_checksum_num_bytes(::bosdyn_msgs::msg::FileFormatDescriptor & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FileFormatDescriptor checksum_num_bytes(::bosdyn_msgs::msg::FileFormatDescriptor::_checksum_num_bytes_type arg)
  {
    msg_.checksum_num_bytes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FileFormatDescriptor msg_;
};

class Init_FileFormatDescriptor_checksum_type
{
public:
  explicit Init_FileFormatDescriptor_checksum_type(::bosdyn_msgs::msg::FileFormatDescriptor & msg)
  : msg_(msg)
  {}
  Init_FileFormatDescriptor_checksum_num_bytes checksum_type(::bosdyn_msgs::msg::FileFormatDescriptor::_checksum_type_type arg)
  {
    msg_.checksum_type = std::move(arg);
    return Init_FileFormatDescriptor_checksum_num_bytes(msg_);
  }

private:
  ::bosdyn_msgs::msg::FileFormatDescriptor msg_;
};

class Init_FileFormatDescriptor_annotations
{
public:
  explicit Init_FileFormatDescriptor_annotations(::bosdyn_msgs::msg::FileFormatDescriptor & msg)
  : msg_(msg)
  {}
  Init_FileFormatDescriptor_checksum_type annotations(::bosdyn_msgs::msg::FileFormatDescriptor::_annotations_type arg)
  {
    msg_.annotations = std::move(arg);
    return Init_FileFormatDescriptor_checksum_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::FileFormatDescriptor msg_;
};

class Init_FileFormatDescriptor_version_is_set
{
public:
  explicit Init_FileFormatDescriptor_version_is_set(::bosdyn_msgs::msg::FileFormatDescriptor & msg)
  : msg_(msg)
  {}
  Init_FileFormatDescriptor_annotations version_is_set(::bosdyn_msgs::msg::FileFormatDescriptor::_version_is_set_type arg)
  {
    msg_.version_is_set = std::move(arg);
    return Init_FileFormatDescriptor_annotations(msg_);
  }

private:
  ::bosdyn_msgs::msg::FileFormatDescriptor msg_;
};

class Init_FileFormatDescriptor_version
{
public:
  Init_FileFormatDescriptor_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FileFormatDescriptor_version_is_set version(::bosdyn_msgs::msg::FileFormatDescriptor::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_FileFormatDescriptor_version_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FileFormatDescriptor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FileFormatDescriptor>()
{
  return bosdyn_msgs::msg::builder::Init_FileFormatDescriptor_version();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_DESCRIPTOR__BUILDER_HPP_
