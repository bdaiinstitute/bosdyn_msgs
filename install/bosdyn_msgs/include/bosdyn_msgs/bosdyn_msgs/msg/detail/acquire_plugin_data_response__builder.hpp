// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AcquirePluginDataResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_PLUGIN_DATA_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_PLUGIN_DATA_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/acquire_plugin_data_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AcquirePluginDataResponse_custom_param_error_is_set
{
public:
  explicit Init_AcquirePluginDataResponse_custom_param_error_is_set(::bosdyn_msgs::msg::AcquirePluginDataResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AcquirePluginDataResponse custom_param_error_is_set(::bosdyn_msgs::msg::AcquirePluginDataResponse::_custom_param_error_is_set_type arg)
  {
    msg_.custom_param_error_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataResponse msg_;
};

class Init_AcquirePluginDataResponse_custom_param_error
{
public:
  explicit Init_AcquirePluginDataResponse_custom_param_error(::bosdyn_msgs::msg::AcquirePluginDataResponse & msg)
  : msg_(msg)
  {}
  Init_AcquirePluginDataResponse_custom_param_error_is_set custom_param_error(::bosdyn_msgs::msg::AcquirePluginDataResponse::_custom_param_error_type arg)
  {
    msg_.custom_param_error = std::move(arg);
    return Init_AcquirePluginDataResponse_custom_param_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataResponse msg_;
};

class Init_AcquirePluginDataResponse_timeout_deadline_is_set
{
public:
  explicit Init_AcquirePluginDataResponse_timeout_deadline_is_set(::bosdyn_msgs::msg::AcquirePluginDataResponse & msg)
  : msg_(msg)
  {}
  Init_AcquirePluginDataResponse_custom_param_error timeout_deadline_is_set(::bosdyn_msgs::msg::AcquirePluginDataResponse::_timeout_deadline_is_set_type arg)
  {
    msg_.timeout_deadline_is_set = std::move(arg);
    return Init_AcquirePluginDataResponse_custom_param_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataResponse msg_;
};

class Init_AcquirePluginDataResponse_timeout_deadline
{
public:
  explicit Init_AcquirePluginDataResponse_timeout_deadline(::bosdyn_msgs::msg::AcquirePluginDataResponse & msg)
  : msg_(msg)
  {}
  Init_AcquirePluginDataResponse_timeout_deadline_is_set timeout_deadline(::bosdyn_msgs::msg::AcquirePluginDataResponse::_timeout_deadline_type arg)
  {
    msg_.timeout_deadline = std::move(arg);
    return Init_AcquirePluginDataResponse_timeout_deadline_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataResponse msg_;
};

class Init_AcquirePluginDataResponse_request_id
{
public:
  explicit Init_AcquirePluginDataResponse_request_id(::bosdyn_msgs::msg::AcquirePluginDataResponse & msg)
  : msg_(msg)
  {}
  Init_AcquirePluginDataResponse_timeout_deadline request_id(::bosdyn_msgs::msg::AcquirePluginDataResponse::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_AcquirePluginDataResponse_timeout_deadline(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataResponse msg_;
};

class Init_AcquirePluginDataResponse_status
{
public:
  explicit Init_AcquirePluginDataResponse_status(::bosdyn_msgs::msg::AcquirePluginDataResponse & msg)
  : msg_(msg)
  {}
  Init_AcquirePluginDataResponse_request_id status(::bosdyn_msgs::msg::AcquirePluginDataResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AcquirePluginDataResponse_request_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataResponse msg_;
};

class Init_AcquirePluginDataResponse_header_is_set
{
public:
  explicit Init_AcquirePluginDataResponse_header_is_set(::bosdyn_msgs::msg::AcquirePluginDataResponse & msg)
  : msg_(msg)
  {}
  Init_AcquirePluginDataResponse_status header_is_set(::bosdyn_msgs::msg::AcquirePluginDataResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_AcquirePluginDataResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataResponse msg_;
};

class Init_AcquirePluginDataResponse_header
{
public:
  Init_AcquirePluginDataResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquirePluginDataResponse_header_is_set header(::bosdyn_msgs::msg::AcquirePluginDataResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcquirePluginDataResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AcquirePluginDataResponse>()
{
  return bosdyn_msgs::msg::builder::Init_AcquirePluginDataResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_PLUGIN_DATA_RESPONSE__BUILDER_HPP_
