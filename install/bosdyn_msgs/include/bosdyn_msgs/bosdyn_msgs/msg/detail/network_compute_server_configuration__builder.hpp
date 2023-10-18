// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeServerConfiguration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_SERVER_CONFIGURATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_SERVER_CONFIGURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/network_compute_server_configuration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NetworkComputeServerConfiguration_service_name
{
public:
  Init_NetworkComputeServerConfiguration_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::NetworkComputeServerConfiguration service_name(::bosdyn_msgs::msg::NetworkComputeServerConfiguration::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeServerConfiguration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NetworkComputeServerConfiguration>()
{
  return bosdyn_msgs::msg::builder::Init_NetworkComputeServerConfiguration_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_SERVER_CONFIGURATION__BUILDER_HPP_
