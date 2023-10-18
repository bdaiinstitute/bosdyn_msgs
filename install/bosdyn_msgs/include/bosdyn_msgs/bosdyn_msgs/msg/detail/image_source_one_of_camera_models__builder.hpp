// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImageSourceOneOfCameraModels.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_ONE_OF_CAMERA_MODELS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_ONE_OF_CAMERA_MODELS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_source_one_of_camera_models__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageSourceOneOfCameraModels_camera_models_choice
{
public:
  explicit Init_ImageSourceOneOfCameraModels_camera_models_choice(::bosdyn_msgs::msg::ImageSourceOneOfCameraModels & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImageSourceOneOfCameraModels camera_models_choice(::bosdyn_msgs::msg::ImageSourceOneOfCameraModels::_camera_models_choice_type arg)
  {
    msg_.camera_models_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourceOneOfCameraModels msg_;
};

class Init_ImageSourceOneOfCameraModels_pinhole
{
public:
  Init_ImageSourceOneOfCameraModels_pinhole()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageSourceOneOfCameraModels_camera_models_choice pinhole(::bosdyn_msgs::msg::ImageSourceOneOfCameraModels::_pinhole_type arg)
  {
    msg_.pinhole = std::move(arg);
    return Init_ImageSourceOneOfCameraModels_camera_models_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourceOneOfCameraModels msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImageSourceOneOfCameraModels>()
{
  return bosdyn_msgs::msg::builder::Init_ImageSourceOneOfCameraModels_pinhole();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_ONE_OF_CAMERA_MODELS__BUILDER_HPP_
