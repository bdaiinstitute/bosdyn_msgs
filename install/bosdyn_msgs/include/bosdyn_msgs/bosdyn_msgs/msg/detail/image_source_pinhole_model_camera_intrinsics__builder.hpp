// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImageSourcePinholeModelCameraIntrinsics.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL_CAMERA_INTRINSICS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL_CAMERA_INTRINSICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_source_pinhole_model_camera_intrinsics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageSourcePinholeModelCameraIntrinsics_skew_is_set
{
public:
  explicit Init_ImageSourcePinholeModelCameraIntrinsics_skew_is_set(::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics skew_is_set(::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics::_skew_is_set_type arg)
  {
    msg_.skew_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics msg_;
};

class Init_ImageSourcePinholeModelCameraIntrinsics_skew
{
public:
  explicit Init_ImageSourcePinholeModelCameraIntrinsics_skew(::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics & msg)
  : msg_(msg)
  {}
  Init_ImageSourcePinholeModelCameraIntrinsics_skew_is_set skew(::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics::_skew_type arg)
  {
    msg_.skew = std::move(arg);
    return Init_ImageSourcePinholeModelCameraIntrinsics_skew_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics msg_;
};

class Init_ImageSourcePinholeModelCameraIntrinsics_principal_point_is_set
{
public:
  explicit Init_ImageSourcePinholeModelCameraIntrinsics_principal_point_is_set(::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics & msg)
  : msg_(msg)
  {}
  Init_ImageSourcePinholeModelCameraIntrinsics_skew principal_point_is_set(::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics::_principal_point_is_set_type arg)
  {
    msg_.principal_point_is_set = std::move(arg);
    return Init_ImageSourcePinholeModelCameraIntrinsics_skew(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics msg_;
};

class Init_ImageSourcePinholeModelCameraIntrinsics_principal_point
{
public:
  explicit Init_ImageSourcePinholeModelCameraIntrinsics_principal_point(::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics & msg)
  : msg_(msg)
  {}
  Init_ImageSourcePinholeModelCameraIntrinsics_principal_point_is_set principal_point(::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics::_principal_point_type arg)
  {
    msg_.principal_point = std::move(arg);
    return Init_ImageSourcePinholeModelCameraIntrinsics_principal_point_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics msg_;
};

class Init_ImageSourcePinholeModelCameraIntrinsics_focal_length_is_set
{
public:
  explicit Init_ImageSourcePinholeModelCameraIntrinsics_focal_length_is_set(::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics & msg)
  : msg_(msg)
  {}
  Init_ImageSourcePinholeModelCameraIntrinsics_principal_point focal_length_is_set(::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics::_focal_length_is_set_type arg)
  {
    msg_.focal_length_is_set = std::move(arg);
    return Init_ImageSourcePinholeModelCameraIntrinsics_principal_point(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics msg_;
};

class Init_ImageSourcePinholeModelCameraIntrinsics_focal_length
{
public:
  Init_ImageSourcePinholeModelCameraIntrinsics_focal_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageSourcePinholeModelCameraIntrinsics_focal_length_is_set focal_length(::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics::_focal_length_type arg)
  {
    msg_.focal_length = std::move(arg);
    return Init_ImageSourcePinholeModelCameraIntrinsics_focal_length_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics>()
{
  return bosdyn_msgs::msg::builder::Init_ImageSourcePinholeModelCameraIntrinsics_focal_length();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL_CAMERA_INTRINSICS__BUILDER_HPP_
