// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ConfigureResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONFIGURE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONFIGURE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/configure_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ConfigureResponse_invalid_params_is_set
{
public:
  explicit Init_ConfigureResponse_invalid_params_is_set(::bosdyn_msgs::msg::ConfigureResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ConfigureResponse invalid_params_is_set(::bosdyn_msgs::msg::ConfigureResponse::_invalid_params_is_set_type arg)
  {
    msg_.invalid_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigureResponse msg_;
};

class Init_ConfigureResponse_invalid_params
{
public:
  explicit Init_ConfigureResponse_invalid_params(::bosdyn_msgs::msg::ConfigureResponse & msg)
  : msg_(msg)
  {}
  Init_ConfigureResponse_invalid_params_is_set invalid_params(::bosdyn_msgs::msg::ConfigureResponse::_invalid_params_type arg)
  {
    msg_.invalid_params = std::move(arg);
    return Init_ConfigureResponse_invalid_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigureResponse msg_;
};

class Init_ConfigureResponse_status
{
public:
  explicit Init_ConfigureResponse_status(::bosdyn_msgs::msg::ConfigureResponse & msg)
  : msg_(msg)
  {}
  Init_ConfigureResponse_invalid_params status(::bosdyn_msgs::msg::ConfigureResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ConfigureResponse_invalid_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigureResponse msg_;
};

class Init_ConfigureResponse_header_is_set
{
public:
  explicit Init_ConfigureResponse_header_is_set(::bosdyn_msgs::msg::ConfigureResponse & msg)
  : msg_(msg)
  {}
  Init_ConfigureResponse_status header_is_set(::bosdyn_msgs::msg::ConfigureResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ConfigureResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigureResponse msg_;
};

class Init_ConfigureResponse_header
{
public:
  Init_ConfigureResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureResponse_header_is_set header(::bosdyn_msgs::msg::ConfigureResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ConfigureResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigureResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ConfigureResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ConfigureResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONFIGURE_RESPONSE__BUILDER_HPP_
