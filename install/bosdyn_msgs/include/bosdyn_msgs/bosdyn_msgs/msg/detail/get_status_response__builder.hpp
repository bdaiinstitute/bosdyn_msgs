// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetStatusResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_STATUS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_STATUS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_status_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetStatusResponse_network_compute_errors
{
public:
  explicit Init_GetStatusResponse_network_compute_errors(::bosdyn_msgs::msg::GetStatusResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetStatusResponse network_compute_errors(::bosdyn_msgs::msg::GetStatusResponse::_network_compute_errors_type arg)
  {
    msg_.network_compute_errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStatusResponse msg_;
};

class Init_GetStatusResponse_service_errors
{
public:
  explicit Init_GetStatusResponse_service_errors(::bosdyn_msgs::msg::GetStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetStatusResponse_network_compute_errors service_errors(::bosdyn_msgs::msg::GetStatusResponse::_service_errors_type arg)
  {
    msg_.service_errors = std::move(arg);
    return Init_GetStatusResponse_network_compute_errors(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStatusResponse msg_;
};

class Init_GetStatusResponse_data_errors
{
public:
  explicit Init_GetStatusResponse_data_errors(::bosdyn_msgs::msg::GetStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetStatusResponse_service_errors data_errors(::bosdyn_msgs::msg::GetStatusResponse::_data_errors_type arg)
  {
    msg_.data_errors = std::move(arg);
    return Init_GetStatusResponse_service_errors(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStatusResponse msg_;
};

class Init_GetStatusResponse_data_saved
{
public:
  explicit Init_GetStatusResponse_data_saved(::bosdyn_msgs::msg::GetStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetStatusResponse_data_errors data_saved(::bosdyn_msgs::msg::GetStatusResponse::_data_saved_type arg)
  {
    msg_.data_saved = std::move(arg);
    return Init_GetStatusResponse_data_errors(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStatusResponse msg_;
};

class Init_GetStatusResponse_status
{
public:
  explicit Init_GetStatusResponse_status(::bosdyn_msgs::msg::GetStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetStatusResponse_data_saved status(::bosdyn_msgs::msg::GetStatusResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetStatusResponse_data_saved(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStatusResponse msg_;
};

class Init_GetStatusResponse_header_is_set
{
public:
  explicit Init_GetStatusResponse_header_is_set(::bosdyn_msgs::msg::GetStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetStatusResponse_status header_is_set(::bosdyn_msgs::msg::GetStatusResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetStatusResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStatusResponse msg_;
};

class Init_GetStatusResponse_header
{
public:
  Init_GetStatusResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetStatusResponse_header_is_set header(::bosdyn_msgs::msg::GetStatusResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetStatusResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetStatusResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetStatusResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetStatusResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_STATUS_RESPONSE__BUILDER_HPP_
