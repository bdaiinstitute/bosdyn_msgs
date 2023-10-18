// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CameraCalibrationFeedbackRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_FEEDBACK_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_FEEDBACK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/camera_calibration_feedback_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraCalibrationFeedbackRequest_header_is_set
{
public:
  explicit Init_CameraCalibrationFeedbackRequest_header_is_set(::bosdyn_msgs::msg::CameraCalibrationFeedbackRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CameraCalibrationFeedbackRequest header_is_set(::bosdyn_msgs::msg::CameraCalibrationFeedbackRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationFeedbackRequest msg_;
};

class Init_CameraCalibrationFeedbackRequest_header
{
public:
  Init_CameraCalibrationFeedbackRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraCalibrationFeedbackRequest_header_is_set header(::bosdyn_msgs::msg::CameraCalibrationFeedbackRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraCalibrationFeedbackRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationFeedbackRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CameraCalibrationFeedbackRequest>()
{
  return bosdyn_msgs::msg::builder::Init_CameraCalibrationFeedbackRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_FEEDBACK_REQUEST__BUILDER_HPP_
