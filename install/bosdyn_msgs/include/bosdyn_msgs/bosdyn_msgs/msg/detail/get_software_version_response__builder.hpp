// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetSoftwareVersionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_SOFTWARE_VERSION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_SOFTWARE_VERSION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_software_version_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetSoftwareVersionResponse_detail
{
public:
  explicit Init_GetSoftwareVersionResponse_detail(::bosdyn_msgs::msg::GetSoftwareVersionResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetSoftwareVersionResponse detail(::bosdyn_msgs::msg::GetSoftwareVersionResponse::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetSoftwareVersionResponse msg_;
};

class Init_GetSoftwareVersionResponse_version_is_set
{
public:
  explicit Init_GetSoftwareVersionResponse_version_is_set(::bosdyn_msgs::msg::GetSoftwareVersionResponse & msg)
  : msg_(msg)
  {}
  Init_GetSoftwareVersionResponse_detail version_is_set(::bosdyn_msgs::msg::GetSoftwareVersionResponse::_version_is_set_type arg)
  {
    msg_.version_is_set = std::move(arg);
    return Init_GetSoftwareVersionResponse_detail(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetSoftwareVersionResponse msg_;
};

class Init_GetSoftwareVersionResponse_version
{
public:
  explicit Init_GetSoftwareVersionResponse_version(::bosdyn_msgs::msg::GetSoftwareVersionResponse & msg)
  : msg_(msg)
  {}
  Init_GetSoftwareVersionResponse_version_is_set version(::bosdyn_msgs::msg::GetSoftwareVersionResponse::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_GetSoftwareVersionResponse_version_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetSoftwareVersionResponse msg_;
};

class Init_GetSoftwareVersionResponse_header_is_set
{
public:
  explicit Init_GetSoftwareVersionResponse_header_is_set(::bosdyn_msgs::msg::GetSoftwareVersionResponse & msg)
  : msg_(msg)
  {}
  Init_GetSoftwareVersionResponse_version header_is_set(::bosdyn_msgs::msg::GetSoftwareVersionResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetSoftwareVersionResponse_version(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetSoftwareVersionResponse msg_;
};

class Init_GetSoftwareVersionResponse_header
{
public:
  Init_GetSoftwareVersionResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSoftwareVersionResponse_header_is_set header(::bosdyn_msgs::msg::GetSoftwareVersionResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetSoftwareVersionResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetSoftwareVersionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetSoftwareVersionResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetSoftwareVersionResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_SOFTWARE_VERSION_RESPONSE__BUILDER_HPP_
