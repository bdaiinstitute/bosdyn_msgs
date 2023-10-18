// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FileFormatVersion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_VERSION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_VERSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/file_format_version__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FileFormatVersion_patch_level
{
public:
  explicit Init_FileFormatVersion_patch_level(::bosdyn_msgs::msg::FileFormatVersion & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FileFormatVersion patch_level(::bosdyn_msgs::msg::FileFormatVersion::_patch_level_type arg)
  {
    msg_.patch_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FileFormatVersion msg_;
};

class Init_FileFormatVersion_minor_version
{
public:
  explicit Init_FileFormatVersion_minor_version(::bosdyn_msgs::msg::FileFormatVersion & msg)
  : msg_(msg)
  {}
  Init_FileFormatVersion_patch_level minor_version(::bosdyn_msgs::msg::FileFormatVersion::_minor_version_type arg)
  {
    msg_.minor_version = std::move(arg);
    return Init_FileFormatVersion_patch_level(msg_);
  }

private:
  ::bosdyn_msgs::msg::FileFormatVersion msg_;
};

class Init_FileFormatVersion_major_version
{
public:
  Init_FileFormatVersion_major_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FileFormatVersion_minor_version major_version(::bosdyn_msgs::msg::FileFormatVersion::_major_version_type arg)
  {
    msg_.major_version = std::move(arg);
    return Init_FileFormatVersion_minor_version(msg_);
  }

private:
  ::bosdyn_msgs::msg::FileFormatVersion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FileFormatVersion>()
{
  return bosdyn_msgs::msg::builder::Init_FileFormatVersion_major_version();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_VERSION__BUILDER_HPP_
