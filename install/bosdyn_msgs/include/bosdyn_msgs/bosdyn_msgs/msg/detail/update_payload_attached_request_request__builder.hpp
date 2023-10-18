// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UpdatePayloadAttachedRequestRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_ATTACHED_REQUEST_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_ATTACHED_REQUEST_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/update_payload_attached_request_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UpdatePayloadAttachedRequestRequest_value
{
public:
  Init_UpdatePayloadAttachedRequestRequest_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::UpdatePayloadAttachedRequestRequest value(::bosdyn_msgs::msg::UpdatePayloadAttachedRequestRequest::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdatePayloadAttachedRequestRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UpdatePayloadAttachedRequestRequest>()
{
  return bosdyn_msgs::msg::builder::Init_UpdatePayloadAttachedRequestRequest_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_ATTACHED_REQUEST_REQUEST__BUILDER_HPP_
