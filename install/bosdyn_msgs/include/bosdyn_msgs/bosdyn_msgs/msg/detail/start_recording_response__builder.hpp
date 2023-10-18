// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StartRecordingResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/start_recording_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StartRecordingResponse_map_stats_is_set
{
public:
  explicit Init_StartRecordingResponse_map_stats_is_set(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StartRecordingResponse map_stats_is_set(::bosdyn_msgs::msg::StartRecordingResponse::_map_stats_is_set_type arg)
  {
    msg_.map_stats_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_map_stats
{
public:
  explicit Init_StartRecordingResponse_map_stats(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_map_stats_is_set map_stats(::bosdyn_msgs::msg::StartRecordingResponse::_map_stats_type arg)
  {
    msg_.map_stats = std::move(arg);
    return Init_StartRecordingResponse_map_stats_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_session_start_time_is_set
{
public:
  explicit Init_StartRecordingResponse_session_start_time_is_set(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_map_stats session_start_time_is_set(::bosdyn_msgs::msg::StartRecordingResponse::_session_start_time_is_set_type arg)
  {
    msg_.session_start_time_is_set = std::move(arg);
    return Init_StartRecordingResponse_map_stats(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_session_start_time
{
public:
  explicit Init_StartRecordingResponse_session_start_time(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_session_start_time_is_set session_start_time(::bosdyn_msgs::msg::StartRecordingResponse::_session_start_time_type arg)
  {
    msg_.session_start_time = std::move(arg);
    return Init_StartRecordingResponse_session_start_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_impaired_state_is_set
{
public:
  explicit Init_StartRecordingResponse_impaired_state_is_set(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_session_start_time impaired_state_is_set(::bosdyn_msgs::msg::StartRecordingResponse::_impaired_state_is_set_type arg)
  {
    msg_.impaired_state_is_set = std::move(arg);
    return Init_StartRecordingResponse_session_start_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_impaired_state
{
public:
  explicit Init_StartRecordingResponse_impaired_state(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_impaired_state_is_set impaired_state(::bosdyn_msgs::msg::StartRecordingResponse::_impaired_state_type arg)
  {
    msg_.impaired_state = std::move(arg);
    return Init_StartRecordingResponse_impaired_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_license_status
{
public:
  explicit Init_StartRecordingResponse_license_status(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_impaired_state license_status(::bosdyn_msgs::msg::StartRecordingResponse::_license_status_type arg)
  {
    msg_.license_status = std::move(arg);
    return Init_StartRecordingResponse_impaired_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_bad_pose_fiducials
{
public:
  explicit Init_StartRecordingResponse_bad_pose_fiducials(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_license_status bad_pose_fiducials(::bosdyn_msgs::msg::StartRecordingResponse::_bad_pose_fiducials_type arg)
  {
    msg_.bad_pose_fiducials = std::move(arg);
    return Init_StartRecordingResponse_license_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_missing_fiducials
{
public:
  explicit Init_StartRecordingResponse_missing_fiducials(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_bad_pose_fiducials missing_fiducials(::bosdyn_msgs::msg::StartRecordingResponse::_missing_fiducials_type arg)
  {
    msg_.missing_fiducials = std::move(arg);
    return Init_StartRecordingResponse_bad_pose_fiducials(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_status
{
public:
  explicit Init_StartRecordingResponse_status(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_missing_fiducials status(::bosdyn_msgs::msg::StartRecordingResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_StartRecordingResponse_missing_fiducials(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_lease_use_result_is_set
{
public:
  explicit Init_StartRecordingResponse_lease_use_result_is_set(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_status lease_use_result_is_set(::bosdyn_msgs::msg::StartRecordingResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return Init_StartRecordingResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_lease_use_result
{
public:
  explicit Init_StartRecordingResponse_lease_use_result(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::StartRecordingResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_StartRecordingResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_created_waypoint_is_set
{
public:
  explicit Init_StartRecordingResponse_created_waypoint_is_set(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_lease_use_result created_waypoint_is_set(::bosdyn_msgs::msg::StartRecordingResponse::_created_waypoint_is_set_type arg)
  {
    msg_.created_waypoint_is_set = std::move(arg);
    return Init_StartRecordingResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_created_waypoint
{
public:
  explicit Init_StartRecordingResponse_created_waypoint(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_created_waypoint_is_set created_waypoint(::bosdyn_msgs::msg::StartRecordingResponse::_created_waypoint_type arg)
  {
    msg_.created_waypoint = std::move(arg);
    return Init_StartRecordingResponse_created_waypoint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_header_is_set
{
public:
  explicit Init_StartRecordingResponse_header_is_set(::bosdyn_msgs::msg::StartRecordingResponse & msg)
  : msg_(msg)
  {}
  Init_StartRecordingResponse_created_waypoint header_is_set(::bosdyn_msgs::msg::StartRecordingResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StartRecordingResponse_created_waypoint(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

class Init_StartRecordingResponse_header
{
public:
  Init_StartRecordingResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRecordingResponse_header_is_set header(::bosdyn_msgs::msg::StartRecordingResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StartRecordingResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StartRecordingResponse>()
{
  return bosdyn_msgs::msg::builder::Init_StartRecordingResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_RESPONSE__BUILDER_HPP_
