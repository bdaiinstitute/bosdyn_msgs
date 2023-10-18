// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ICEServerAuthParamsOauthPair.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_OAUTH_PAIR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_OAUTH_PAIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ice_server_auth_params_oauth_pair__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ICEServerAuthParamsOauthPair_access_token
{
public:
  explicit Init_ICEServerAuthParamsOauthPair_access_token(::bosdyn_msgs::msg::ICEServerAuthParamsOauthPair & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ICEServerAuthParamsOauthPair access_token(::bosdyn_msgs::msg::ICEServerAuthParamsOauthPair::_access_token_type arg)
  {
    msg_.access_token = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServerAuthParamsOauthPair msg_;
};

class Init_ICEServerAuthParamsOauthPair_mac_key
{
public:
  Init_ICEServerAuthParamsOauthPair_mac_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ICEServerAuthParamsOauthPair_access_token mac_key(::bosdyn_msgs::msg::ICEServerAuthParamsOauthPair::_mac_key_type arg)
  {
    msg_.mac_key = std::move(arg);
    return Init_ICEServerAuthParamsOauthPair_access_token(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServerAuthParamsOauthPair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ICEServerAuthParamsOauthPair>()
{
  return bosdyn_msgs::msg::builder::Init_ICEServerAuthParamsOauthPair_mac_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_OAUTH_PAIR__BUILDER_HPP_
