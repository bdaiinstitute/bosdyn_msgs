// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CameraPinholeIntrinsics.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA_PINHOLE_INTRINSICS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA_PINHOLE_INTRINSICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/camera_pinhole_intrinsics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraPinholeIntrinsics_k4
{
public:
  explicit Init_CameraPinholeIntrinsics_k4(::bosdyn_msgs::msg::CameraPinholeIntrinsics & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CameraPinholeIntrinsics k4(::bosdyn_msgs::msg::CameraPinholeIntrinsics::_k4_type arg)
  {
    msg_.k4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraPinholeIntrinsics msg_;
};

class Init_CameraPinholeIntrinsics_k3
{
public:
  explicit Init_CameraPinholeIntrinsics_k3(::bosdyn_msgs::msg::CameraPinholeIntrinsics & msg)
  : msg_(msg)
  {}
  Init_CameraPinholeIntrinsics_k4 k3(::bosdyn_msgs::msg::CameraPinholeIntrinsics::_k3_type arg)
  {
    msg_.k3 = std::move(arg);
    return Init_CameraPinholeIntrinsics_k4(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraPinholeIntrinsics msg_;
};

class Init_CameraPinholeIntrinsics_k2
{
public:
  explicit Init_CameraPinholeIntrinsics_k2(::bosdyn_msgs::msg::CameraPinholeIntrinsics & msg)
  : msg_(msg)
  {}
  Init_CameraPinholeIntrinsics_k3 k2(::bosdyn_msgs::msg::CameraPinholeIntrinsics::_k2_type arg)
  {
    msg_.k2 = std::move(arg);
    return Init_CameraPinholeIntrinsics_k3(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraPinholeIntrinsics msg_;
};

class Init_CameraPinholeIntrinsics_k1
{
public:
  explicit Init_CameraPinholeIntrinsics_k1(::bosdyn_msgs::msg::CameraPinholeIntrinsics & msg)
  : msg_(msg)
  {}
  Init_CameraPinholeIntrinsics_k2 k1(::bosdyn_msgs::msg::CameraPinholeIntrinsics::_k1_type arg)
  {
    msg_.k1 = std::move(arg);
    return Init_CameraPinholeIntrinsics_k2(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraPinholeIntrinsics msg_;
};

class Init_CameraPinholeIntrinsics_center_point_is_set
{
public:
  explicit Init_CameraPinholeIntrinsics_center_point_is_set(::bosdyn_msgs::msg::CameraPinholeIntrinsics & msg)
  : msg_(msg)
  {}
  Init_CameraPinholeIntrinsics_k1 center_point_is_set(::bosdyn_msgs::msg::CameraPinholeIntrinsics::_center_point_is_set_type arg)
  {
    msg_.center_point_is_set = std::move(arg);
    return Init_CameraPinholeIntrinsics_k1(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraPinholeIntrinsics msg_;
};

class Init_CameraPinholeIntrinsics_center_point
{
public:
  explicit Init_CameraPinholeIntrinsics_center_point(::bosdyn_msgs::msg::CameraPinholeIntrinsics & msg)
  : msg_(msg)
  {}
  Init_CameraPinholeIntrinsics_center_point_is_set center_point(::bosdyn_msgs::msg::CameraPinholeIntrinsics::_center_point_type arg)
  {
    msg_.center_point = std::move(arg);
    return Init_CameraPinholeIntrinsics_center_point_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraPinholeIntrinsics msg_;
};

class Init_CameraPinholeIntrinsics_focal_length_is_set
{
public:
  explicit Init_CameraPinholeIntrinsics_focal_length_is_set(::bosdyn_msgs::msg::CameraPinholeIntrinsics & msg)
  : msg_(msg)
  {}
  Init_CameraPinholeIntrinsics_center_point focal_length_is_set(::bosdyn_msgs::msg::CameraPinholeIntrinsics::_focal_length_is_set_type arg)
  {
    msg_.focal_length_is_set = std::move(arg);
    return Init_CameraPinholeIntrinsics_center_point(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraPinholeIntrinsics msg_;
};

class Init_CameraPinholeIntrinsics_focal_length
{
public:
  Init_CameraPinholeIntrinsics_focal_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraPinholeIntrinsics_focal_length_is_set focal_length(::bosdyn_msgs::msg::CameraPinholeIntrinsics::_focal_length_type arg)
  {
    msg_.focal_length = std::move(arg);
    return Init_CameraPinholeIntrinsics_focal_length_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraPinholeIntrinsics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CameraPinholeIntrinsics>()
{
  return bosdyn_msgs::msg::builder::Init_CameraPinholeIntrinsics_focal_length();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA_PINHOLE_INTRINSICS__BUILDER_HPP_
