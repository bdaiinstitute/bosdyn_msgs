// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RegisterEstopEndpointRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGISTER_ESTOP_ENDPOINT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGISTER_ESTOP_ENDPOINT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/register_estop_endpoint_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RegisterEstopEndpointRequest_new_endpoint_is_set
{
public:
  explicit Init_RegisterEstopEndpointRequest_new_endpoint_is_set(::bosdyn_msgs::msg::RegisterEstopEndpointRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RegisterEstopEndpointRequest new_endpoint_is_set(::bosdyn_msgs::msg::RegisterEstopEndpointRequest::_new_endpoint_is_set_type arg)
  {
    msg_.new_endpoint_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointRequest msg_;
};

class Init_RegisterEstopEndpointRequest_new_endpoint
{
public:
  explicit Init_RegisterEstopEndpointRequest_new_endpoint(::bosdyn_msgs::msg::RegisterEstopEndpointRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterEstopEndpointRequest_new_endpoint_is_set new_endpoint(::bosdyn_msgs::msg::RegisterEstopEndpointRequest::_new_endpoint_type arg)
  {
    msg_.new_endpoint = std::move(arg);
    return Init_RegisterEstopEndpointRequest_new_endpoint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointRequest msg_;
};

class Init_RegisterEstopEndpointRequest_target_config_id
{
public:
  explicit Init_RegisterEstopEndpointRequest_target_config_id(::bosdyn_msgs::msg::RegisterEstopEndpointRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterEstopEndpointRequest_new_endpoint target_config_id(::bosdyn_msgs::msg::RegisterEstopEndpointRequest::_target_config_id_type arg)
  {
    msg_.target_config_id = std::move(arg);
    return Init_RegisterEstopEndpointRequest_new_endpoint(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointRequest msg_;
};

class Init_RegisterEstopEndpointRequest_target_endpoint_is_set
{
public:
  explicit Init_RegisterEstopEndpointRequest_target_endpoint_is_set(::bosdyn_msgs::msg::RegisterEstopEndpointRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterEstopEndpointRequest_target_config_id target_endpoint_is_set(::bosdyn_msgs::msg::RegisterEstopEndpointRequest::_target_endpoint_is_set_type arg)
  {
    msg_.target_endpoint_is_set = std::move(arg);
    return Init_RegisterEstopEndpointRequest_target_config_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointRequest msg_;
};

class Init_RegisterEstopEndpointRequest_target_endpoint
{
public:
  explicit Init_RegisterEstopEndpointRequest_target_endpoint(::bosdyn_msgs::msg::RegisterEstopEndpointRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterEstopEndpointRequest_target_endpoint_is_set target_endpoint(::bosdyn_msgs::msg::RegisterEstopEndpointRequest::_target_endpoint_type arg)
  {
    msg_.target_endpoint = std::move(arg);
    return Init_RegisterEstopEndpointRequest_target_endpoint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointRequest msg_;
};

class Init_RegisterEstopEndpointRequest_header_is_set
{
public:
  explicit Init_RegisterEstopEndpointRequest_header_is_set(::bosdyn_msgs::msg::RegisterEstopEndpointRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterEstopEndpointRequest_target_endpoint header_is_set(::bosdyn_msgs::msg::RegisterEstopEndpointRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RegisterEstopEndpointRequest_target_endpoint(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointRequest msg_;
};

class Init_RegisterEstopEndpointRequest_header
{
public:
  Init_RegisterEstopEndpointRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterEstopEndpointRequest_header_is_set header(::bosdyn_msgs::msg::RegisterEstopEndpointRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RegisterEstopEndpointRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RegisterEstopEndpointRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RegisterEstopEndpointRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGISTER_ESTOP_ENDPOINT_REQUEST__BUILDER_HPP_
