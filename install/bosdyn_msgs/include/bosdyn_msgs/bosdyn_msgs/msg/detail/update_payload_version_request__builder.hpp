// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UpdatePayloadVersionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_VERSION_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_VERSION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/update_payload_version_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UpdatePayloadVersionRequest_updated_version_is_set
{
public:
  explicit Init_UpdatePayloadVersionRequest_updated_version_is_set(::bosdyn_msgs::msg::UpdatePayloadVersionRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UpdatePayloadVersionRequest updated_version_is_set(::bosdyn_msgs::msg::UpdatePayloadVersionRequest::_updated_version_is_set_type arg)
  {
    msg_.updated_version_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdatePayloadVersionRequest msg_;
};

class Init_UpdatePayloadVersionRequest_updated_version
{
public:
  explicit Init_UpdatePayloadVersionRequest_updated_version(::bosdyn_msgs::msg::UpdatePayloadVersionRequest & msg)
  : msg_(msg)
  {}
  Init_UpdatePayloadVersionRequest_updated_version_is_set updated_version(::bosdyn_msgs::msg::UpdatePayloadVersionRequest::_updated_version_type arg)
  {
    msg_.updated_version = std::move(arg);
    return Init_UpdatePayloadVersionRequest_updated_version_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdatePayloadVersionRequest msg_;
};

class Init_UpdatePayloadVersionRequest_payload_credentials_is_set
{
public:
  explicit Init_UpdatePayloadVersionRequest_payload_credentials_is_set(::bosdyn_msgs::msg::UpdatePayloadVersionRequest & msg)
  : msg_(msg)
  {}
  Init_UpdatePayloadVersionRequest_updated_version payload_credentials_is_set(::bosdyn_msgs::msg::UpdatePayloadVersionRequest::_payload_credentials_is_set_type arg)
  {
    msg_.payload_credentials_is_set = std::move(arg);
    return Init_UpdatePayloadVersionRequest_updated_version(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdatePayloadVersionRequest msg_;
};

class Init_UpdatePayloadVersionRequest_payload_credentials
{
public:
  explicit Init_UpdatePayloadVersionRequest_payload_credentials(::bosdyn_msgs::msg::UpdatePayloadVersionRequest & msg)
  : msg_(msg)
  {}
  Init_UpdatePayloadVersionRequest_payload_credentials_is_set payload_credentials(::bosdyn_msgs::msg::UpdatePayloadVersionRequest::_payload_credentials_type arg)
  {
    msg_.payload_credentials = std::move(arg);
    return Init_UpdatePayloadVersionRequest_payload_credentials_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdatePayloadVersionRequest msg_;
};

class Init_UpdatePayloadVersionRequest_header_is_set
{
public:
  explicit Init_UpdatePayloadVersionRequest_header_is_set(::bosdyn_msgs::msg::UpdatePayloadVersionRequest & msg)
  : msg_(msg)
  {}
  Init_UpdatePayloadVersionRequest_payload_credentials header_is_set(::bosdyn_msgs::msg::UpdatePayloadVersionRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_UpdatePayloadVersionRequest_payload_credentials(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdatePayloadVersionRequest msg_;
};

class Init_UpdatePayloadVersionRequest_header
{
public:
  Init_UpdatePayloadVersionRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdatePayloadVersionRequest_header_is_set header(::bosdyn_msgs::msg::UpdatePayloadVersionRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UpdatePayloadVersionRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdatePayloadVersionRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UpdatePayloadVersionRequest>()
{
  return bosdyn_msgs::msg::builder::Init_UpdatePayloadVersionRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_VERSION_REQUEST__BUILDER_HPP_
