// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StartRetroLogResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__START_RETRO_LOG_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__START_RETRO_LOG_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/start_retro_log_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StartRetroLogResponse_end_time_is_set
{
public:
  explicit Init_StartRetroLogResponse_end_time_is_set(::bosdyn_msgs::msg::StartRetroLogResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StartRetroLogResponse end_time_is_set(::bosdyn_msgs::msg::StartRetroLogResponse::_end_time_is_set_type arg)
  {
    msg_.end_time_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRetroLogResponse msg_;
};

class Init_StartRetroLogResponse_end_time
{
public:
  explicit Init_StartRetroLogResponse_end_time(::bosdyn_msgs::msg::StartRetroLogResponse & msg)
  : msg_(msg)
  {}
  Init_StartRetroLogResponse_end_time_is_set end_time(::bosdyn_msgs::msg::StartRetroLogResponse::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_StartRetroLogResponse_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRetroLogResponse msg_;
};

class Init_StartRetroLogResponse_log_status_is_set
{
public:
  explicit Init_StartRetroLogResponse_log_status_is_set(::bosdyn_msgs::msg::StartRetroLogResponse & msg)
  : msg_(msg)
  {}
  Init_StartRetroLogResponse_end_time log_status_is_set(::bosdyn_msgs::msg::StartRetroLogResponse::_log_status_is_set_type arg)
  {
    msg_.log_status_is_set = std::move(arg);
    return Init_StartRetroLogResponse_end_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRetroLogResponse msg_;
};

class Init_StartRetroLogResponse_log_status
{
public:
  explicit Init_StartRetroLogResponse_log_status(::bosdyn_msgs::msg::StartRetroLogResponse & msg)
  : msg_(msg)
  {}
  Init_StartRetroLogResponse_log_status_is_set log_status(::bosdyn_msgs::msg::StartRetroLogResponse::_log_status_type arg)
  {
    msg_.log_status = std::move(arg);
    return Init_StartRetroLogResponse_log_status_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRetroLogResponse msg_;
};

class Init_StartRetroLogResponse_status
{
public:
  explicit Init_StartRetroLogResponse_status(::bosdyn_msgs::msg::StartRetroLogResponse & msg)
  : msg_(msg)
  {}
  Init_StartRetroLogResponse_log_status status(::bosdyn_msgs::msg::StartRetroLogResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_StartRetroLogResponse_log_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRetroLogResponse msg_;
};

class Init_StartRetroLogResponse_header_is_set
{
public:
  explicit Init_StartRetroLogResponse_header_is_set(::bosdyn_msgs::msg::StartRetroLogResponse & msg)
  : msg_(msg)
  {}
  Init_StartRetroLogResponse_status header_is_set(::bosdyn_msgs::msg::StartRetroLogResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StartRetroLogResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRetroLogResponse msg_;
};

class Init_StartRetroLogResponse_header
{
public:
  Init_StartRetroLogResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRetroLogResponse_header_is_set header(::bosdyn_msgs::msg::StartRetroLogResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StartRetroLogResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRetroLogResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StartRetroLogResponse>()
{
  return bosdyn_msgs::msg::builder::Init_StartRetroLogResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__START_RETRO_LOG_RESPONSE__BUILDER_HPP_
