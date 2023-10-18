// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImageSourcePinholeModel.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_source_pinhole_model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageSourcePinholeModel_intrinsics_is_set
{
public:
  explicit Init_ImageSourcePinholeModel_intrinsics_is_set(::bosdyn_msgs::msg::ImageSourcePinholeModel & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImageSourcePinholeModel intrinsics_is_set(::bosdyn_msgs::msg::ImageSourcePinholeModel::_intrinsics_is_set_type arg)
  {
    msg_.intrinsics_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourcePinholeModel msg_;
};

class Init_ImageSourcePinholeModel_intrinsics
{
public:
  Init_ImageSourcePinholeModel_intrinsics()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageSourcePinholeModel_intrinsics_is_set intrinsics(::bosdyn_msgs::msg::ImageSourcePinholeModel::_intrinsics_type arg)
  {
    msg_.intrinsics = std::move(arg);
    return Init_ImageSourcePinholeModel_intrinsics_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourcePinholeModel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImageSourcePinholeModel>()
{
  return bosdyn_msgs::msg::builder::Init_ImageSourcePinholeModel_intrinsics();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL__BUILDER_HPP_
