// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ICEServer.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ice_server__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ICEServer_auth_is_set
{
public:
  explicit Init_ICEServer_auth_is_set(::bosdyn_msgs::msg::ICEServer & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ICEServer auth_is_set(::bosdyn_msgs::msg::ICEServer::_auth_is_set_type arg)
  {
    msg_.auth_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServer msg_;
};

class Init_ICEServer_auth
{
public:
  explicit Init_ICEServer_auth(::bosdyn_msgs::msg::ICEServer & msg)
  : msg_(msg)
  {}
  Init_ICEServer_auth_is_set auth(::bosdyn_msgs::msg::ICEServer::_auth_type arg)
  {
    msg_.auth = std::move(arg);
    return Init_ICEServer_auth_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServer msg_;
};

class Init_ICEServer_transport
{
public:
  explicit Init_ICEServer_transport(::bosdyn_msgs::msg::ICEServer & msg)
  : msg_(msg)
  {}
  Init_ICEServer_auth transport(::bosdyn_msgs::msg::ICEServer::_transport_type arg)
  {
    msg_.transport = std::move(arg);
    return Init_ICEServer_auth(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServer msg_;
};

class Init_ICEServer_port
{
public:
  explicit Init_ICEServer_port(::bosdyn_msgs::msg::ICEServer & msg)
  : msg_(msg)
  {}
  Init_ICEServer_transport port(::bosdyn_msgs::msg::ICEServer::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_ICEServer_transport(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServer msg_;
};

class Init_ICEServer_address
{
public:
  explicit Init_ICEServer_address(::bosdyn_msgs::msg::ICEServer & msg)
  : msg_(msg)
  {}
  Init_ICEServer_port address(::bosdyn_msgs::msg::ICEServer::_address_type arg)
  {
    msg_.address = std::move(arg);
    return Init_ICEServer_port(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServer msg_;
};

class Init_ICEServer_type
{
public:
  Init_ICEServer_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ICEServer_address type(::bosdyn_msgs::msg::ICEServer::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ICEServer_address(msg_);
  }

private:
  ::bosdyn_msgs::msg::ICEServer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ICEServer>()
{
  return bosdyn_msgs::msg::builder::Init_ICEServer_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER__BUILDER_HPP_
