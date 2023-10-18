// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetStreamParamsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_STREAM_PARAMS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_STREAM_PARAMS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_stream_params_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetStreamParamsResponse_params_is_set
{
public:
  explicit Init_GetStreamParamsResponse_params_is_set(::bosdyn_msgs::msg::GetStreamParamsResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetStreamParamsResponse params_is_set(::bosdyn_msgs::msg::GetStreamParamsResponse::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStreamParamsResponse msg_;
};

class Init_GetStreamParamsResponse_params
{
public:
  explicit Init_GetStreamParamsResponse_params(::bosdyn_msgs::msg::GetStreamParamsResponse & msg)
  : msg_(msg)
  {}
  Init_GetStreamParamsResponse_params_is_set params(::bosdyn_msgs::msg::GetStreamParamsResponse::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_GetStreamParamsResponse_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStreamParamsResponse msg_;
};

class Init_GetStreamParamsResponse_header_is_set
{
public:
  explicit Init_GetStreamParamsResponse_header_is_set(::bosdyn_msgs::msg::GetStreamParamsResponse & msg)
  : msg_(msg)
  {}
  Init_GetStreamParamsResponse_params header_is_set(::bosdyn_msgs::msg::GetStreamParamsResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetStreamParamsResponse_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStreamParamsResponse msg_;
};

class Init_GetStreamParamsResponse_header
{
public:
  Init_GetStreamParamsResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetStreamParamsResponse_header_is_set header(::bosdyn_msgs::msg::GetStreamParamsResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetStreamParamsResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStreamParamsResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetStreamParamsResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetStreamParamsResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_STREAM_PARAMS_RESPONSE__BUILDER_HPP_
