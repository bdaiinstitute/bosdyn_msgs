// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RegisterPayloadRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGISTER_PAYLOAD_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGISTER_PAYLOAD_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/register_payload_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RegisterPayloadRequest_payload_secret
{
public:
  explicit Init_RegisterPayloadRequest_payload_secret(::bosdyn_msgs::msg::RegisterPayloadRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RegisterPayloadRequest payload_secret(::bosdyn_msgs::msg::RegisterPayloadRequest::_payload_secret_type arg)
  {
    msg_.payload_secret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterPayloadRequest msg_;
};

class Init_RegisterPayloadRequest_payload_is_set
{
public:
  explicit Init_RegisterPayloadRequest_payload_is_set(::bosdyn_msgs::msg::RegisterPayloadRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterPayloadRequest_payload_secret payload_is_set(::bosdyn_msgs::msg::RegisterPayloadRequest::_payload_is_set_type arg)
  {
    msg_.payload_is_set = std::move(arg);
    return Init_RegisterPayloadRequest_payload_secret(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterPayloadRequest msg_;
};

class Init_RegisterPayloadRequest_payload
{
public:
  explicit Init_RegisterPayloadRequest_payload(::bosdyn_msgs::msg::RegisterPayloadRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterPayloadRequest_payload_is_set payload(::bosdyn_msgs::msg::RegisterPayloadRequest::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return Init_RegisterPayloadRequest_payload_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterPayloadRequest msg_;
};

class Init_RegisterPayloadRequest_header_is_set
{
public:
  explicit Init_RegisterPayloadRequest_header_is_set(::bosdyn_msgs::msg::RegisterPayloadRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterPayloadRequest_payload header_is_set(::bosdyn_msgs::msg::RegisterPayloadRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RegisterPayloadRequest_payload(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterPayloadRequest msg_;
};

class Init_RegisterPayloadRequest_header
{
public:
  Init_RegisterPayloadRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterPayloadRequest_header_is_set header(::bosdyn_msgs::msg::RegisterPayloadRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RegisterPayloadRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterPayloadRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RegisterPayloadRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RegisterPayloadRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGISTER_PAYLOAD_REQUEST__BUILDER_HPP_
