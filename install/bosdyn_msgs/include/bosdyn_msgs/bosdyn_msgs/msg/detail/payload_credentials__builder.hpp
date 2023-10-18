// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PayloadCredentials.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_CREDENTIALS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_CREDENTIALS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/payload_credentials__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PayloadCredentials_secret
{
public:
  explicit Init_PayloadCredentials_secret(::bosdyn_msgs::msg::PayloadCredentials & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PayloadCredentials secret(::bosdyn_msgs::msg::PayloadCredentials::_secret_type arg)
  {
    msg_.secret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadCredentials msg_;
};

class Init_PayloadCredentials_guid
{
public:
  Init_PayloadCredentials_guid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadCredentials_secret guid(::bosdyn_msgs::msg::PayloadCredentials::_guid_type arg)
  {
    msg_.guid = std::move(arg);
    return Init_PayloadCredentials_secret(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadCredentials msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PayloadCredentials>()
{
  return bosdyn_msgs::msg::builder::Init_PayloadCredentials_guid();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_CREDENTIALS__BUILDER_HPP_
