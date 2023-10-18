// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetStreamParamsRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_STREAM_PARAMS_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_STREAM_PARAMS_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_stream_params_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetStreamParamsRequest_params_is_set
{
public:
  explicit Init_SetStreamParamsRequest_params_is_set(::bosdyn_msgs::msg::SetStreamParamsRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetStreamParamsRequest params_is_set(::bosdyn_msgs::msg::SetStreamParamsRequest::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetStreamParamsRequest msg_;
};

class Init_SetStreamParamsRequest_params
{
public:
  explicit Init_SetStreamParamsRequest_params(::bosdyn_msgs::msg::SetStreamParamsRequest & msg)
  : msg_(msg)
  {}
  Init_SetStreamParamsRequest_params_is_set params(::bosdyn_msgs::msg::SetStreamParamsRequest::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_SetStreamParamsRequest_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetStreamParamsRequest msg_;
};

class Init_SetStreamParamsRequest_header_is_set
{
public:
  explicit Init_SetStreamParamsRequest_header_is_set(::bosdyn_msgs::msg::SetStreamParamsRequest & msg)
  : msg_(msg)
  {}
  Init_SetStreamParamsRequest_params header_is_set(::bosdyn_msgs::msg::SetStreamParamsRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetStreamParamsRequest_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetStreamParamsRequest msg_;
};

class Init_SetStreamParamsRequest_header
{
public:
  Init_SetStreamParamsRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetStreamParamsRequest_header_is_set header(::bosdyn_msgs::msg::SetStreamParamsRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetStreamParamsRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetStreamParamsRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetStreamParamsRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SetStreamParamsRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_STREAM_PARAMS_REQUEST__BUILDER_HPP_
