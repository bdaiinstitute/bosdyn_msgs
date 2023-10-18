// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CameraCalibrationCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/camera_calibration_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraCalibrationCommandRequest_command
{
public:
  explicit Init_CameraCalibrationCommandRequest_command(::bosdyn_msgs::msg::CameraCalibrationCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CameraCalibrationCommandRequest command(::bosdyn_msgs::msg::CameraCalibrationCommandRequest::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationCommandRequest msg_;
};

class Init_CameraCalibrationCommandRequest_lease_is_set
{
public:
  explicit Init_CameraCalibrationCommandRequest_lease_is_set(::bosdyn_msgs::msg::CameraCalibrationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_CameraCalibrationCommandRequest_command lease_is_set(::bosdyn_msgs::msg::CameraCalibrationCommandRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_CameraCalibrationCommandRequest_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationCommandRequest msg_;
};

class Init_CameraCalibrationCommandRequest_lease
{
public:
  explicit Init_CameraCalibrationCommandRequest_lease(::bosdyn_msgs::msg::CameraCalibrationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_CameraCalibrationCommandRequest_lease_is_set lease(::bosdyn_msgs::msg::CameraCalibrationCommandRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_CameraCalibrationCommandRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationCommandRequest msg_;
};

class Init_CameraCalibrationCommandRequest_header_is_set
{
public:
  explicit Init_CameraCalibrationCommandRequest_header_is_set(::bosdyn_msgs::msg::CameraCalibrationCommandRequest & msg)
  : msg_(msg)
  {}
  Init_CameraCalibrationCommandRequest_lease header_is_set(::bosdyn_msgs::msg::CameraCalibrationCommandRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_CameraCalibrationCommandRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationCommandRequest msg_;
};

class Init_CameraCalibrationCommandRequest_header
{
public:
  Init_CameraCalibrationCommandRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraCalibrationCommandRequest_header_is_set header(::bosdyn_msgs::msg::CameraCalibrationCommandRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraCalibrationCommandRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CameraCalibrationCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_CameraCalibrationCommandRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_COMMAND_REQUEST__BUILDER_HPP_
