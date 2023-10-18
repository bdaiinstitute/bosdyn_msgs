// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/network_compute_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NetworkComputeError_message
{
public:
  explicit Init_NetworkComputeError_message(::bosdyn_msgs::msg::NetworkComputeError & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NetworkComputeError message(::bosdyn_msgs::msg::NetworkComputeError::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeError msg_;
};

class Init_NetworkComputeError_network_compute_status
{
public:
  explicit Init_NetworkComputeError_network_compute_status(::bosdyn_msgs::msg::NetworkComputeError & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeError_message network_compute_status(::bosdyn_msgs::msg::NetworkComputeError::_network_compute_status_type arg)
  {
    msg_.network_compute_status = std::move(arg);
    return Init_NetworkComputeError_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeError msg_;
};

class Init_NetworkComputeError_error
{
public:
  explicit Init_NetworkComputeError_error(::bosdyn_msgs::msg::NetworkComputeError & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeError_network_compute_status error(::bosdyn_msgs::msg::NetworkComputeError::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_NetworkComputeError_network_compute_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeError msg_;
};

class Init_NetworkComputeError_service_name
{
public:
  Init_NetworkComputeError_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetworkComputeError_error service_name(::bosdyn_msgs::msg::NetworkComputeError::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_NetworkComputeError_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NetworkComputeError>()
{
  return bosdyn_msgs::msg::builder::Init_NetworkComputeError_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_ERROR__BUILDER_HPP_
