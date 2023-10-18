// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SoftwareVersion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SOFTWARE_VERSION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SOFTWARE_VERSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/software_version__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SoftwareVersion_patch_level
{
public:
  explicit Init_SoftwareVersion_patch_level(::bosdyn_msgs::msg::SoftwareVersion & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SoftwareVersion patch_level(::bosdyn_msgs::msg::SoftwareVersion::_patch_level_type arg)
  {
    msg_.patch_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SoftwareVersion msg_;
};

class Init_SoftwareVersion_minor_version
{
public:
  explicit Init_SoftwareVersion_minor_version(::bosdyn_msgs::msg::SoftwareVersion & msg)
  : msg_(msg)
  {}
  Init_SoftwareVersion_patch_level minor_version(::bosdyn_msgs::msg::SoftwareVersion::_minor_version_type arg)
  {
    msg_.minor_version = std::move(arg);
    return Init_SoftwareVersion_patch_level(msg_);
  }

private:
  ::bosdyn_msgs::msg::SoftwareVersion msg_;
};

class Init_SoftwareVersion_major_version
{
public:
  Init_SoftwareVersion_major_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoftwareVersion_minor_version major_version(::bosdyn_msgs::msg::SoftwareVersion::_major_version_type arg)
  {
    msg_.major_version = std::move(arg);
    return Init_SoftwareVersion_minor_version(msg_);
  }

private:
  ::bosdyn_msgs::msg::SoftwareVersion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SoftwareVersion>()
{
  return bosdyn_msgs::msg::builder::Init_SoftwareVersion_major_version();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SOFTWARE_VERSION__BUILDER_HPP_
