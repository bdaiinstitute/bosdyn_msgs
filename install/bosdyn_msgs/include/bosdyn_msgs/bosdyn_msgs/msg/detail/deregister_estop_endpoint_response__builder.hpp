// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DeregisterEstopEndpointResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DEREGISTER_ESTOP_ENDPOINT_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DEREGISTER_ESTOP_ENDPOINT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/deregister_estop_endpoint_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DeregisterEstopEndpointResponse_status
{
public:
  explicit Init_DeregisterEstopEndpointResponse_status(::bosdyn_msgs::msg::DeregisterEstopEndpointResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DeregisterEstopEndpointResponse status(::bosdyn_msgs::msg::DeregisterEstopEndpointResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeregisterEstopEndpointResponse msg_;
};

class Init_DeregisterEstopEndpointResponse_request_is_set
{
public:
  explicit Init_DeregisterEstopEndpointResponse_request_is_set(::bosdyn_msgs::msg::DeregisterEstopEndpointResponse & msg)
  : msg_(msg)
  {}
  Init_DeregisterEstopEndpointResponse_status request_is_set(::bosdyn_msgs::msg::DeregisterEstopEndpointResponse::_request_is_set_type arg)
  {
    msg_.request_is_set = std::move(arg);
    return Init_DeregisterEstopEndpointResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeregisterEstopEndpointResponse msg_;
};

class Init_DeregisterEstopEndpointResponse_request
{
public:
  explicit Init_DeregisterEstopEndpointResponse_request(::bosdyn_msgs::msg::DeregisterEstopEndpointResponse & msg)
  : msg_(msg)
  {}
  Init_DeregisterEstopEndpointResponse_request_is_set request(::bosdyn_msgs::msg::DeregisterEstopEndpointResponse::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DeregisterEstopEndpointResponse_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeregisterEstopEndpointResponse msg_;
};

class Init_DeregisterEstopEndpointResponse_header_is_set
{
public:
  explicit Init_DeregisterEstopEndpointResponse_header_is_set(::bosdyn_msgs::msg::DeregisterEstopEndpointResponse & msg)
  : msg_(msg)
  {}
  Init_DeregisterEstopEndpointResponse_request header_is_set(::bosdyn_msgs::msg::DeregisterEstopEndpointResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DeregisterEstopEndpointResponse_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeregisterEstopEndpointResponse msg_;
};

class Init_DeregisterEstopEndpointResponse_header
{
public:
  Init_DeregisterEstopEndpointResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeregisterEstopEndpointResponse_header_is_set header(::bosdyn_msgs::msg::DeregisterEstopEndpointResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DeregisterEstopEndpointResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeregisterEstopEndpointResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DeregisterEstopEndpointResponse>()
{
  return bosdyn_msgs::msg::builder::Init_DeregisterEstopEndpointResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DEREGISTER_ESTOP_ENDPOINT_RESPONSE__BUILDER_HPP_
