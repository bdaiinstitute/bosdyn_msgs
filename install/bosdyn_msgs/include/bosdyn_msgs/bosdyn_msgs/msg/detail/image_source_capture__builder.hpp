// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImageSourceCapture.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_CAPTURE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_CAPTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_source_capture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageSourceCapture_image_request_is_set
{
public:
  explicit Init_ImageSourceCapture_image_request_is_set(::bosdyn_msgs::msg::ImageSourceCapture & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImageSourceCapture image_request_is_set(::bosdyn_msgs::msg::ImageSourceCapture::_image_request_is_set_type arg)
  {
    msg_.image_request_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourceCapture msg_;
};

class Init_ImageSourceCapture_image_request
{
public:
  explicit Init_ImageSourceCapture_image_request(::bosdyn_msgs::msg::ImageSourceCapture & msg)
  : msg_(msg)
  {}
  Init_ImageSourceCapture_image_request_is_set image_request(::bosdyn_msgs::msg::ImageSourceCapture::_image_request_type arg)
  {
    msg_.image_request = std::move(arg);
    return Init_ImageSourceCapture_image_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourceCapture msg_;
};

class Init_ImageSourceCapture_image_service
{
public:
  Init_ImageSourceCapture_image_service()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageSourceCapture_image_request image_service(::bosdyn_msgs::msg::ImageSourceCapture::_image_service_type arg)
  {
    msg_.image_service = std::move(arg);
    return Init_ImageSourceCapture_image_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourceCapture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImageSourceCapture>()
{
  return bosdyn_msgs::msg::builder::Init_ImageSourceCapture_image_service();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_CAPTURE__BUILDER_HPP_
