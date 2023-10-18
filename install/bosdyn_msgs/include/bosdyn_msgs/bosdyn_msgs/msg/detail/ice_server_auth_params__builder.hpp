// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ICEServerAuthParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ice_server_auth_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ICEServerAuthParams_credential
{
public:
  explicit Init_ICEServerAuthParams_credential(::bosdyn_msgs::msg::ICEServerAuthParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ICEServerAuthParams credential(::bosdyn_msgs::msg::ICEServerAuthParams::_credential_type arg)
  {
    msg_.credential = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServerAuthParams msg_;
};

class Init_ICEServerAuthParams_username_is_set
{
public:
  explicit Init_ICEServerAuthParams_username_is_set(::bosdyn_msgs::msg::ICEServerAuthParams & msg)
  : msg_(msg)
  {}
  Init_ICEServerAuthParams_credential username_is_set(::bosdyn_msgs::msg::ICEServerAuthParams::_username_is_set_type arg)
  {
    msg_.username_is_set = std::move(arg);
    return Init_ICEServerAuthParams_credential(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServerAuthParams msg_;
};

class Init_ICEServerAuthParams_username
{
public:
  Init_ICEServerAuthParams_username()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ICEServerAuthParams_username_is_set username(::bosdyn_msgs::msg::ICEServerAuthParams::_username_type arg)
  {
    msg_.username = std::move(arg);
    return Init_ICEServerAuthParams_username_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServerAuthParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ICEServerAuthParams>()
{
  return bosdyn_msgs::msg::builder::Init_ICEServerAuthParams_username();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS__BUILDER_HPP_
