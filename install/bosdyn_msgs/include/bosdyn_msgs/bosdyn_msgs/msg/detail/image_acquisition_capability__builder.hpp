// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImageAcquisitionCapability.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_ACQUISITION_CAPABILITY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_ACQUISITION_CAPABILITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_acquisition_capability__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageAcquisitionCapability_image_sources
{
public:
  explicit Init_ImageAcquisitionCapability_image_sources(::bosdyn_msgs::msg::ImageAcquisitionCapability & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImageAcquisitionCapability image_sources(::bosdyn_msgs::msg::ImageAcquisitionCapability::_image_sources_type arg)
  {
    msg_.image_sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageAcquisitionCapability msg_;
};

class Init_ImageAcquisitionCapability_service_name
{
public:
  Init_ImageAcquisitionCapability_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageAcquisitionCapability_image_sources service_name(::bosdyn_msgs::msg::ImageAcquisitionCapability::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_ImageAcquisitionCapability_image_sources(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageAcquisitionCapability msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImageAcquisitionCapability>()
{
  return bosdyn_msgs::msg::builder::Init_ImageAcquisitionCapability_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_ACQUISITION_CAPABILITY__BUILDER_HPP_
