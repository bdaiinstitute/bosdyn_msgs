// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ClientMetadata.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLIENT_METADATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLIENT_METADATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/client_metadata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ClientMetadata_client_type
{
public:
  explicit Init_ClientMetadata_client_type(::bosdyn_msgs::msg::ClientMetadata & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ClientMetadata client_type(::bosdyn_msgs::msg::ClientMetadata::_client_type_type arg)
  {
    msg_.client_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClientMetadata msg_;
};

class Init_ClientMetadata_client_id
{
public:
  explicit Init_ClientMetadata_client_id(::bosdyn_msgs::msg::ClientMetadata & msg)
  : msg_(msg)
  {}
  Init_ClientMetadata_client_type client_id(::bosdyn_msgs::msg::ClientMetadata::_client_id_type arg)
  {
    msg_.client_id = std::move(arg);
    return Init_ClientMetadata_client_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClientMetadata msg_;
};

class Init_ClientMetadata_client_software_version
{
public:
  explicit Init_ClientMetadata_client_software_version(::bosdyn_msgs::msg::ClientMetadata & msg)
  : msg_(msg)
  {}
  Init_ClientMetadata_client_id client_software_version(::bosdyn_msgs::msg::ClientMetadata::_client_software_version_type arg)
  {
    msg_.client_software_version = std::move(arg);
    return Init_ClientMetadata_client_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClientMetadata msg_;
};

class Init_ClientMetadata_client_username
{
public:
  explicit Init_ClientMetadata_client_username(::bosdyn_msgs::msg::ClientMetadata & msg)
  : msg_(msg)
  {}
  Init_ClientMetadata_client_software_version client_username(::bosdyn_msgs::msg::ClientMetadata::_client_username_type arg)
  {
    msg_.client_username = std::move(arg);
    return Init_ClientMetadata_client_software_version(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClientMetadata msg_;
};

class Init_ClientMetadata_session_name
{
public:
  Init_ClientMetadata_session_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClientMetadata_client_username session_name(::bosdyn_msgs::msg::ClientMetadata::_session_name_type arg)
  {
    msg_.session_name = std::move(arg);
    return Init_ClientMetadata_client_username(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClientMetadata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ClientMetadata>()
{
  return bosdyn_msgs::msg::builder::Init_ClientMetadata_session_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLIENT_METADATA__BUILDER_HPP_
