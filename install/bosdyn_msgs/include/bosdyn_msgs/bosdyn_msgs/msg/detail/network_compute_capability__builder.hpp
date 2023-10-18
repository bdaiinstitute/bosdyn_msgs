// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeCapability.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPABILITY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPABILITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/network_compute_capability__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NetworkComputeCapability_models_is_set
{
public:
  explicit Init_NetworkComputeCapability_models_is_set(::bosdyn_msgs::msg::NetworkComputeCapability & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NetworkComputeCapability models_is_set(::bosdyn_msgs::msg::NetworkComputeCapability::_models_is_set_type arg)
  {
    msg_.models_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeCapability msg_;
};

class Init_NetworkComputeCapability_models
{
public:
  explicit Init_NetworkComputeCapability_models(::bosdyn_msgs::msg::NetworkComputeCapability & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeCapability_models_is_set models(::bosdyn_msgs::msg::NetworkComputeCapability::_models_type arg)
  {
    msg_.models = std::move(arg);
    return Init_NetworkComputeCapability_models_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeCapability msg_;
};

class Init_NetworkComputeCapability_server_config_is_set
{
public:
  explicit Init_NetworkComputeCapability_server_config_is_set(::bosdyn_msgs::msg::NetworkComputeCapability & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeCapability_models server_config_is_set(::bosdyn_msgs::msg::NetworkComputeCapability::_server_config_is_set_type arg)
  {
    msg_.server_config_is_set = std::move(arg);
    return Init_NetworkComputeCapability_models(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeCapability msg_;
};

class Init_NetworkComputeCapability_server_config
{
public:
  Init_NetworkComputeCapability_server_config()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetworkComputeCapability_server_config_is_set server_config(::bosdyn_msgs::msg::NetworkComputeCapability::_server_config_type arg)
  {
    msg_.server_config = std::move(arg);
    return Init_NetworkComputeCapability_server_config_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeCapability msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NetworkComputeCapability>()
{
  return bosdyn_msgs::msg::builder::Init_NetworkComputeCapability_server_config();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPABILITY__BUILDER_HPP_
