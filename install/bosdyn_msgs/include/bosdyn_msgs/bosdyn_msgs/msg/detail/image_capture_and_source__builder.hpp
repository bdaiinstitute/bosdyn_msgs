// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImageCaptureAndSource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE_AND_SOURCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE_AND_SOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_capture_and_source__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageCaptureAndSource_image_service
{
public:
  explicit Init_ImageCaptureAndSource_image_service(::bosdyn_msgs::msg::ImageCaptureAndSource & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImageCaptureAndSource image_service(::bosdyn_msgs::msg::ImageCaptureAndSource::_image_service_type arg)
  {
    msg_.image_service = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCaptureAndSource msg_;
};

class Init_ImageCaptureAndSource_source_is_set
{
public:
  explicit Init_ImageCaptureAndSource_source_is_set(::bosdyn_msgs::msg::ImageCaptureAndSource & msg)
  : msg_(msg)
  {}
  Init_ImageCaptureAndSource_image_service source_is_set(::bosdyn_msgs::msg::ImageCaptureAndSource::_source_is_set_type arg)
  {
    msg_.source_is_set = std::move(arg);
    return Init_ImageCaptureAndSource_image_service(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCaptureAndSource msg_;
};

class Init_ImageCaptureAndSource_source
{
public:
  explicit Init_ImageCaptureAndSource_source(::bosdyn_msgs::msg::ImageCaptureAndSource & msg)
  : msg_(msg)
  {}
  Init_ImageCaptureAndSource_source_is_set source(::bosdyn_msgs::msg::ImageCaptureAndSource::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_ImageCaptureAndSource_source_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCaptureAndSource msg_;
};

class Init_ImageCaptureAndSource_shot_is_set
{
public:
  explicit Init_ImageCaptureAndSource_shot_is_set(::bosdyn_msgs::msg::ImageCaptureAndSource & msg)
  : msg_(msg)
  {}
  Init_ImageCaptureAndSource_source shot_is_set(::bosdyn_msgs::msg::ImageCaptureAndSource::_shot_is_set_type arg)
  {
    msg_.shot_is_set = std::move(arg);
    return Init_ImageCaptureAndSource_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCaptureAndSource msg_;
};

class Init_ImageCaptureAndSource_shot
{
public:
  Init_ImageCaptureAndSource_shot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageCaptureAndSource_shot_is_set shot(::bosdyn_msgs::msg::ImageCaptureAndSource::_shot_type arg)
  {
    msg_.shot = std::move(arg);
    return Init_ImageCaptureAndSource_shot_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageCaptureAndSource msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImageCaptureAndSource>()
{
  return bosdyn_msgs::msg::builder::Init_ImageCaptureAndSource_shot();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE_AND_SOURCE__BUILDER_HPP_
