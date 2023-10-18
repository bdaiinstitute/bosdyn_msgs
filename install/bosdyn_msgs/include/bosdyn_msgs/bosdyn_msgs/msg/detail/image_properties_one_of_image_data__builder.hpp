// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImagePropertiesOneOfImageData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES_ONE_OF_IMAGE_DATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES_ONE_OF_IMAGE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_properties_one_of_image_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImagePropertiesOneOfImageData_image_data_choice
{
public:
  explicit Init_ImagePropertiesOneOfImageData_image_data_choice(::bosdyn_msgs::msg::ImagePropertiesOneOfImageData & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImagePropertiesOneOfImageData image_data_choice(::bosdyn_msgs::msg::ImagePropertiesOneOfImageData::_image_data_choice_type arg)
  {
    msg_.image_data_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImagePropertiesOneOfImageData msg_;
};

class Init_ImagePropertiesOneOfImageData_keypoints
{
public:
  explicit Init_ImagePropertiesOneOfImageData_keypoints(::bosdyn_msgs::msg::ImagePropertiesOneOfImageData & msg)
  : msg_(msg)
  {}
  Init_ImagePropertiesOneOfImageData_image_data_choice keypoints(::bosdyn_msgs::msg::ImagePropertiesOneOfImageData::_keypoints_type arg)
  {
    msg_.keypoints = std::move(arg);
    return Init_ImagePropertiesOneOfImageData_image_data_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImagePropertiesOneOfImageData msg_;
};

class Init_ImagePropertiesOneOfImageData_coordinates
{
public:
  Init_ImagePropertiesOneOfImageData_coordinates()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImagePropertiesOneOfImageData_keypoints coordinates(::bosdyn_msgs::msg::ImagePropertiesOneOfImageData::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return Init_ImagePropertiesOneOfImageData_keypoints(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImagePropertiesOneOfImageData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImagePropertiesOneOfImageData>()
{
  return bosdyn_msgs::msg::builder::Init_ImagePropertiesOneOfImageData_coordinates();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES_ONE_OF_IMAGE_DATA__BUILDER_HPP_
