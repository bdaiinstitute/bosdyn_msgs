// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PickObjectInImage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT_IN_IMAGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT_IN_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/pick_object_in_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PickObjectInImage_walk_gaze_mode
{
public:
  explicit Init_PickObjectInImage_walk_gaze_mode(::bosdyn_msgs::msg::PickObjectInImage & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PickObjectInImage walk_gaze_mode(::bosdyn_msgs::msg::PickObjectInImage::_walk_gaze_mode_type arg)
  {
    msg_.walk_gaze_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectInImage msg_;
};

class Init_PickObjectInImage_grasp_params_is_set
{
public:
  explicit Init_PickObjectInImage_grasp_params_is_set(::bosdyn_msgs::msg::PickObjectInImage & msg)
  : msg_(msg)
  {}
  Init_PickObjectInImage_walk_gaze_mode grasp_params_is_set(::bosdyn_msgs::msg::PickObjectInImage::_grasp_params_is_set_type arg)
  {
    msg_.grasp_params_is_set = std::move(arg);
    return Init_PickObjectInImage_walk_gaze_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectInImage msg_;
};

class Init_PickObjectInImage_grasp_params
{
public:
  explicit Init_PickObjectInImage_grasp_params(::bosdyn_msgs::msg::PickObjectInImage & msg)
  : msg_(msg)
  {}
  Init_PickObjectInImage_grasp_params_is_set grasp_params(::bosdyn_msgs::msg::PickObjectInImage::_grasp_params_type arg)
  {
    msg_.grasp_params = std::move(arg);
    return Init_PickObjectInImage_grasp_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectInImage msg_;
};

class Init_PickObjectInImage_camera_model_is_set
{
public:
  explicit Init_PickObjectInImage_camera_model_is_set(::bosdyn_msgs::msg::PickObjectInImage & msg)
  : msg_(msg)
  {}
  Init_PickObjectInImage_grasp_params camera_model_is_set(::bosdyn_msgs::msg::PickObjectInImage::_camera_model_is_set_type arg)
  {
    msg_.camera_model_is_set = std::move(arg);
    return Init_PickObjectInImage_grasp_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectInImage msg_;
};

class Init_PickObjectInImage_camera_model
{
public:
  explicit Init_PickObjectInImage_camera_model(::bosdyn_msgs::msg::PickObjectInImage & msg)
  : msg_(msg)
  {}
  Init_PickObjectInImage_camera_model_is_set camera_model(::bosdyn_msgs::msg::PickObjectInImage::_camera_model_type arg)
  {
    msg_.camera_model = std::move(arg);
    return Init_PickObjectInImage_camera_model_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectInImage msg_;
};

class Init_PickObjectInImage_frame_name_image_sensor
{
public:
  explicit Init_PickObjectInImage_frame_name_image_sensor(::bosdyn_msgs::msg::PickObjectInImage & msg)
  : msg_(msg)
  {}
  Init_PickObjectInImage_camera_model frame_name_image_sensor(::bosdyn_msgs::msg::PickObjectInImage::_frame_name_image_sensor_type arg)
  {
    msg_.frame_name_image_sensor = std::move(arg);
    return Init_PickObjectInImage_camera_model(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectInImage msg_;
};

class Init_PickObjectInImage_transforms_snapshot_for_camera_is_set
{
public:
  explicit Init_PickObjectInImage_transforms_snapshot_for_camera_is_set(::bosdyn_msgs::msg::PickObjectInImage & msg)
  : msg_(msg)
  {}
  Init_PickObjectInImage_frame_name_image_sensor transforms_snapshot_for_camera_is_set(::bosdyn_msgs::msg::PickObjectInImage::_transforms_snapshot_for_camera_is_set_type arg)
  {
    msg_.transforms_snapshot_for_camera_is_set = std::move(arg);
    return Init_PickObjectInImage_frame_name_image_sensor(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectInImage msg_;
};

class Init_PickObjectInImage_transforms_snapshot_for_camera
{
public:
  explicit Init_PickObjectInImage_transforms_snapshot_for_camera(::bosdyn_msgs::msg::PickObjectInImage & msg)
  : msg_(msg)
  {}
  Init_PickObjectInImage_transforms_snapshot_for_camera_is_set transforms_snapshot_for_camera(::bosdyn_msgs::msg::PickObjectInImage::_transforms_snapshot_for_camera_type arg)
  {
    msg_.transforms_snapshot_for_camera = std::move(arg);
    return Init_PickObjectInImage_transforms_snapshot_for_camera_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectInImage msg_;
};

class Init_PickObjectInImage_pixel_xy_is_set
{
public:
  explicit Init_PickObjectInImage_pixel_xy_is_set(::bosdyn_msgs::msg::PickObjectInImage & msg)
  : msg_(msg)
  {}
  Init_PickObjectInImage_transforms_snapshot_for_camera pixel_xy_is_set(::bosdyn_msgs::msg::PickObjectInImage::_pixel_xy_is_set_type arg)
  {
    msg_.pixel_xy_is_set = std::move(arg);
    return Init_PickObjectInImage_transforms_snapshot_for_camera(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectInImage msg_;
};

class Init_PickObjectInImage_pixel_xy
{
public:
  Init_PickObjectInImage_pixel_xy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickObjectInImage_pixel_xy_is_set pixel_xy(::bosdyn_msgs::msg::PickObjectInImage::_pixel_xy_type arg)
  {
    msg_.pixel_xy = std::move(arg);
    return Init_PickObjectInImage_pixel_xy_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectInImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PickObjectInImage>()
{
  return bosdyn_msgs::msg::builder::Init_PickObjectInImage_pixel_xy();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT_IN_IMAGE__BUILDER_HPP_
