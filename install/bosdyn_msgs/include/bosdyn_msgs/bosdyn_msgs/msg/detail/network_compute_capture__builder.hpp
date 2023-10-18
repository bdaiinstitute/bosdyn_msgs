// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeCapture.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPTURE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/network_compute_capture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NetworkComputeCapture_server_config_is_set
{
public:
  explicit Init_NetworkComputeCapture_server_config_is_set(::bosdyn_msgs::msg::NetworkComputeCapture & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NetworkComputeCapture server_config_is_set(::bosdyn_msgs::msg::NetworkComputeCapture::_server_config_is_set_type arg)
  {
    msg_.server_config_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeCapture msg_;
};

class Init_NetworkComputeCapture_server_config
{
public:
  explicit Init_NetworkComputeCapture_server_config(::bosdyn_msgs::msg::NetworkComputeCapture & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeCapture_server_config_is_set server_config(::bosdyn_msgs::msg::NetworkComputeCapture::_server_config_type arg)
  {
    msg_.server_config = std::move(arg);
    return Init_NetworkComputeCapture_server_config_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeCapture msg_;
};

class Init_NetworkComputeCapture_input
{
public:
  Init_NetworkComputeCapture_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetworkComputeCapture_server_config input(::bosdyn_msgs::msg::NetworkComputeCapture::_input_type arg)
  {
    msg_.input = std::move(arg);
    return Init_NetworkComputeCapture_server_config(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeCapture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NetworkComputeCapture>()
{
  return bosdyn_msgs::msg::builder::Init_NetworkComputeCapture_input();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPTURE__BUILDER_HPP_
