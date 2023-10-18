// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RegisterPayloadResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGISTER_PAYLOAD_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGISTER_PAYLOAD_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/register_payload_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RegisterPayloadResponse_status
{
public:
  explicit Init_RegisterPayloadResponse_status(::bosdyn_msgs::msg::RegisterPayloadResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RegisterPayloadResponse status(::bosdyn_msgs::msg::RegisterPayloadResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterPayloadResponse msg_;
};

class Init_RegisterPayloadResponse_header_is_set
{
public:
  explicit Init_RegisterPayloadResponse_header_is_set(::bosdyn_msgs::msg::RegisterPayloadResponse & msg)
  : msg_(msg)
  {}
  Init_RegisterPayloadResponse_status header_is_set(::bosdyn_msgs::msg::RegisterPayloadResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RegisterPayloadResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterPayloadResponse msg_;
};

class Init_RegisterPayloadResponse_header
{
public:
  Init_RegisterPayloadResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterPayloadResponse_header_is_set header(::bosdyn_msgs::msg::RegisterPayloadResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RegisterPayloadResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterPayloadResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RegisterPayloadResponse>()
{
  return bosdyn_msgs::msg::builder::Init_RegisterPayloadResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGISTER_PAYLOAD_RESPONSE__BUILDER_HPP_
