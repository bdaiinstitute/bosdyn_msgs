// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetRecordStatusResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_RECORD_STATUS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_RECORD_STATUS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_record_status_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetRecordStatusResponse_map_stats_is_set
{
public:
  explicit Init_GetRecordStatusResponse_map_stats_is_set(::bosdyn_msgs::msg::GetRecordStatusResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetRecordStatusResponse map_stats_is_set(::bosdyn_msgs::msg::GetRecordStatusResponse::_map_stats_is_set_type arg)
  {
    msg_.map_stats_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRecordStatusResponse msg_;
};

class Init_GetRecordStatusResponse_map_stats
{
public:
  explicit Init_GetRecordStatusResponse_map_stats(::bosdyn_msgs::msg::GetRecordStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetRecordStatusResponse_map_stats_is_set map_stats(::bosdyn_msgs::msg::GetRecordStatusResponse::_map_stats_type arg)
  {
    msg_.map_stats = std::move(arg);
    return Init_GetRecordStatusResponse_map_stats_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRecordStatusResponse msg_;
};

class Init_GetRecordStatusResponse_session_start_time_is_set
{
public:
  explicit Init_GetRecordStatusResponse_session_start_time_is_set(::bosdyn_msgs::msg::GetRecordStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetRecordStatusResponse_map_stats session_start_time_is_set(::bosdyn_msgs::msg::GetRecordStatusResponse::_session_start_time_is_set_type arg)
  {
    msg_.session_start_time_is_set = std::move(arg);
    return Init_GetRecordStatusResponse_map_stats(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRecordStatusResponse msg_;
};

class Init_GetRecordStatusResponse_session_start_time
{
public:
  explicit Init_GetRecordStatusResponse_session_start_time(::bosdyn_msgs::msg::GetRecordStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetRecordStatusResponse_session_start_time_is_set session_start_time(::bosdyn_msgs::msg::GetRecordStatusResponse::_session_start_time_type arg)
  {
    msg_.session_start_time = std::move(arg);
    return Init_GetRecordStatusResponse_session_start_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRecordStatusResponse msg_;
};

class Init_GetRecordStatusResponse_impaired_state_is_set
{
public:
  explicit Init_GetRecordStatusResponse_impaired_state_is_set(::bosdyn_msgs::msg::GetRecordStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetRecordStatusResponse_session_start_time impaired_state_is_set(::bosdyn_msgs::msg::GetRecordStatusResponse::_impaired_state_is_set_type arg)
  {
    msg_.impaired_state_is_set = std::move(arg);
    return Init_GetRecordStatusResponse_session_start_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRecordStatusResponse msg_;
};

class Init_GetRecordStatusResponse_impaired_state
{
public:
  explicit Init_GetRecordStatusResponse_impaired_state(::bosdyn_msgs::msg::GetRecordStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetRecordStatusResponse_impaired_state_is_set impaired_state(::bosdyn_msgs::msg::GetRecordStatusResponse::_impaired_state_type arg)
  {
    msg_.impaired_state = std::move(arg);
    return Init_GetRecordStatusResponse_impaired_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRecordStatusResponse msg_;
};

class Init_GetRecordStatusResponse_status
{
public:
  explicit Init_GetRecordStatusResponse_status(::bosdyn_msgs::msg::GetRecordStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetRecordStatusResponse_impaired_state status(::bosdyn_msgs::msg::GetRecordStatusResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetRecordStatusResponse_impaired_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRecordStatusResponse msg_;
};

class Init_GetRecordStatusResponse_map_state
{
public:
  explicit Init_GetRecordStatusResponse_map_state(::bosdyn_msgs::msg::GetRecordStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetRecordStatusResponse_status map_state(::bosdyn_msgs::msg::GetRecordStatusResponse::_map_state_type arg)
  {
    msg_.map_state = std::move(arg);
    return Init_GetRecordStatusResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRecordStatusResponse msg_;
};

class Init_GetRecordStatusResponse_recording_environment_is_set
{
public:
  explicit Init_GetRecordStatusResponse_recording_environment_is_set(::bosdyn_msgs::msg::GetRecordStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetRecordStatusResponse_map_state recording_environment_is_set(::bosdyn_msgs::msg::GetRecordStatusResponse::_recording_environment_is_set_type arg)
  {
    msg_.recording_environment_is_set = std::move(arg);
    return Init_GetRecordStatusResponse_map_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRecordStatusResponse msg_;
};

class Init_GetRecordStatusResponse_recording_environment
{
public:
  explicit Init_GetRecordStatusResponse_recording_environment(::bosdyn_msgs::msg::GetRecordStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetRecordStatusResponse_recording_environment_is_set recording_environment(::bosdyn_msgs::msg::GetRecordStatusResponse::_recording_environment_type arg)
  {
    msg_.recording_environment = std::move(arg);
    return Init_GetRecordStatusResponse_recording_environment_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRecordStatusResponse msg_;
};

class Init_GetRecordStatusResponse_is_recording
{
public:
  explicit Init_GetRecordStatusResponse_is_recording(::bosdyn_msgs::msg::GetRecordStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetRecordStatusResponse_recording_environment is_recording(::bosdyn_msgs::msg::GetRecordStatusResponse::_is_recording_type arg)
  {
    msg_.is_recording = std::move(arg);
    return Init_GetRecordStatusResponse_recording_environment(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRecordStatusResponse msg_;
};

class Init_GetRecordStatusResponse_header_is_set
{
public:
  explicit Init_GetRecordStatusResponse_header_is_set(::bosdyn_msgs::msg::GetRecordStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetRecordStatusResponse_is_recording header_is_set(::bosdyn_msgs::msg::GetRecordStatusResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetRecordStatusResponse_is_recording(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRecordStatusResponse msg_;
};

class Init_GetRecordStatusResponse_header
{
public:
  Init_GetRecordStatusResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRecordStatusResponse_header_is_set header(::bosdyn_msgs::msg::GetRecordStatusResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetRecordStatusResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRecordStatusResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetRecordStatusResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetRecordStatusResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_RECORD_STATUS_RESPONSE__BUILDER_HPP_
