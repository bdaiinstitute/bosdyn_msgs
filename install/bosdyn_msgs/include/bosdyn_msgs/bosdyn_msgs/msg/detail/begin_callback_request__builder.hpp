// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BeginCallbackRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/begin_callback_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BeginCallbackRequest_custom_params_is_set
{
public:
  explicit Init_BeginCallbackRequest_custom_params_is_set(::bosdyn_msgs::msg::BeginCallbackRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BeginCallbackRequest custom_params_is_set(::bosdyn_msgs::msg::BeginCallbackRequest::_custom_params_is_set_type arg)
  {
    msg_.custom_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackRequest msg_;
};

class Init_BeginCallbackRequest_custom_params
{
public:
  explicit Init_BeginCallbackRequest_custom_params(::bosdyn_msgs::msg::BeginCallbackRequest & msg)
  : msg_(msg)
  {}
  Init_BeginCallbackRequest_custom_params_is_set custom_params(::bosdyn_msgs::msg::BeginCallbackRequest::_custom_params_type arg)
  {
    msg_.custom_params = std::move(arg);
    return Init_BeginCallbackRequest_custom_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackRequest msg_;
};

class Init_BeginCallbackRequest_recorded_data_is_set
{
public:
  explicit Init_BeginCallbackRequest_recorded_data_is_set(::bosdyn_msgs::msg::BeginCallbackRequest & msg)
  : msg_(msg)
  {}
  Init_BeginCallbackRequest_custom_params recorded_data_is_set(::bosdyn_msgs::msg::BeginCallbackRequest::_recorded_data_is_set_type arg)
  {
    msg_.recorded_data_is_set = std::move(arg);
    return Init_BeginCallbackRequest_custom_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackRequest msg_;
};

class Init_BeginCallbackRequest_recorded_data
{
public:
  explicit Init_BeginCallbackRequest_recorded_data(::bosdyn_msgs::msg::BeginCallbackRequest & msg)
  : msg_(msg)
  {}
  Init_BeginCallbackRequest_recorded_data_is_set recorded_data(::bosdyn_msgs::msg::BeginCallbackRequest::_recorded_data_type arg)
  {
    msg_.recorded_data = std::move(arg);
    return Init_BeginCallbackRequest_recorded_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackRequest msg_;
};

class Init_BeginCallbackRequest_end_time_is_set
{
public:
  explicit Init_BeginCallbackRequest_end_time_is_set(::bosdyn_msgs::msg::BeginCallbackRequest & msg)
  : msg_(msg)
  {}
  Init_BeginCallbackRequest_recorded_data end_time_is_set(::bosdyn_msgs::msg::BeginCallbackRequest::_end_time_is_set_type arg)
  {
    msg_.end_time_is_set = std::move(arg);
    return Init_BeginCallbackRequest_recorded_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackRequest msg_;
};

class Init_BeginCallbackRequest_end_time
{
public:
  explicit Init_BeginCallbackRequest_end_time(::bosdyn_msgs::msg::BeginCallbackRequest & msg)
  : msg_(msg)
  {}
  Init_BeginCallbackRequest_end_time_is_set end_time(::bosdyn_msgs::msg::BeginCallbackRequest::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_BeginCallbackRequest_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackRequest msg_;
};

class Init_BeginCallbackRequest_region_info_is_set
{
public:
  explicit Init_BeginCallbackRequest_region_info_is_set(::bosdyn_msgs::msg::BeginCallbackRequest & msg)
  : msg_(msg)
  {}
  Init_BeginCallbackRequest_end_time region_info_is_set(::bosdyn_msgs::msg::BeginCallbackRequest::_region_info_is_set_type arg)
  {
    msg_.region_info_is_set = std::move(arg);
    return Init_BeginCallbackRequest_end_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackRequest msg_;
};

class Init_BeginCallbackRequest_region_info
{
public:
  explicit Init_BeginCallbackRequest_region_info(::bosdyn_msgs::msg::BeginCallbackRequest & msg)
  : msg_(msg)
  {}
  Init_BeginCallbackRequest_region_info_is_set region_info(::bosdyn_msgs::msg::BeginCallbackRequest::_region_info_type arg)
  {
    msg_.region_info = std::move(arg);
    return Init_BeginCallbackRequest_region_info_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackRequest msg_;
};

class Init_BeginCallbackRequest_header_is_set
{
public:
  explicit Init_BeginCallbackRequest_header_is_set(::bosdyn_msgs::msg::BeginCallbackRequest & msg)
  : msg_(msg)
  {}
  Init_BeginCallbackRequest_region_info header_is_set(::bosdyn_msgs::msg::BeginCallbackRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_BeginCallbackRequest_region_info(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackRequest msg_;
};

class Init_BeginCallbackRequest_header
{
public:
  Init_BeginCallbackRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BeginCallbackRequest_header_is_set header(::bosdyn_msgs::msg::BeginCallbackRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BeginCallbackRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BeginCallbackRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BeginCallbackRequest>()
{
  return bosdyn_msgs::msg::builder::Init_BeginCallbackRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_REQUEST__BUILDER_HPP_
