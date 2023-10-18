// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RegisterEstopEndpointResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGISTER_ESTOP_ENDPOINT_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGISTER_ESTOP_ENDPOINT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/register_estop_endpoint_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RegisterEstopEndpointResponse_status
{
public:
  explicit Init_RegisterEstopEndpointResponse_status(::bosdyn_msgs::msg::RegisterEstopEndpointResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RegisterEstopEndpointResponse status(::bosdyn_msgs::msg::RegisterEstopEndpointResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointResponse msg_;
};

class Init_RegisterEstopEndpointResponse_new_endpoint_is_set
{
public:
  explicit Init_RegisterEstopEndpointResponse_new_endpoint_is_set(::bosdyn_msgs::msg::RegisterEstopEndpointResponse & msg)
  : msg_(msg)
  {}
  Init_RegisterEstopEndpointResponse_status new_endpoint_is_set(::bosdyn_msgs::msg::RegisterEstopEndpointResponse::_new_endpoint_is_set_type arg)
  {
    msg_.new_endpoint_is_set = std::move(arg);
    return Init_RegisterEstopEndpointResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointResponse msg_;
};

class Init_RegisterEstopEndpointResponse_new_endpoint
{
public:
  explicit Init_RegisterEstopEndpointResponse_new_endpoint(::bosdyn_msgs::msg::RegisterEstopEndpointResponse & msg)
  : msg_(msg)
  {}
  Init_RegisterEstopEndpointResponse_new_endpoint_is_set new_endpoint(::bosdyn_msgs::msg::RegisterEstopEndpointResponse::_new_endpoint_type arg)
  {
    msg_.new_endpoint = std::move(arg);
    return Init_RegisterEstopEndpointResponse_new_endpoint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointResponse msg_;
};

class Init_RegisterEstopEndpointResponse_request_is_set
{
public:
  explicit Init_RegisterEstopEndpointResponse_request_is_set(::bosdyn_msgs::msg::RegisterEstopEndpointResponse & msg)
  : msg_(msg)
  {}
  Init_RegisterEstopEndpointResponse_new_endpoint request_is_set(::bosdyn_msgs::msg::RegisterEstopEndpointResponse::_request_is_set_type arg)
  {
    msg_.request_is_set = std::move(arg);
    return Init_RegisterEstopEndpointResponse_new_endpoint(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointResponse msg_;
};

class Init_RegisterEstopEndpointResponse_request
{
public:
  explicit Init_RegisterEstopEndpointResponse_request(::bosdyn_msgs::msg::RegisterEstopEndpointResponse & msg)
  : msg_(msg)
  {}
  Init_RegisterEstopEndpointResponse_request_is_set request(::bosdyn_msgs::msg::RegisterEstopEndpointResponse::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RegisterEstopEndpointResponse_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointResponse msg_;
};

class Init_RegisterEstopEndpointResponse_header_is_set
{
public:
  explicit Init_RegisterEstopEndpointResponse_header_is_set(::bosdyn_msgs::msg::RegisterEstopEndpointResponse & msg)
  : msg_(msg)
  {}
  Init_RegisterEstopEndpointResponse_request header_is_set(::bosdyn_msgs::msg::RegisterEstopEndpointResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RegisterEstopEndpointResponse_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointResponse msg_;
};

class Init_RegisterEstopEndpointResponse_header
{
public:
  Init_RegisterEstopEndpointResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterEstopEndpointResponse_header_is_set header(::bosdyn_msgs::msg::RegisterEstopEndpointResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RegisterEstopEndpointResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegisterEstopEndpointResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RegisterEstopEndpointResponse>()
{
  return bosdyn_msgs::msg::builder::Init_RegisterEstopEndpointResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGISTER_ESTOP_ENDPOINT_RESPONSE__BUILDER_HPP_
