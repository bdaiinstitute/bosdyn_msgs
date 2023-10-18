// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotSoftwareRelease.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_SOFTWARE_RELEASE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_SOFTWARE_RELEASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_software_release__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotSoftwareRelease_parameters
{
public:
  explicit Init_RobotSoftwareRelease_parameters(::bosdyn_msgs::msg::RobotSoftwareRelease & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotSoftwareRelease parameters(::bosdyn_msgs::msg::RobotSoftwareRelease::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotSoftwareRelease msg_;
};

class Init_RobotSoftwareRelease_install_date_is_set
{
public:
  explicit Init_RobotSoftwareRelease_install_date_is_set(::bosdyn_msgs::msg::RobotSoftwareRelease & msg)
  : msg_(msg)
  {}
  Init_RobotSoftwareRelease_parameters install_date_is_set(::bosdyn_msgs::msg::RobotSoftwareRelease::_install_date_is_set_type arg)
  {
    msg_.install_date_is_set = std::move(arg);
    return Init_RobotSoftwareRelease_parameters(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotSoftwareRelease msg_;
};

class Init_RobotSoftwareRelease_install_date
{
public:
  explicit Init_RobotSoftwareRelease_install_date(::bosdyn_msgs::msg::RobotSoftwareRelease & msg)
  : msg_(msg)
  {}
  Init_RobotSoftwareRelease_install_date_is_set install_date(::bosdyn_msgs::msg::RobotSoftwareRelease::_install_date_type arg)
  {
    msg_.install_date = std::move(arg);
    return Init_RobotSoftwareRelease_install_date_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotSoftwareRelease msg_;
};

class Init_RobotSoftwareRelease_build_information
{
public:
  explicit Init_RobotSoftwareRelease_build_information(::bosdyn_msgs::msg::RobotSoftwareRelease & msg)
  : msg_(msg)
  {}
  Init_RobotSoftwareRelease_install_date build_information(::bosdyn_msgs::msg::RobotSoftwareRelease::_build_information_type arg)
  {
    msg_.build_information = std::move(arg);
    return Init_RobotSoftwareRelease_install_date(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotSoftwareRelease msg_;
};

class Init_RobotSoftwareRelease_api_version
{
public:
  explicit Init_RobotSoftwareRelease_api_version(::bosdyn_msgs::msg::RobotSoftwareRelease & msg)
  : msg_(msg)
  {}
  Init_RobotSoftwareRelease_build_information api_version(::bosdyn_msgs::msg::RobotSoftwareRelease::_api_version_type arg)
  {
    msg_.api_version = std::move(arg);
    return Init_RobotSoftwareRelease_build_information(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotSoftwareRelease msg_;
};

class Init_RobotSoftwareRelease_changeset
{
public:
  explicit Init_RobotSoftwareRelease_changeset(::bosdyn_msgs::msg::RobotSoftwareRelease & msg)
  : msg_(msg)
  {}
  Init_RobotSoftwareRelease_api_version changeset(::bosdyn_msgs::msg::RobotSoftwareRelease::_changeset_type arg)
  {
    msg_.changeset = std::move(arg);
    return Init_RobotSoftwareRelease_api_version(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotSoftwareRelease msg_;
};

class Init_RobotSoftwareRelease_changeset_date_is_set
{
public:
  explicit Init_RobotSoftwareRelease_changeset_date_is_set(::bosdyn_msgs::msg::RobotSoftwareRelease & msg)
  : msg_(msg)
  {}
  Init_RobotSoftwareRelease_changeset changeset_date_is_set(::bosdyn_msgs::msg::RobotSoftwareRelease::_changeset_date_is_set_type arg)
  {
    msg_.changeset_date_is_set = std::move(arg);
    return Init_RobotSoftwareRelease_changeset(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotSoftwareRelease msg_;
};

class Init_RobotSoftwareRelease_changeset_date
{
public:
  explicit Init_RobotSoftwareRelease_changeset_date(::bosdyn_msgs::msg::RobotSoftwareRelease & msg)
  : msg_(msg)
  {}
  Init_RobotSoftwareRelease_changeset_date_is_set changeset_date(::bosdyn_msgs::msg::RobotSoftwareRelease::_changeset_date_type arg)
  {
    msg_.changeset_date = std::move(arg);
    return Init_RobotSoftwareRelease_changeset_date_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotSoftwareRelease msg_;
};

class Init_RobotSoftwareRelease_type
{
public:
  explicit Init_RobotSoftwareRelease_type(::bosdyn_msgs::msg::RobotSoftwareRelease & msg)
  : msg_(msg)
  {}
  Init_RobotSoftwareRelease_changeset_date type(::bosdyn_msgs::msg::RobotSoftwareRelease::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RobotSoftwareRelease_changeset_date(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotSoftwareRelease msg_;
};

class Init_RobotSoftwareRelease_name
{
public:
  explicit Init_RobotSoftwareRelease_name(::bosdyn_msgs::msg::RobotSoftwareRelease & msg)
  : msg_(msg)
  {}
  Init_RobotSoftwareRelease_type name(::bosdyn_msgs::msg::RobotSoftwareRelease::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RobotSoftwareRelease_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotSoftwareRelease msg_;
};

class Init_RobotSoftwareRelease_version_is_set
{
public:
  explicit Init_RobotSoftwareRelease_version_is_set(::bosdyn_msgs::msg::RobotSoftwareRelease & msg)
  : msg_(msg)
  {}
  Init_RobotSoftwareRelease_name version_is_set(::bosdyn_msgs::msg::RobotSoftwareRelease::_version_is_set_type arg)
  {
    msg_.version_is_set = std::move(arg);
    return Init_RobotSoftwareRelease_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotSoftwareRelease msg_;
};

class Init_RobotSoftwareRelease_version
{
public:
  Init_RobotSoftwareRelease_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotSoftwareRelease_version_is_set version(::bosdyn_msgs::msg::RobotSoftwareRelease::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_RobotSoftwareRelease_version_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotSoftwareRelease msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotSoftwareRelease>()
{
  return bosdyn_msgs::msg::builder::Init_RobotSoftwareRelease_version();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_SOFTWARE_RELEASE__BUILDER_HPP_
