// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetServiceInfoResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_SERVICE_INFO_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_SERVICE_INFO_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_service_info_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetServiceInfoResponse_capabilities_is_set
{
public:
  explicit Init_GetServiceInfoResponse_capabilities_is_set(::bosdyn_msgs::msg::GetServiceInfoResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetServiceInfoResponse capabilities_is_set(::bosdyn_msgs::msg::GetServiceInfoResponse::_capabilities_is_set_type arg)
  {
    msg_.capabilities_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetServiceInfoResponse msg_;
};

class Init_GetServiceInfoResponse_capabilities
{
public:
  explicit Init_GetServiceInfoResponse_capabilities(::bosdyn_msgs::msg::GetServiceInfoResponse & msg)
  : msg_(msg)
  {}
  Init_GetServiceInfoResponse_capabilities_is_set capabilities(::bosdyn_msgs::msg::GetServiceInfoResponse::_capabilities_type arg)
  {
    msg_.capabilities = std::move(arg);
    return Init_GetServiceInfoResponse_capabilities_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetServiceInfoResponse msg_;
};

class Init_GetServiceInfoResponse_header_is_set
{
public:
  explicit Init_GetServiceInfoResponse_header_is_set(::bosdyn_msgs::msg::GetServiceInfoResponse & msg)
  : msg_(msg)
  {}
  Init_GetServiceInfoResponse_capabilities header_is_set(::bosdyn_msgs::msg::GetServiceInfoResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetServiceInfoResponse_capabilities(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetServiceInfoResponse msg_;
};

class Init_GetServiceInfoResponse_header
{
public:
  Init_GetServiceInfoResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetServiceInfoResponse_header_is_set header(::bosdyn_msgs::msg::GetServiceInfoResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetServiceInfoResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetServiceInfoResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetServiceInfoResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetServiceInfoResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_SERVICE_INFO_RESPONSE__BUILDER_HPP_
