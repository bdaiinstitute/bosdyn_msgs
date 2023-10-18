// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StopRecordingResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STOP_RECORDING_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STOP_RECORDING_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/stop_recording_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StopRecordingResponse_map_stats_is_set
{
public:
  explicit Init_StopRecordingResponse_map_stats_is_set(::bosdyn_msgs::msg::StopRecordingResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StopRecordingResponse map_stats_is_set(::bosdyn_msgs::msg::StopRecordingResponse::_map_stats_is_set_type arg)
  {
    msg_.map_stats_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopRecordingResponse msg_;
};

class Init_StopRecordingResponse_map_stats
{
public:
  explicit Init_StopRecordingResponse_map_stats(::bosdyn_msgs::msg::StopRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StopRecordingResponse_map_stats_is_set map_stats(::bosdyn_msgs::msg::StopRecordingResponse::_map_stats_type arg)
  {
    msg_.map_stats = std::move(arg);
    return Init_StopRecordingResponse_map_stats_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopRecordingResponse msg_;
};

class Init_StopRecordingResponse_session_start_time_is_set
{
public:
  explicit Init_StopRecordingResponse_session_start_time_is_set(::bosdyn_msgs::msg::StopRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StopRecordingResponse_map_stats session_start_time_is_set(::bosdyn_msgs::msg::StopRecordingResponse::_session_start_time_is_set_type arg)
  {
    msg_.session_start_time_is_set = std::move(arg);
    return Init_StopRecordingResponse_map_stats(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopRecordingResponse msg_;
};

class Init_StopRecordingResponse_session_start_time
{
public:
  explicit Init_StopRecordingResponse_session_start_time(::bosdyn_msgs::msg::StopRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StopRecordingResponse_session_start_time_is_set session_start_time(::bosdyn_msgs::msg::StopRecordingResponse::_session_start_time_type arg)
  {
    msg_.session_start_time = std::move(arg);
    return Init_StopRecordingResponse_session_start_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopRecordingResponse msg_;
};

class Init_StopRecordingResponse_lease_use_result_is_set
{
public:
  explicit Init_StopRecordingResponse_lease_use_result_is_set(::bosdyn_msgs::msg::StopRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StopRecordingResponse_session_start_time lease_use_result_is_set(::bosdyn_msgs::msg::StopRecordingResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return Init_StopRecordingResponse_session_start_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopRecordingResponse msg_;
};

class Init_StopRecordingResponse_lease_use_result
{
public:
  explicit Init_StopRecordingResponse_lease_use_result(::bosdyn_msgs::msg::StopRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StopRecordingResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::StopRecordingResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_StopRecordingResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopRecordingResponse msg_;
};

class Init_StopRecordingResponse_error_waypoint_localized_id
{
public:
  explicit Init_StopRecordingResponse_error_waypoint_localized_id(::bosdyn_msgs::msg::StopRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StopRecordingResponse_lease_use_result error_waypoint_localized_id(::bosdyn_msgs::msg::StopRecordingResponse::_error_waypoint_localized_id_type arg)
  {
    msg_.error_waypoint_localized_id = std::move(arg);
    return Init_StopRecordingResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopRecordingResponse msg_;
};

class Init_StopRecordingResponse_status
{
public:
  explicit Init_StopRecordingResponse_status(::bosdyn_msgs::msg::StopRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StopRecordingResponse_error_waypoint_localized_id status(::bosdyn_msgs::msg::StopRecordingResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_StopRecordingResponse_error_waypoint_localized_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopRecordingResponse msg_;
};

class Init_StopRecordingResponse_header_is_set
{
public:
  explicit Init_StopRecordingResponse_header_is_set(::bosdyn_msgs::msg::StopRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StopRecordingResponse_status header_is_set(::bosdyn_msgs::msg::StopRecordingResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StopRecordingResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopRecordingResponse msg_;
};

class Init_StopRecordingResponse_header
{
public:
  Init_StopRecordingResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopRecordingResponse_header_is_set header(::bosdyn_msgs::msg::StopRecordingResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StopRecordingResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopRecordingResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StopRecordingResponse>()
{
  return bosdyn_msgs::msg::builder::Init_StopRecordingResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STOP_RECORDING_RESPONSE__BUILDER_HPP_
