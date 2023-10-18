// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RegisterServiceRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGISTER_SERVICE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGISTER_SERVICE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/register_service_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RegisterServiceRequest_service_entry_is_set
{
public:
  explicit Init_RegisterServiceRequest_service_entry_is_set(::bosdyn_msgs::msg::RegisterServiceRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RegisterServiceRequest service_entry_is_set(::bosdyn_msgs::msg::RegisterServiceRequest::_service_entry_is_set_type arg)
  {
    msg_.service_entry_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterServiceRequest msg_;
};

class Init_RegisterServiceRequest_service_entry
{
public:
  explicit Init_RegisterServiceRequest_service_entry(::bosdyn_msgs::msg::RegisterServiceRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterServiceRequest_service_entry_is_set service_entry(::bosdyn_msgs::msg::RegisterServiceRequest::_service_entry_type arg)
  {
    msg_.service_entry = std::move(arg);
    return Init_RegisterServiceRequest_service_entry_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterServiceRequest msg_;
};

class Init_RegisterServiceRequest_endpoint_is_set
{
public:
  explicit Init_RegisterServiceRequest_endpoint_is_set(::bosdyn_msgs::msg::RegisterServiceRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterServiceRequest_service_entry endpoint_is_set(::bosdyn_msgs::msg::RegisterServiceRequest::_endpoint_is_set_type arg)
  {
    msg_.endpoint_is_set = std::move(arg);
    return Init_RegisterServiceRequest_service_entry(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterServiceRequest msg_;
};

class Init_RegisterServiceRequest_endpoint
{
public:
  explicit Init_RegisterServiceRequest_endpoint(::bosdyn_msgs::msg::RegisterServiceRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterServiceRequest_endpoint_is_set endpoint(::bosdyn_msgs::msg::RegisterServiceRequest::_endpoint_type arg)
  {
    msg_.endpoint = std::move(arg);
    return Init_RegisterServiceRequest_endpoint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterServiceRequest msg_;
};

class Init_RegisterServiceRequest_header_is_set
{
public:
  explicit Init_RegisterServiceRequest_header_is_set(::bosdyn_msgs::msg::RegisterServiceRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterServiceRequest_endpoint header_is_set(::bosdyn_msgs::msg::RegisterServiceRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RegisterServiceRequest_endpoint(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterServiceRequest msg_;
};

class Init_RegisterServiceRequest_header
{
public:
  Init_RegisterServiceRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterServiceRequest_header_is_set header(::bosdyn_msgs::msg::RegisterServiceRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RegisterServiceRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterServiceRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RegisterServiceRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RegisterServiceRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGISTER_SERVICE_REQUEST__BUILDER_HPP_
