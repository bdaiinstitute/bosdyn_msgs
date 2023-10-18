// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetLicenseInfoResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_LICENSE_INFO_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_LICENSE_INFO_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_license_info_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetLicenseInfoResponse_license_is_set
{
public:
  explicit Init_GetLicenseInfoResponse_license_is_set(::bosdyn_msgs::msg::GetLicenseInfoResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetLicenseInfoResponse license_is_set(::bosdyn_msgs::msg::GetLicenseInfoResponse::_license_is_set_type arg)
  {
    msg_.license_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLicenseInfoResponse msg_;
};

class Init_GetLicenseInfoResponse_license
{
public:
  explicit Init_GetLicenseInfoResponse_license(::bosdyn_msgs::msg::GetLicenseInfoResponse & msg)
  : msg_(msg)
  {}
  Init_GetLicenseInfoResponse_license_is_set license(::bosdyn_msgs::msg::GetLicenseInfoResponse::_license_type arg)
  {
    msg_.license = std::move(arg);
    return Init_GetLicenseInfoResponse_license_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLicenseInfoResponse msg_;
};

class Init_GetLicenseInfoResponse_header_is_set
{
public:
  explicit Init_GetLicenseInfoResponse_header_is_set(::bosdyn_msgs::msg::GetLicenseInfoResponse & msg)
  : msg_(msg)
  {}
  Init_GetLicenseInfoResponse_license header_is_set(::bosdyn_msgs::msg::GetLicenseInfoResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetLicenseInfoResponse_license(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLicenseInfoResponse msg_;
};

class Init_GetLicenseInfoResponse_header
{
public:
  Init_GetLicenseInfoResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLicenseInfoResponse_header_is_set header(::bosdyn_msgs::msg::GetLicenseInfoResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetLicenseInfoResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLicenseInfoResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetLicenseInfoResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetLicenseInfoResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_LICENSE_INFO_RESPONSE__BUILDER_HPP_
