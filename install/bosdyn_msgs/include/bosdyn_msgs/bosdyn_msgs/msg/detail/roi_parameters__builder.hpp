// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RoiParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/roi_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RoiParameters_window_size
{
public:
  explicit Init_RoiParameters_window_size(::bosdyn_msgs::msg::RoiParameters & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RoiParameters window_size(::bosdyn_msgs::msg::RoiParameters::_window_size_type arg)
  {
    msg_.window_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RoiParameters msg_;
};

class Init_RoiParameters_roi_percentage_in_image_is_set
{
public:
  explicit Init_RoiParameters_roi_percentage_in_image_is_set(::bosdyn_msgs::msg::RoiParameters & msg)
  : msg_(msg)
  {}
  Init_RoiParameters_window_size roi_percentage_in_image_is_set(::bosdyn_msgs::msg::RoiParameters::_roi_percentage_in_image_is_set_type arg)
  {
    msg_.roi_percentage_in_image_is_set = std::move(arg);
    return Init_RoiParameters_window_size(msg_);
  }

private:
  ::bosdyn_msgs::msg::RoiParameters msg_;
};

class Init_RoiParameters_roi_percentage_in_image
{
public:
  Init_RoiParameters_roi_percentage_in_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoiParameters_roi_percentage_in_image_is_set roi_percentage_in_image(::bosdyn_msgs::msg::RoiParameters::_roi_percentage_in_image_type arg)
  {
    msg_.roi_percentage_in_image = std::move(arg);
    return Init_RoiParameters_roi_percentage_in_image_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RoiParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RoiParameters>()
{
  return bosdyn_msgs::msg::builder::Init_RoiParameters_roi_percentage_in_image();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS__BUILDER_HPP_
