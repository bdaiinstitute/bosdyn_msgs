// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ServiceEntry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/service_entry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ServiceEntry_host_payload_guid
{
public:
  explicit Init_ServiceEntry_host_payload_guid(::bosdyn_msgs::msg::ServiceEntry & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ServiceEntry host_payload_guid(::bosdyn_msgs::msg::ServiceEntry::_host_payload_guid_type arg)
  {
    msg_.host_payload_guid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceEntry msg_;
};

class Init_ServiceEntry_liveness_timeout_secs
{
public:
  explicit Init_ServiceEntry_liveness_timeout_secs(::bosdyn_msgs::msg::ServiceEntry & msg)
  : msg_(msg)
  {}
  Init_ServiceEntry_host_payload_guid liveness_timeout_secs(::bosdyn_msgs::msg::ServiceEntry::_liveness_timeout_secs_type arg)
  {
    msg_.liveness_timeout_secs = std::move(arg);
    return Init_ServiceEntry_host_payload_guid(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceEntry msg_;
};

class Init_ServiceEntry_permission_required
{
public:
  explicit Init_ServiceEntry_permission_required(::bosdyn_msgs::msg::ServiceEntry & msg)
  : msg_(msg)
  {}
  Init_ServiceEntry_liveness_timeout_secs permission_required(::bosdyn_msgs::msg::ServiceEntry::_permission_required_type arg)
  {
    msg_.permission_required = std::move(arg);
    return Init_ServiceEntry_liveness_timeout_secs(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceEntry msg_;
};

class Init_ServiceEntry_user_token_required
{
public:
  explicit Init_ServiceEntry_user_token_required(::bosdyn_msgs::msg::ServiceEntry & msg)
  : msg_(msg)
  {}
  Init_ServiceEntry_permission_required user_token_required(::bosdyn_msgs::msg::ServiceEntry::_user_token_required_type arg)
  {
    msg_.user_token_required = std::move(arg);
    return Init_ServiceEntry_permission_required(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceEntry msg_;
};

class Init_ServiceEntry_last_update_is_set
{
public:
  explicit Init_ServiceEntry_last_update_is_set(::bosdyn_msgs::msg::ServiceEntry & msg)
  : msg_(msg)
  {}
  Init_ServiceEntry_user_token_required last_update_is_set(::bosdyn_msgs::msg::ServiceEntry::_last_update_is_set_type arg)
  {
    msg_.last_update_is_set = std::move(arg);
    return Init_ServiceEntry_user_token_required(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceEntry msg_;
};

class Init_ServiceEntry_last_update
{
public:
  explicit Init_ServiceEntry_last_update(::bosdyn_msgs::msg::ServiceEntry & msg)
  : msg_(msg)
  {}
  Init_ServiceEntry_last_update_is_set last_update(::bosdyn_msgs::msg::ServiceEntry::_last_update_type arg)
  {
    msg_.last_update = std::move(arg);
    return Init_ServiceEntry_last_update_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceEntry msg_;
};

class Init_ServiceEntry_authority
{
public:
  explicit Init_ServiceEntry_authority(::bosdyn_msgs::msg::ServiceEntry & msg)
  : msg_(msg)
  {}
  Init_ServiceEntry_last_update authority(::bosdyn_msgs::msg::ServiceEntry::_authority_type arg)
  {
    msg_.authority = std::move(arg);
    return Init_ServiceEntry_last_update(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceEntry msg_;
};

class Init_ServiceEntry_service_type
{
public:
  explicit Init_ServiceEntry_service_type(::bosdyn_msgs::msg::ServiceEntry & msg)
  : msg_(msg)
  {}
  Init_ServiceEntry_authority service_type(::bosdyn_msgs::msg::ServiceEntry::_service_type_type arg)
  {
    msg_.service_type = std::move(arg);
    return Init_ServiceEntry_authority(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceEntry msg_;
};

class Init_ServiceEntry_name
{
public:
  Init_ServiceEntry_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServiceEntry_service_type name(::bosdyn_msgs::msg::ServiceEntry::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ServiceEntry_service_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceEntry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ServiceEntry>()
{
  return bosdyn_msgs::msg::builder::Init_ServiceEntry_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY__BUILDER_HPP_
