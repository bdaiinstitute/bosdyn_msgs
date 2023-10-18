// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImageProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageProperties_frame_name_image_coordinates
{
public:
  explicit Init_ImageProperties_frame_name_image_coordinates(::bosdyn_msgs::msg::ImageProperties & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImageProperties frame_name_image_coordinates(::bosdyn_msgs::msg::ImageProperties::_frame_name_image_coordinates_type arg)
  {
    msg_.frame_name_image_coordinates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageProperties msg_;
};

class Init_ImageProperties_image_capture_is_set
{
public:
  explicit Init_ImageProperties_image_capture_is_set(::bosdyn_msgs::msg::ImageProperties & msg)
  : msg_(msg)
  {}
  Init_ImageProperties_frame_name_image_coordinates image_capture_is_set(::bosdyn_msgs::msg::ImageProperties::_image_capture_is_set_type arg)
  {
    msg_.image_capture_is_set = std::move(arg);
    return Init_ImageProperties_frame_name_image_coordinates(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageProperties msg_;
};

class Init_ImageProperties_image_capture
{
public:
  explicit Init_ImageProperties_image_capture(::bosdyn_msgs::msg::ImageProperties & msg)
  : msg_(msg)
  {}
  Init_ImageProperties_image_capture_is_set image_capture(::bosdyn_msgs::msg::ImageProperties::_image_capture_type arg)
  {
    msg_.image_capture = std::move(arg);
    return Init_ImageProperties_image_capture_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageProperties msg_;
};

class Init_ImageProperties_image_source_is_set
{
public:
  explicit Init_ImageProperties_image_source_is_set(::bosdyn_msgs::msg::ImageProperties & msg)
  : msg_(msg)
  {}
  Init_ImageProperties_image_capture image_source_is_set(::bosdyn_msgs::msg::ImageProperties::_image_source_is_set_type arg)
  {
    msg_.image_source_is_set = std::move(arg);
    return Init_ImageProperties_image_capture(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageProperties msg_;
};

class Init_ImageProperties_image_source
{
public:
  explicit Init_ImageProperties_image_source(::bosdyn_msgs::msg::ImageProperties & msg)
  : msg_(msg)
  {}
  Init_ImageProperties_image_source_is_set image_source(::bosdyn_msgs::msg::ImageProperties::_image_source_type arg)
  {
    msg_.image_source = std::move(arg);
    return Init_ImageProperties_image_source_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageProperties msg_;
};

class Init_ImageProperties_image_data
{
public:
  explicit Init_ImageProperties_image_data(::bosdyn_msgs::msg::ImageProperties & msg)
  : msg_(msg)
  {}
  Init_ImageProperties_image_source image_data(::bosdyn_msgs::msg::ImageProperties::_image_data_type arg)
  {
    msg_.image_data = std::move(arg);
    return Init_ImageProperties_image_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageProperties msg_;
};

class Init_ImageProperties_camera_source
{
public:
  Init_ImageProperties_camera_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageProperties_image_data camera_source(::bosdyn_msgs::msg::ImageProperties::_camera_source_type arg)
  {
    msg_.camera_source = std::move(arg);
    return Init_ImageProperties_image_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImageProperties>()
{
  return bosdyn_msgs::msg::builder::Init_ImageProperties_camera_source();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES__BUILDER_HPP_
