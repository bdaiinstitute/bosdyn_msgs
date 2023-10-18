// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SpotCheckFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/spot_check_feedback_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SpotCheckFeedbackResponse_last_cal_timestamp_is_set
{
public:
  explicit Init_SpotCheckFeedbackResponse_last_cal_timestamp_is_set(::bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse last_cal_timestamp_is_set(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_last_cal_timestamp_is_set_type arg)
  {
    msg_.last_cal_timestamp_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

class Init_SpotCheckFeedbackResponse_last_cal_timestamp
{
public:
  explicit Init_SpotCheckFeedbackResponse_last_cal_timestamp(::bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckFeedbackResponse_last_cal_timestamp_is_set last_cal_timestamp(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_last_cal_timestamp_type arg)
  {
    msg_.last_cal_timestamp = std::move(arg);
    return Init_SpotCheckFeedbackResponse_last_cal_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

class Init_SpotCheckFeedbackResponse_progress
{
public:
  explicit Init_SpotCheckFeedbackResponse_progress(::bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckFeedbackResponse_last_cal_timestamp progress(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_SpotCheckFeedbackResponse_last_cal_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

class Init_SpotCheckFeedbackResponse_hip_range_of_motion_results
{
public:
  explicit Init_SpotCheckFeedbackResponse_hip_range_of_motion_results(::bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckFeedbackResponse_progress hip_range_of_motion_results(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_hip_range_of_motion_results_type arg)
  {
    msg_.hip_range_of_motion_results = std::move(arg);
    return Init_SpotCheckFeedbackResponse_progress(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

class Init_SpotCheckFeedbackResponse_payload_result_is_set
{
public:
  explicit Init_SpotCheckFeedbackResponse_payload_result_is_set(::bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckFeedbackResponse_hip_range_of_motion_results payload_result_is_set(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_payload_result_is_set_type arg)
  {
    msg_.payload_result_is_set = std::move(arg);
    return Init_SpotCheckFeedbackResponse_hip_range_of_motion_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

class Init_SpotCheckFeedbackResponse_payload_result
{
public:
  explicit Init_SpotCheckFeedbackResponse_payload_result(::bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckFeedbackResponse_payload_result_is_set payload_result(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_payload_result_type arg)
  {
    msg_.payload_result = std::move(arg);
    return Init_SpotCheckFeedbackResponse_payload_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

class Init_SpotCheckFeedbackResponse_kinematic_cal_results
{
public:
  explicit Init_SpotCheckFeedbackResponse_kinematic_cal_results(::bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckFeedbackResponse_payload_result kinematic_cal_results(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_kinematic_cal_results_type arg)
  {
    msg_.kinematic_cal_results = std::move(arg);
    return Init_SpotCheckFeedbackResponse_payload_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

class Init_SpotCheckFeedbackResponse_load_cell_results
{
public:
  explicit Init_SpotCheckFeedbackResponse_load_cell_results(::bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckFeedbackResponse_kinematic_cal_results load_cell_results(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_load_cell_results_type arg)
  {
    msg_.load_cell_results = std::move(arg);
    return Init_SpotCheckFeedbackResponse_kinematic_cal_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

class Init_SpotCheckFeedbackResponse_camera_results
{
public:
  explicit Init_SpotCheckFeedbackResponse_camera_results(::bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckFeedbackResponse_load_cell_results camera_results(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_camera_results_type arg)
  {
    msg_.camera_results = std::move(arg);
    return Init_SpotCheckFeedbackResponse_load_cell_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

class Init_SpotCheckFeedbackResponse_error
{
public:
  explicit Init_SpotCheckFeedbackResponse_error(::bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckFeedbackResponse_camera_results error(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_SpotCheckFeedbackResponse_camera_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

class Init_SpotCheckFeedbackResponse_last_command
{
public:
  explicit Init_SpotCheckFeedbackResponse_last_command(::bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckFeedbackResponse_error last_command(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_last_command_type arg)
  {
    msg_.last_command = std::move(arg);
    return Init_SpotCheckFeedbackResponse_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

class Init_SpotCheckFeedbackResponse_state
{
public:
  explicit Init_SpotCheckFeedbackResponse_state(::bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckFeedbackResponse_last_command state(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SpotCheckFeedbackResponse_last_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

class Init_SpotCheckFeedbackResponse_header_is_set
{
public:
  explicit Init_SpotCheckFeedbackResponse_header_is_set(::bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckFeedbackResponse_state header_is_set(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SpotCheckFeedbackResponse_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

class Init_SpotCheckFeedbackResponse_header
{
public:
  Init_SpotCheckFeedbackResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpotCheckFeedbackResponse_header_is_set header(::bosdyn_msgs::msg::SpotCheckFeedbackResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SpotCheckFeedbackResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckFeedbackResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SpotCheckFeedbackResponse>()
{
  return bosdyn_msgs::msg::builder::Init_SpotCheckFeedbackResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE__BUILDER_HPP_
