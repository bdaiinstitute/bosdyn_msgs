// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LicenseInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LICENSE_INFO__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LICENSE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/license_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LicenseInfo_licensed_features
{
public:
  explicit Init_LicenseInfo_licensed_features(::bosdyn_msgs::msg::LicenseInfo & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LicenseInfo licensed_features(::bosdyn_msgs::msg::LicenseInfo::_licensed_features_type arg)
  {
    msg_.licensed_features = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LicenseInfo msg_;
};

class Init_LicenseInfo_not_valid_after_is_set
{
public:
  explicit Init_LicenseInfo_not_valid_after_is_set(::bosdyn_msgs::msg::LicenseInfo & msg)
  : msg_(msg)
  {}
  Init_LicenseInfo_licensed_features not_valid_after_is_set(::bosdyn_msgs::msg::LicenseInfo::_not_valid_after_is_set_type arg)
  {
    msg_.not_valid_after_is_set = std::move(arg);
    return Init_LicenseInfo_licensed_features(msg_);
  }

private:
  ::bosdyn_msgs::msg::LicenseInfo msg_;
};

class Init_LicenseInfo_not_valid_after
{
public:
  explicit Init_LicenseInfo_not_valid_after(::bosdyn_msgs::msg::LicenseInfo & msg)
  : msg_(msg)
  {}
  Init_LicenseInfo_not_valid_after_is_set not_valid_after(::bosdyn_msgs::msg::LicenseInfo::_not_valid_after_type arg)
  {
    msg_.not_valid_after = std::move(arg);
    return Init_LicenseInfo_not_valid_after_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LicenseInfo msg_;
};

class Init_LicenseInfo_not_valid_before_is_set
{
public:
  explicit Init_LicenseInfo_not_valid_before_is_set(::bosdyn_msgs::msg::LicenseInfo & msg)
  : msg_(msg)
  {}
  Init_LicenseInfo_not_valid_after not_valid_before_is_set(::bosdyn_msgs::msg::LicenseInfo::_not_valid_before_is_set_type arg)
  {
    msg_.not_valid_before_is_set = std::move(arg);
    return Init_LicenseInfo_not_valid_after(msg_);
  }

private:
  ::bosdyn_msgs::msg::LicenseInfo msg_;
};

class Init_LicenseInfo_not_valid_before
{
public:
  explicit Init_LicenseInfo_not_valid_before(::bosdyn_msgs::msg::LicenseInfo & msg)
  : msg_(msg)
  {}
  Init_LicenseInfo_not_valid_before_is_set not_valid_before(::bosdyn_msgs::msg::LicenseInfo::_not_valid_before_type arg)
  {
    msg_.not_valid_before = std::move(arg);
    return Init_LicenseInfo_not_valid_before_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LicenseInfo msg_;
};

class Init_LicenseInfo_robot_serial
{
public:
  explicit Init_LicenseInfo_robot_serial(::bosdyn_msgs::msg::LicenseInfo & msg)
  : msg_(msg)
  {}
  Init_LicenseInfo_not_valid_before robot_serial(::bosdyn_msgs::msg::LicenseInfo::_robot_serial_type arg)
  {
    msg_.robot_serial = std::move(arg);
    return Init_LicenseInfo_not_valid_before(msg_);
  }

private:
  ::bosdyn_msgs::msg::LicenseInfo msg_;
};

class Init_LicenseInfo_id
{
public:
  explicit Init_LicenseInfo_id(::bosdyn_msgs::msg::LicenseInfo & msg)
  : msg_(msg)
  {}
  Init_LicenseInfo_robot_serial id(::bosdyn_msgs::msg::LicenseInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LicenseInfo_robot_serial(msg_);
  }

private:
  ::bosdyn_msgs::msg::LicenseInfo msg_;
};

class Init_LicenseInfo_status
{
public:
  Init_LicenseInfo_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LicenseInfo_id status(::bosdyn_msgs::msg::LicenseInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LicenseInfo_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::LicenseInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LicenseInfo>()
{
  return bosdyn_msgs::msg::builder::Init_LicenseInfo_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LICENSE_INFO__BUILDER_HPP_
