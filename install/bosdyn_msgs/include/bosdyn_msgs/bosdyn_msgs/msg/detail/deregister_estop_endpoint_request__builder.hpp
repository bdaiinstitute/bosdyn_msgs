// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DeregisterEstopEndpointRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DEREGISTER_ESTOP_ENDPOINT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DEREGISTER_ESTOP_ENDPOINT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/deregister_estop_endpoint_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DeregisterEstopEndpointRequest_target_config_id
{
public:
  explicit Init_DeregisterEstopEndpointRequest_target_config_id(::bosdyn_msgs::msg::DeregisterEstopEndpointRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DeregisterEstopEndpointRequest target_config_id(::bosdyn_msgs::msg::DeregisterEstopEndpointRequest::_target_config_id_type arg)
  {
    msg_.target_config_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeregisterEstopEndpointRequest msg_;
};

class Init_DeregisterEstopEndpointRequest_target_endpoint_is_set
{
public:
  explicit Init_DeregisterEstopEndpointRequest_target_endpoint_is_set(::bosdyn_msgs::msg::DeregisterEstopEndpointRequest & msg)
  : msg_(msg)
  {}
  Init_DeregisterEstopEndpointRequest_target_config_id target_endpoint_is_set(::bosdyn_msgs::msg::DeregisterEstopEndpointRequest::_target_endpoint_is_set_type arg)
  {
    msg_.target_endpoint_is_set = std::move(arg);
    return Init_DeregisterEstopEndpointRequest_target_config_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeregisterEstopEndpointRequest msg_;
};

class Init_DeregisterEstopEndpointRequest_target_endpoint
{
public:
  explicit Init_DeregisterEstopEndpointRequest_target_endpoint(::bosdyn_msgs::msg::DeregisterEstopEndpointRequest & msg)
  : msg_(msg)
  {}
  Init_DeregisterEstopEndpointRequest_target_endpoint_is_set target_endpoint(::bosdyn_msgs::msg::DeregisterEstopEndpointRequest::_target_endpoint_type arg)
  {
    msg_.target_endpoint = std::move(arg);
    return Init_DeregisterEstopEndpointRequest_target_endpoint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeregisterEstopEndpointRequest msg_;
};

class Init_DeregisterEstopEndpointRequest_header_is_set
{
public:
  explicit Init_DeregisterEstopEndpointRequest_header_is_set(::bosdyn_msgs::msg::DeregisterEstopEndpointRequest & msg)
  : msg_(msg)
  {}
  Init_DeregisterEstopEndpointRequest_target_endpoint header_is_set(::bosdyn_msgs::msg::DeregisterEstopEndpointRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DeregisterEstopEndpointRequest_target_endpoint(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeregisterEstopEndpointRequest msg_;
};

class Init_DeregisterEstopEndpointRequest_header
{
public:
  Init_DeregisterEstopEndpointRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeregisterEstopEndpointRequest_header_is_set header(::bosdyn_msgs::msg::DeregisterEstopEndpointRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DeregisterEstopEndpointRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeregisterEstopEndpointRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DeregisterEstopEndpointRequest>()
{
  return bosdyn_msgs::msg::builder::Init_DeregisterEstopEndpointRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DEREGISTER_ESTOP_ENDPOINT_REQUEST__BUILDER_HPP_
