// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CameraCalibrationFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_FEEDBACK_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_FEEDBACK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/camera_calibration_feedback_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraCalibrationFeedbackResponse_progress
{
public:
  explicit Init_CameraCalibrationFeedbackResponse_progress(::bosdyn_msgs::msg::CameraCalibrationFeedbackResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CameraCalibrationFeedbackResponse progress(::bosdyn_msgs::msg::CameraCalibrationFeedbackResponse::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationFeedbackResponse msg_;
};

class Init_CameraCalibrationFeedbackResponse_status
{
public:
  explicit Init_CameraCalibrationFeedbackResponse_status(::bosdyn_msgs::msg::CameraCalibrationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_CameraCalibrationFeedbackResponse_progress status(::bosdyn_msgs::msg::CameraCalibrationFeedbackResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CameraCalibrationFeedbackResponse_progress(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationFeedbackResponse msg_;
};

class Init_CameraCalibrationFeedbackResponse_header_is_set
{
public:
  explicit Init_CameraCalibrationFeedbackResponse_header_is_set(::bosdyn_msgs::msg::CameraCalibrationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_CameraCalibrationFeedbackResponse_status header_is_set(::bosdyn_msgs::msg::CameraCalibrationFeedbackResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_CameraCalibrationFeedbackResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationFeedbackResponse msg_;
};

class Init_CameraCalibrationFeedbackResponse_header
{
public:
  Init_CameraCalibrationFeedbackResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraCalibrationFeedbackResponse_header_is_set header(::bosdyn_msgs::msg::CameraCalibrationFeedbackResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraCalibrationFeedbackResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationFeedbackResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CameraCalibrationFeedbackResponse>()
{
  return bosdyn_msgs::msg::builder::Init_CameraCalibrationFeedbackResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_FEEDBACK_RESPONSE__BUILDER_HPP_
