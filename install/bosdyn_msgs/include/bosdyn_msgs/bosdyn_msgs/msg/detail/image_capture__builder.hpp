// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImageCapture.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_capture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageCapture_capture_params_is_set
{
public:
  explicit Init_ImageCapture_capture_params_is_set(::bosdyn_msgs::msg::ImageCapture & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImageCapture capture_params_is_set(::bosdyn_msgs::msg::ImageCapture::_capture_params_is_set_type arg)
  {
    msg_.capture_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCapture msg_;
};

class Init_ImageCapture_capture_params
{
public:
  explicit Init_ImageCapture_capture_params(::bosdyn_msgs::msg::ImageCapture & msg)
  : msg_(msg)
  {}
  Init_ImageCapture_capture_params_is_set capture_params(::bosdyn_msgs::msg::ImageCapture::_capture_params_type arg)
  {
    msg_.capture_params = std::move(arg);
    return Init_ImageCapture_capture_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCapture msg_;
};

class Init_ImageCapture_image_is_set
{
public:
  explicit Init_ImageCapture_image_is_set(::bosdyn_msgs::msg::ImageCapture & msg)
  : msg_(msg)
  {}
  Init_ImageCapture_capture_params image_is_set(::bosdyn_msgs::msg::ImageCapture::_image_is_set_type arg)
  {
    msg_.image_is_set = std::move(arg);
    return Init_ImageCapture_capture_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCapture msg_;
};

class Init_ImageCapture_image
{
public:
  explicit Init_ImageCapture_image(::bosdyn_msgs::msg::ImageCapture & msg)
  : msg_(msg)
  {}
  Init_ImageCapture_image_is_set image(::bosdyn_msgs::msg::ImageCapture::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_ImageCapture_image_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCapture msg_;
};

class Init_ImageCapture_frame_name_image_sensor
{
public:
  explicit Init_ImageCapture_frame_name_image_sensor(::bosdyn_msgs::msg::ImageCapture & msg)
  : msg_(msg)
  {}
  Init_ImageCapture_image frame_name_image_sensor(::bosdyn_msgs::msg::ImageCapture::_frame_name_image_sensor_type arg)
  {
    msg_.frame_name_image_sensor = std::move(arg);
    return Init_ImageCapture_image(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCapture msg_;
};

class Init_ImageCapture_transforms_snapshot_is_set
{
public:
  explicit Init_ImageCapture_transforms_snapshot_is_set(::bosdyn_msgs::msg::ImageCapture & msg)
  : msg_(msg)
  {}
  Init_ImageCapture_frame_name_image_sensor transforms_snapshot_is_set(::bosdyn_msgs::msg::ImageCapture::_transforms_snapshot_is_set_type arg)
  {
    msg_.transforms_snapshot_is_set = std::move(arg);
    return Init_ImageCapture_frame_name_image_sensor(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCapture msg_;
};

class Init_ImageCapture_transforms_snapshot
{
public:
  explicit Init_ImageCapture_transforms_snapshot(::bosdyn_msgs::msg::ImageCapture & msg)
  : msg_(msg)
  {}
  Init_ImageCapture_transforms_snapshot_is_set transforms_snapshot(::bosdyn_msgs::msg::ImageCapture::_transforms_snapshot_type arg)
  {
    msg_.transforms_snapshot = std::move(arg);
    return Init_ImageCapture_transforms_snapshot_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCapture msg_;
};

class Init_ImageCapture_acquisition_time_is_set
{
public:
  explicit Init_ImageCapture_acquisition_time_is_set(::bosdyn_msgs::msg::ImageCapture & msg)
  : msg_(msg)
  {}
  Init_ImageCapture_transforms_snapshot acquisition_time_is_set(::bosdyn_msgs::msg::ImageCapture::_acquisition_time_is_set_type arg)
  {
    msg_.acquisition_time_is_set = std::move(arg);
    return Init_ImageCapture_transforms_snapshot(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCapture msg_;
};

class Init_ImageCapture_acquisition_time
{
public:
  Init_ImageCapture_acquisition_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageCapture_acquisition_time_is_set acquisition_time(::bosdyn_msgs::msg::ImageCapture::_acquisition_time_type arg)
  {
    msg_.acquisition_time = std::move(arg);
    return Init_ImageCapture_acquisition_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCapture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImageCapture>()
{
  return bosdyn_msgs::msg::builder::Init_ImageCapture_acquisition_time();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE__BUILDER_HPP_
