// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LogpointCalibration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOGPOINT_CALIBRATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOGPOINT_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/logpoint_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LogpointCalibration_intrinsics_is_set
{
public:
  explicit Init_LogpointCalibration_intrinsics_is_set(::bosdyn_msgs::msg::LogpointCalibration & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LogpointCalibration intrinsics_is_set(::bosdyn_msgs::msg::LogpointCalibration::_intrinsics_is_set_type arg)
  {
    msg_.intrinsics_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogpointCalibration msg_;
};

class Init_LogpointCalibration_intrinsics
{
public:
  explicit Init_LogpointCalibration_intrinsics(::bosdyn_msgs::msg::LogpointCalibration & msg)
  : msg_(msg)
  {}
  Init_LogpointCalibration_intrinsics_is_set intrinsics(::bosdyn_msgs::msg::LogpointCalibration::_intrinsics_type arg)
  {
    msg_.intrinsics = std::move(arg);
    return Init_LogpointCalibration_intrinsics_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogpointCalibration msg_;
};

class Init_LogpointCalibration_base_tform_sensor_is_set
{
public:
  explicit Init_LogpointCalibration_base_tform_sensor_is_set(::bosdyn_msgs::msg::LogpointCalibration & msg)
  : msg_(msg)
  {}
  Init_LogpointCalibration_intrinsics base_tform_sensor_is_set(::bosdyn_msgs::msg::LogpointCalibration::_base_tform_sensor_is_set_type arg)
  {
    msg_.base_tform_sensor_is_set = std::move(arg);
    return Init_LogpointCalibration_intrinsics(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogpointCalibration msg_;
};

class Init_LogpointCalibration_base_tform_sensor
{
public:
  explicit Init_LogpointCalibration_base_tform_sensor(::bosdyn_msgs::msg::LogpointCalibration & msg)
  : msg_(msg)
  {}
  Init_LogpointCalibration_base_tform_sensor_is_set base_tform_sensor(::bosdyn_msgs::msg::LogpointCalibration::_base_tform_sensor_type arg)
  {
    msg_.base_tform_sensor = std::move(arg);
    return Init_LogpointCalibration_base_tform_sensor_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogpointCalibration msg_;
};

class Init_LogpointCalibration_base_frame_name
{
public:
  explicit Init_LogpointCalibration_base_frame_name(::bosdyn_msgs::msg::LogpointCalibration & msg)
  : msg_(msg)
  {}
  Init_LogpointCalibration_base_tform_sensor base_frame_name(::bosdyn_msgs::msg::LogpointCalibration::_base_frame_name_type arg)
  {
    msg_.base_frame_name = std::move(arg);
    return Init_LogpointCalibration_base_tform_sensor(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogpointCalibration msg_;
};

class Init_LogpointCalibration_height
{
public:
  explicit Init_LogpointCalibration_height(::bosdyn_msgs::msg::LogpointCalibration & msg)
  : msg_(msg)
  {}
  Init_LogpointCalibration_base_frame_name height(::bosdyn_msgs::msg::LogpointCalibration::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_LogpointCalibration_base_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogpointCalibration msg_;
};

class Init_LogpointCalibration_width
{
public:
  explicit Init_LogpointCalibration_width(::bosdyn_msgs::msg::LogpointCalibration & msg)
  : msg_(msg)
  {}
  Init_LogpointCalibration_height width(::bosdyn_msgs::msg::LogpointCalibration::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_LogpointCalibration_height(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogpointCalibration msg_;
};

class Init_LogpointCalibration_yoffset
{
public:
  explicit Init_LogpointCalibration_yoffset(::bosdyn_msgs::msg::LogpointCalibration & msg)
  : msg_(msg)
  {}
  Init_LogpointCalibration_width yoffset(::bosdyn_msgs::msg::LogpointCalibration::_yoffset_type arg)
  {
    msg_.yoffset = std::move(arg);
    return Init_LogpointCalibration_width(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogpointCalibration msg_;
};

class Init_LogpointCalibration_xoffset
{
public:
  Init_LogpointCalibration_xoffset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogpointCalibration_yoffset xoffset(::bosdyn_msgs::msg::LogpointCalibration::_xoffset_type arg)
  {
    msg_.xoffset = std::move(arg);
    return Init_LogpointCalibration_yoffset(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogpointCalibration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LogpointCalibration>()
{
  return bosdyn_msgs::msg::builder::Init_LogpointCalibration_xoffset();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOGPOINT_CALIBRATION__BUILDER_HPP_
