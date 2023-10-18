// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetEstopConfigResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_ESTOP_CONFIG_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_ESTOP_CONFIG_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_estop_config_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetEstopConfigResponse_status
{
public:
  explicit Init_SetEstopConfigResponse_status(::bosdyn_msgs::msg::SetEstopConfigResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetEstopConfigResponse status(::bosdyn_msgs::msg::SetEstopConfigResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetEstopConfigResponse msg_;
};

class Init_SetEstopConfigResponse_active_config_is_set
{
public:
  explicit Init_SetEstopConfigResponse_active_config_is_set(::bosdyn_msgs::msg::SetEstopConfigResponse & msg)
  : msg_(msg)
  {}
  Init_SetEstopConfigResponse_status active_config_is_set(::bosdyn_msgs::msg::SetEstopConfigResponse::_active_config_is_set_type arg)
  {
    msg_.active_config_is_set = std::move(arg);
    return Init_SetEstopConfigResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetEstopConfigResponse msg_;
};

class Init_SetEstopConfigResponse_active_config
{
public:
  explicit Init_SetEstopConfigResponse_active_config(::bosdyn_msgs::msg::SetEstopConfigResponse & msg)
  : msg_(msg)
  {}
  Init_SetEstopConfigResponse_active_config_is_set active_config(::bosdyn_msgs::msg::SetEstopConfigResponse::_active_config_type arg)
  {
    msg_.active_config = std::move(arg);
    return Init_SetEstopConfigResponse_active_config_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetEstopConfigResponse msg_;
};

class Init_SetEstopConfigResponse_request_is_set
{
public:
  explicit Init_SetEstopConfigResponse_request_is_set(::bosdyn_msgs::msg::SetEstopConfigResponse & msg)
  : msg_(msg)
  {}
  Init_SetEstopConfigResponse_active_config request_is_set(::bosdyn_msgs::msg::SetEstopConfigResponse::_request_is_set_type arg)
  {
    msg_.request_is_set = std::move(arg);
    return Init_SetEstopConfigResponse_active_config(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetEstopConfigResponse msg_;
};

class Init_SetEstopConfigResponse_request
{
public:
  explicit Init_SetEstopConfigResponse_request(::bosdyn_msgs::msg::SetEstopConfigResponse & msg)
  : msg_(msg)
  {}
  Init_SetEstopConfigResponse_request_is_set request(::bosdyn_msgs::msg::SetEstopConfigResponse::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetEstopConfigResponse_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetEstopConfigResponse msg_;
};

class Init_SetEstopConfigResponse_header_is_set
{
public:
  explicit Init_SetEstopConfigResponse_header_is_set(::bosdyn_msgs::msg::SetEstopConfigResponse & msg)
  : msg_(msg)
  {}
  Init_SetEstopConfigResponse_request header_is_set(::bosdyn_msgs::msg::SetEstopConfigResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetEstopConfigResponse_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetEstopConfigResponse msg_;
};

class Init_SetEstopConfigResponse_header
{
public:
  Init_SetEstopConfigResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetEstopConfigResponse_header_is_set header(::bosdyn_msgs::msg::SetEstopConfigResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetEstopConfigResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetEstopConfigResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetEstopConfigResponse>()
{
  return bosdyn_msgs::msg::builder::Init_SetEstopConfigResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_ESTOP_CONFIG_RESPONSE__BUILDER_HPP_
