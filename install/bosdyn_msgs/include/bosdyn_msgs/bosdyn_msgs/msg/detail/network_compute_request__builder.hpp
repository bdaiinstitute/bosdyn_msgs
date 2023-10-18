// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/network_compute_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NetworkComputeRequest_server_config_is_set
{
public:
  explicit Init_NetworkComputeRequest_server_config_is_set(::bosdyn_msgs::msg::NetworkComputeRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NetworkComputeRequest server_config_is_set(::bosdyn_msgs::msg::NetworkComputeRequest::_server_config_is_set_type arg)
  {
    msg_.server_config_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeRequest msg_;
};

class Init_NetworkComputeRequest_server_config
{
public:
  explicit Init_NetworkComputeRequest_server_config(::bosdyn_msgs::msg::NetworkComputeRequest & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeRequest_server_config_is_set server_config(::bosdyn_msgs::msg::NetworkComputeRequest::_server_config_type arg)
  {
    msg_.server_config = std::move(arg);
    return Init_NetworkComputeRequest_server_config_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeRequest msg_;
};

class Init_NetworkComputeRequest_input
{
public:
  explicit Init_NetworkComputeRequest_input(::bosdyn_msgs::msg::NetworkComputeRequest & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeRequest_server_config input(::bosdyn_msgs::msg::NetworkComputeRequest::_input_type arg)
  {
    msg_.input = std::move(arg);
    return Init_NetworkComputeRequest_server_config(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeRequest msg_;
};

class Init_NetworkComputeRequest_header_is_set
{
public:
  explicit Init_NetworkComputeRequest_header_is_set(::bosdyn_msgs::msg::NetworkComputeRequest & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeRequest_input header_is_set(::bosdyn_msgs::msg::NetworkComputeRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_NetworkComputeRequest_input(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeRequest msg_;
};

class Init_NetworkComputeRequest_header
{
public:
  Init_NetworkComputeRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetworkComputeRequest_header_is_set header(::bosdyn_msgs::msg::NetworkComputeRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NetworkComputeRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NetworkComputeRequest>()
{
  return bosdyn_msgs::msg::builder::Init_NetworkComputeRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_REQUEST__BUILDER_HPP_
