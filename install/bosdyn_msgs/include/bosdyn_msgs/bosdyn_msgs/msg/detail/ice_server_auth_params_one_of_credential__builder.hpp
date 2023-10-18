// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ICEServerAuthParamsOneOfCredential.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_ONE_OF_CREDENTIAL__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_ONE_OF_CREDENTIAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ice_server_auth_params_one_of_credential__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ICEServerAuthParamsOneOfCredential_credential_choice
{
public:
  explicit Init_ICEServerAuthParamsOneOfCredential_credential_choice(::bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential credential_choice(::bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential::_credential_choice_type arg)
  {
    msg_.credential_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential msg_;
};

class Init_ICEServerAuthParamsOneOfCredential_password
{
public:
  explicit Init_ICEServerAuthParamsOneOfCredential_password(::bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential & msg)
  : msg_(msg)
  {}
  Init_ICEServerAuthParamsOneOfCredential_credential_choice password(::bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential::_password_type arg)
  {
    msg_.password = std::move(arg);
    return Init_ICEServerAuthParamsOneOfCredential_credential_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential msg_;
};

class Init_ICEServerAuthParamsOneOfCredential_oauth
{
public:
  Init_ICEServerAuthParamsOneOfCredential_oauth()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ICEServerAuthParamsOneOfCredential_password oauth(::bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential::_oauth_type arg)
  {
    msg_.oauth = std::move(arg);
    return Init_ICEServerAuthParamsOneOfCredential_password(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential>()
{
  return bosdyn_msgs::msg::builder::Init_ICEServerAuthParamsOneOfCredential_oauth();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_ONE_OF_CREDENTIAL__BUILDER_HPP_
