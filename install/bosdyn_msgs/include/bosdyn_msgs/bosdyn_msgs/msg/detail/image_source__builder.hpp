// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImageSource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_source__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageSource_custom_params_is_set
{
public:
  explicit Init_ImageSource_custom_params_is_set(::bosdyn_msgs::msg::ImageSource & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImageSource custom_params_is_set(::bosdyn_msgs::msg::ImageSource::_custom_params_is_set_type arg)
  {
    msg_.custom_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSource msg_;
};

class Init_ImageSource_custom_params
{
public:
  explicit Init_ImageSource_custom_params(::bosdyn_msgs::msg::ImageSource & msg)
  : msg_(msg)
  {}
  Init_ImageSource_custom_params_is_set custom_params(::bosdyn_msgs::msg::ImageSource::_custom_params_type arg)
  {
    msg_.custom_params = std::move(arg);
    return Init_ImageSource_custom_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSource msg_;
};

class Init_ImageSource_image_formats
{
public:
  explicit Init_ImageSource_image_formats(::bosdyn_msgs::msg::ImageSource & msg)
  : msg_(msg)
  {}
  Init_ImageSource_custom_params image_formats(::bosdyn_msgs::msg::ImageSource::_image_formats_type arg)
  {
    msg_.image_formats = std::move(arg);
    return Init_ImageSource_custom_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSource msg_;
};

class Init_ImageSource_pixel_formats
{
public:
  explicit Init_ImageSource_pixel_formats(::bosdyn_msgs::msg::ImageSource & msg)
  : msg_(msg)
  {}
  Init_ImageSource_image_formats pixel_formats(::bosdyn_msgs::msg::ImageSource::_pixel_formats_type arg)
  {
    msg_.pixel_formats = std::move(arg);
    return Init_ImageSource_image_formats(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSource msg_;
};

class Init_ImageSource_image_type
{
public:
  explicit Init_ImageSource_image_type(::bosdyn_msgs::msg::ImageSource & msg)
  : msg_(msg)
  {}
  Init_ImageSource_pixel_formats image_type(::bosdyn_msgs::msg::ImageSource::_image_type_type arg)
  {
    msg_.image_type = std::move(arg);
    return Init_ImageSource_pixel_formats(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSource msg_;
};

class Init_ImageSource_camera_models
{
public:
  explicit Init_ImageSource_camera_models(::bosdyn_msgs::msg::ImageSource & msg)
  : msg_(msg)
  {}
  Init_ImageSource_image_type camera_models(::bosdyn_msgs::msg::ImageSource::_camera_models_type arg)
  {
    msg_.camera_models = std::move(arg);
    return Init_ImageSource_image_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSource msg_;
};

class Init_ImageSource_depth_scale
{
public:
  explicit Init_ImageSource_depth_scale(::bosdyn_msgs::msg::ImageSource & msg)
  : msg_(msg)
  {}
  Init_ImageSource_camera_models depth_scale(::bosdyn_msgs::msg::ImageSource::_depth_scale_type arg)
  {
    msg_.depth_scale = std::move(arg);
    return Init_ImageSource_camera_models(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSource msg_;
};

class Init_ImageSource_rows
{
public:
  explicit Init_ImageSource_rows(::bosdyn_msgs::msg::ImageSource & msg)
  : msg_(msg)
  {}
  Init_ImageSource_depth_scale rows(::bosdyn_msgs::msg::ImageSource::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_ImageSource_depth_scale(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSource msg_;
};

class Init_ImageSource_cols
{
public:
  explicit Init_ImageSource_cols(::bosdyn_msgs::msg::ImageSource & msg)
  : msg_(msg)
  {}
  Init_ImageSource_rows cols(::bosdyn_msgs::msg::ImageSource::_cols_type arg)
  {
    msg_.cols = std::move(arg);
    return Init_ImageSource_rows(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSource msg_;
};

class Init_ImageSource_name
{
public:
  Init_ImageSource_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageSource_cols name(::bosdyn_msgs::msg::ImageSource::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ImageSource_cols(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSource msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImageSource>()
{
  return bosdyn_msgs::msg::builder::Init_ImageSource_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE__BUILDER_HPP_
