// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NetworkTuple.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_TUPLE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_TUPLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/network_tuple__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NetworkTuple_mtu_is_set
{
public:
  explicit Init_NetworkTuple_mtu_is_set(::bosdyn_msgs::msg::NetworkTuple & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NetworkTuple mtu_is_set(::bosdyn_msgs::msg::NetworkTuple::_mtu_is_set_type arg)
  {
    msg_.mtu_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkTuple msg_;
};

class Init_NetworkTuple_mtu
{
public:
  explicit Init_NetworkTuple_mtu(::bosdyn_msgs::msg::NetworkTuple & msg)
  : msg_(msg)
  {}
  Init_NetworkTuple_mtu_is_set mtu(::bosdyn_msgs::msg::NetworkTuple::_mtu_type arg)
  {
    msg_.mtu = std::move(arg);
    return Init_NetworkTuple_mtu_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkTuple msg_;
};

class Init_NetworkTuple_gateway_is_set
{
public:
  explicit Init_NetworkTuple_gateway_is_set(::bosdyn_msgs::msg::NetworkTuple & msg)
  : msg_(msg)
  {}
  Init_NetworkTuple_mtu gateway_is_set(::bosdyn_msgs::msg::NetworkTuple::_gateway_is_set_type arg)
  {
    msg_.gateway_is_set = std::move(arg);
    return Init_NetworkTuple_mtu(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkTuple msg_;
};

class Init_NetworkTuple_gateway
{
public:
  explicit Init_NetworkTuple_gateway(::bosdyn_msgs::msg::NetworkTuple & msg)
  : msg_(msg)
  {}
  Init_NetworkTuple_gateway_is_set gateway(::bosdyn_msgs::msg::NetworkTuple::_gateway_type arg)
  {
    msg_.gateway = std::move(arg);
    return Init_NetworkTuple_gateway_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkTuple msg_;
};

class Init_NetworkTuple_netmask_is_set
{
public:
  explicit Init_NetworkTuple_netmask_is_set(::bosdyn_msgs::msg::NetworkTuple & msg)
  : msg_(msg)
  {}
  Init_NetworkTuple_gateway netmask_is_set(::bosdyn_msgs::msg::NetworkTuple::_netmask_is_set_type arg)
  {
    msg_.netmask_is_set = std::move(arg);
    return Init_NetworkTuple_gateway(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkTuple msg_;
};

class Init_NetworkTuple_netmask
{
public:
  explicit Init_NetworkTuple_netmask(::bosdyn_msgs::msg::NetworkTuple & msg)
  : msg_(msg)
  {}
  Init_NetworkTuple_netmask_is_set netmask(::bosdyn_msgs::msg::NetworkTuple::_netmask_type arg)
  {
    msg_.netmask = std::move(arg);
    return Init_NetworkTuple_netmask_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkTuple msg_;
};

class Init_NetworkTuple_address_is_set
{
public:
  explicit Init_NetworkTuple_address_is_set(::bosdyn_msgs::msg::NetworkTuple & msg)
  : msg_(msg)
  {}
  Init_NetworkTuple_netmask address_is_set(::bosdyn_msgs::msg::NetworkTuple::_address_is_set_type arg)
  {
    msg_.address_is_set = std::move(arg);
    return Init_NetworkTuple_netmask(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkTuple msg_;
};

class Init_NetworkTuple_address
{
public:
  Init_NetworkTuple_address()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetworkTuple_address_is_set address(::bosdyn_msgs::msg::NetworkTuple::_address_type arg)
  {
    msg_.address = std::move(arg);
    return Init_NetworkTuple_address_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkTuple msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NetworkTuple>()
{
  return bosdyn_msgs::msg::builder::Init_NetworkTuple_address();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_TUPLE__BUILDER_HPP_
