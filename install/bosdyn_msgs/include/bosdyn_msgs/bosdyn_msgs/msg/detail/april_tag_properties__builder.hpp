// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AprilTagProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__APRIL_TAG_PROPERTIES__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__APRIL_TAG_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/april_tag_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AprilTagProperties_detection_covariance_reference_frame
{
public:
  explicit Init_AprilTagProperties_detection_covariance_reference_frame(::bosdyn_msgs::msg::AprilTagProperties & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AprilTagProperties detection_covariance_reference_frame(::bosdyn_msgs::msg::AprilTagProperties::_detection_covariance_reference_frame_type arg)
  {
    msg_.detection_covariance_reference_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AprilTagProperties msg_;
};

class Init_AprilTagProperties_detection_covariance_is_set
{
public:
  explicit Init_AprilTagProperties_detection_covariance_is_set(::bosdyn_msgs::msg::AprilTagProperties & msg)
  : msg_(msg)
  {}
  Init_AprilTagProperties_detection_covariance_reference_frame detection_covariance_is_set(::bosdyn_msgs::msg::AprilTagProperties::_detection_covariance_is_set_type arg)
  {
    msg_.detection_covariance_is_set = std::move(arg);
    return Init_AprilTagProperties_detection_covariance_reference_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::AprilTagProperties msg_;
};

class Init_AprilTagProperties_detection_covariance
{
public:
  explicit Init_AprilTagProperties_detection_covariance(::bosdyn_msgs::msg::AprilTagProperties & msg)
  : msg_(msg)
  {}
  Init_AprilTagProperties_detection_covariance_is_set detection_covariance(::bosdyn_msgs::msg::AprilTagProperties::_detection_covariance_type arg)
  {
    msg_.detection_covariance = std::move(arg);
    return Init_AprilTagProperties_detection_covariance_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AprilTagProperties msg_;
};

class Init_AprilTagProperties_frame_name_camera
{
public:
  explicit Init_AprilTagProperties_frame_name_camera(::bosdyn_msgs::msg::AprilTagProperties & msg)
  : msg_(msg)
  {}
  Init_AprilTagProperties_detection_covariance frame_name_camera(::bosdyn_msgs::msg::AprilTagProperties::_frame_name_camera_type arg)
  {
    msg_.frame_name_camera = std::move(arg);
    return Init_AprilTagProperties_detection_covariance(msg_);
  }

private:
  ::bosdyn_msgs::msg::AprilTagProperties msg_;
};

class Init_AprilTagProperties_fiducial_filtered_pose_status
{
public:
  explicit Init_AprilTagProperties_fiducial_filtered_pose_status(::bosdyn_msgs::msg::AprilTagProperties & msg)
  : msg_(msg)
  {}
  Init_AprilTagProperties_frame_name_camera fiducial_filtered_pose_status(::bosdyn_msgs::msg::AprilTagProperties::_fiducial_filtered_pose_status_type arg)
  {
    msg_.fiducial_filtered_pose_status = std::move(arg);
    return Init_AprilTagProperties_frame_name_camera(msg_);
  }

private:
  ::bosdyn_msgs::msg::AprilTagProperties msg_;
};

class Init_AprilTagProperties_frame_name_fiducial_filtered
{
public:
  explicit Init_AprilTagProperties_frame_name_fiducial_filtered(::bosdyn_msgs::msg::AprilTagProperties & msg)
  : msg_(msg)
  {}
  Init_AprilTagProperties_fiducial_filtered_pose_status frame_name_fiducial_filtered(::bosdyn_msgs::msg::AprilTagProperties::_frame_name_fiducial_filtered_type arg)
  {
    msg_.frame_name_fiducial_filtered = std::move(arg);
    return Init_AprilTagProperties_fiducial_filtered_pose_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::AprilTagProperties msg_;
};

class Init_AprilTagProperties_fiducial_pose_status
{
public:
  explicit Init_AprilTagProperties_fiducial_pose_status(::bosdyn_msgs::msg::AprilTagProperties & msg)
  : msg_(msg)
  {}
  Init_AprilTagProperties_frame_name_fiducial_filtered fiducial_pose_status(::bosdyn_msgs::msg::AprilTagProperties::_fiducial_pose_status_type arg)
  {
    msg_.fiducial_pose_status = std::move(arg);
    return Init_AprilTagProperties_frame_name_fiducial_filtered(msg_);
  }

private:
  ::bosdyn_msgs::msg::AprilTagProperties msg_;
};

class Init_AprilTagProperties_frame_name_fiducial
{
public:
  explicit Init_AprilTagProperties_frame_name_fiducial(::bosdyn_msgs::msg::AprilTagProperties & msg)
  : msg_(msg)
  {}
  Init_AprilTagProperties_fiducial_pose_status frame_name_fiducial(::bosdyn_msgs::msg::AprilTagProperties::_frame_name_fiducial_type arg)
  {
    msg_.frame_name_fiducial = std::move(arg);
    return Init_AprilTagProperties_fiducial_pose_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::AprilTagProperties msg_;
};

class Init_AprilTagProperties_dimensions_is_set
{
public:
  explicit Init_AprilTagProperties_dimensions_is_set(::bosdyn_msgs::msg::AprilTagProperties & msg)
  : msg_(msg)
  {}
  Init_AprilTagProperties_frame_name_fiducial dimensions_is_set(::bosdyn_msgs::msg::AprilTagProperties::_dimensions_is_set_type arg)
  {
    msg_.dimensions_is_set = std::move(arg);
    return Init_AprilTagProperties_frame_name_fiducial(msg_);
  }

private:
  ::bosdyn_msgs::msg::AprilTagProperties msg_;
};

class Init_AprilTagProperties_dimensions
{
public:
  explicit Init_AprilTagProperties_dimensions(::bosdyn_msgs::msg::AprilTagProperties & msg)
  : msg_(msg)
  {}
  Init_AprilTagProperties_dimensions_is_set dimensions(::bosdyn_msgs::msg::AprilTagProperties::_dimensions_type arg)
  {
    msg_.dimensions = std::move(arg);
    return Init_AprilTagProperties_dimensions_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AprilTagProperties msg_;
};

class Init_AprilTagProperties_tag_id
{
public:
  Init_AprilTagProperties_tag_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AprilTagProperties_dimensions tag_id(::bosdyn_msgs::msg::AprilTagProperties::_tag_id_type arg)
  {
    msg_.tag_id = std::move(arg);
    return Init_AprilTagProperties_dimensions(msg_);
  }

private:
  ::bosdyn_msgs::msg::AprilTagProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AprilTagProperties>()
{
  return bosdyn_msgs::msg::builder::Init_AprilTagProperties_tag_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__APRIL_TAG_PROPERTIES__BUILDER_HPP_
