// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImageRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageRequest_custom_params_is_set
{
public:
  explicit Init_ImageRequest_custom_params_is_set(::bosdyn_msgs::msg::ImageRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImageRequest custom_params_is_set(::bosdyn_msgs::msg::ImageRequest::_custom_params_is_set_type arg)
  {
    msg_.custom_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageRequest msg_;
};

class Init_ImageRequest_custom_params
{
public:
  explicit Init_ImageRequest_custom_params(::bosdyn_msgs::msg::ImageRequest & msg)
  : msg_(msg)
  {}
  Init_ImageRequest_custom_params_is_set custom_params(::bosdyn_msgs::msg::ImageRequest::_custom_params_type arg)
  {
    msg_.custom_params = std::move(arg);
    return Init_ImageRequest_custom_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageRequest msg_;
};

class Init_ImageRequest_pixel_format
{
public:
  explicit Init_ImageRequest_pixel_format(::bosdyn_msgs::msg::ImageRequest & msg)
  : msg_(msg)
  {}
  Init_ImageRequest_custom_params pixel_format(::bosdyn_msgs::msg::ImageRequest::_pixel_format_type arg)
  {
    msg_.pixel_format = std::move(arg);
    return Init_ImageRequest_custom_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageRequest msg_;
};

class Init_ImageRequest_resize_ratio
{
public:
  explicit Init_ImageRequest_resize_ratio(::bosdyn_msgs::msg::ImageRequest & msg)
  : msg_(msg)
  {}
  Init_ImageRequest_pixel_format resize_ratio(::bosdyn_msgs::msg::ImageRequest::_resize_ratio_type arg)
  {
    msg_.resize_ratio = std::move(arg);
    return Init_ImageRequest_pixel_format(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageRequest msg_;
};

class Init_ImageRequest_image_format
{
public:
  explicit Init_ImageRequest_image_format(::bosdyn_msgs::msg::ImageRequest & msg)
  : msg_(msg)
  {}
  Init_ImageRequest_resize_ratio image_format(::bosdyn_msgs::msg::ImageRequest::_image_format_type arg)
  {
    msg_.image_format = std::move(arg);
    return Init_ImageRequest_resize_ratio(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageRequest msg_;
};

class Init_ImageRequest_quality_percent
{
public:
  explicit Init_ImageRequest_quality_percent(::bosdyn_msgs::msg::ImageRequest & msg)
  : msg_(msg)
  {}
  Init_ImageRequest_image_format quality_percent(::bosdyn_msgs::msg::ImageRequest::_quality_percent_type arg)
  {
    msg_.quality_percent = std::move(arg);
    return Init_ImageRequest_image_format(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageRequest msg_;
};

class Init_ImageRequest_image_source_name
{
public:
  Init_ImageRequest_image_source_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageRequest_quality_percent image_source_name(::bosdyn_msgs::msg::ImageRequest::_image_source_name_type arg)
  {
    msg_.image_source_name = std::move(arg);
    return Init_ImageRequest_quality_percent(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImageRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ImageRequest_image_source_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_REQUEST__BUILDER_HPP_
